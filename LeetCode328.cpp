#include <iostream>
using namespace std;
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
	while(p!=NULL && p->next!=NULL && q->next!=NULL){
			p->next = p->next->next;
			q->next = q->next->next;
			cout<<"q: "<<q->val<<endl;
			p = p->next;
			q = q->next;
	}
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


