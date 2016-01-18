#include <iostream>
using namespace std;
//想让1->2->3->4->5  变成 1->3->5->2->4
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){}
};
ListNode* oddEvenList(ListNode* head){
	ListNode* p = head;
	ListNode* f = p;
	if(head->next == NULL ||head == NULL){
		return head;
	}
	ListNode* q = head->next;
	ListNode* q_ = q;
	while(p!=NULL && p->next!=NULL && q->next!=NULL){//当时这里出了好多segmentation fault,因为尝试print或执行很多NULL的Pointer
			p->next = p->next->next;
			q->next = q->next->next;
			cout<<"q: "<<q->val<<endl;
			p = p->next;
			q = q->next;
	}
	//当时写了两个while loop,一个whileloop管p(p指向odd number),一个管q(even number)。先改p，再改q.
	//发现不可行，因为改了p之后，q也会被改值
	//所以要在同一个while loop里完成对p和q的修改
	p->next = q_;
	return f;
}
void traverse_and_Print_LinkedList(ListNode* head)
{
	if (head == NULL){
		cout<<"This link is empty"<<endl;
	}
	else{
		ListNode* p = head;
		while (p != NULL){
			cout<<p->val;
			cout<<" ->";
			p = p->next;
		}
		cout<<endl;
	}
}


int main()
{
	ListNode* peace = new ListNode(1);
	peace->next = new ListNode(2);
	peace->next->next = new ListNode(3);
	peace->next->next->next = new ListNode(4);
	peace->next->next->next->next = new ListNode(5);
	peace->next->next->next->next->next = new ListNode(6);
	peace->next->next->next->next->next->next = new ListNode(7);
	peace->next->next->next->next->next->next->next = new ListNode(8);
	peace = oddEvenList(peace);
	traverse_and_Print_LinkedList(peace);
	return 0;
}


