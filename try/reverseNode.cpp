#include <iostream>
using namespace std;
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){}
};
ListNode* reverseListNode(ListNode* head){
	ListNode* tmp;
	ListNode* prev = NULL;
	while(head!=NULL){
		tmp = head->next;
		head->next = prev;
		prev = head;
		head = tmp;
	}
	if(head == NULL){
		cout<<"head is NULL"<<endl;
	}
	return prev;
	//此处head已经变成NULL了
}
int main(){
	ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	ListNode* p = reverseListNode(head);
	while(p!=NULL){
		if(p->next!=NULL){
			cout<<p->val<<"->";
		}
		else{
			cout<<p->val;
		}
		p = p->next;
	}
	cout<<endl;
	return 0;
}
