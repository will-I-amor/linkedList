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
	while(head!= NULL){
		tmp = head->next;
		head->next = prev;
		prev = head;
		head = tmp;
	}
	// if(head == NULL){
	// 	cout<<"head is NULL"<<endl;
	return prev;
}

int main()
{
	ListNode* listNormal = new ListNode(10);
	listNormal->next = new ListNode(2);
	listNormal->next->next = new ListNode(3);
	listNormal->next->next->next = new ListNode(10);
	ListNode* keepList;
	ListNode* q;//此时keeplist是Null，所以q也是NULL
	ListNode* p = listNormal;
	int n=0;
	while(p!= NULL){
		keepList = new ListNode(p->val);//把值赋过来
		keepList->next =...
		if(n == 0) q=keepList; n++;
		cout<<"keepList: "<<keepList->val<<"->  ";
		cout<<"q: "<<q->val<<" "<<q<<endl;
		keepList = keepList->next;
		p = p->next;
	}
	cout<<q;
	//ListNode* revList = reverseListNode(listNormal);
	cout<<" keepList: "<<endl;
	cout<<q->val<<" -> "<<(q->next)<<endl;
	cout<<endl;
	//reverse a list
	//prepare to loop two lists separately 
//	ListNode* pForNormal = listNormal;
//	ListNode* pForRev = revList;
	





	// bool flag = true;
	// while(pForNormal != NULL && pForRev != NULL && flag == true){
	// 	if (pForNormal->val == pForRev->val){
	// 		cout<<"pForNormal: "<<pForNormal->val<<" == pForRev: "<<pForRev->val<<"   ";
	// 		flag = true;
	// 		pForNormal = pForNormal->next;
	// 		pForRev = pForRev->next;
	// 	}
	// 	else{
	// 		flag = false;
	// 	}
	// }
	// if(flag == true){
	// 	cout<<"this is a palindrome"<<endl;
	// }
	// else{
	// 	cout<<"this isn't a palindrome"<<endl;
	// }
	return 0;

}





