#include <iostream>
using namespace std;
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){}
};
int main()
{
	ListNode* peace = new ListNode(1);
	peace->next = new ListNode(2);
	peace->next->next = new ListNode(3);
	peace->next->next->next = new ListNode(4);
	peace->next->next->next->next = new ListNode(5);
	ListNode* p = peace;
	ListNode* q = peace->next;
	ListNode* f = peace;
	p->next = p->next->next;//1->3
	q->next = q->next->next;
	cout<<"p->next:"<<p->next->val<<endl;
	cout<<"q->next:"<<q->next->val<<endl;
	// cout<<"peace:"<<'\n';
	// cout<<"peace->val: "<<(peace->val)<<"      peace->next:"<<peace->next->val<<endl;//peace也变成1->3
	// cout<<"q:\n";
	// cout<<"q->val: "<<q->val<<"  q->next: "<<q->next->val<<endl;
	// cout<<"f->val: "<<f->val<<"  f->next: "<<f->next->val<<endl;
	// cout<<"p: \n";
	// cout<<"p->next->next: "<<p->next->next->val<<endl;
	// p->next->next = q;
	// cout<<"after that:"<<endl;
	// cout<<"p->next->next: "<<p->next->next->val<<endl;
	// p = p->next->next;
	// cout<<"p->val: "<<p->val<<"p->next: "<<p->next->val<<endl;
	// cout<<"f->val: "<<f->val<<"  f->next: "<<f->next->val<<endl;
	// peace->next->val = 100;
	// cout<<"q->val: "<<q->val<<"  q->next: "<<q->next->val<<endl;
	return 0;
}

