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
	ListNode* keepList = listNormal;
	//reverse a list
	ListNode* revList = reverseListNode(listNormal);
	//prepare to loop two lists separately 
//	ListNode* pForNormal = listNormal;
//	ListNode* pForRev = revList;
	ListNode* p = keepList;
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





