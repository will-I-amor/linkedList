#include <iostream>
using namespace std;
struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){}
};
ListNode* reverse(ListNode* head)
{
	if (!head){return NULL;}
	ListNode* p = head;
	ListNode* q = head->next;
	ListNode* r = NULL;
	head->next = NULL;
	while(q)
	{
		r = q->next;
		q->next = p;
		p = q;
		q = r;
	}
	head = p;
	return head;
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
ListNode* reverseRecur(ListNode* head)
{
	ListNode* p, *q;
	if (!head){return head;}
	p = head;
	q = p->next;
	if(!q){return p;}//如果Q为NULL，就要return p,否则会算错
	q = reverseRecur(q);
	p->next->next = p;
	p->next = NULL;
	return q;
}
int main()
{
	ListNode* peace = new ListNode(1);
	peace->next = new ListNode(2);
	peace->next->next = new ListNode(3);
	peace->next->next->next = new ListNode(4);
	peace->next->next->next->next = new ListNode(5);
	peace->next->next->next->next->next = new ListNode(6);
	ListNode* aNew = NULL;
	//aNew = reverse(peace);
	aNew = reverseRecur(peace);
	traverse_and_Print_LinkedList(aNew);
	return 0;
}
