#include <iostream>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
class Solution{
public:
	ListNode* removeElements(ListNode* head, int data){
		ListNode* p = head;
		ListNode* q = p;
		while (p!=NULL){
			if (p->val == data && p == head){//是头Node
			head = head->next;
			delete p;
			delete q;
			p = head;
			q = p;
		}
		else if(p->val == data && p!=head){//不是头Node
			if(p->next == NULL){//如果是最后一个Node
				q->next = NULL;
				delete p;
				p = NULL;
			}
			else{
				q->next = p->next;
				delete p;
				p = q->next;
			}
			
		}
		else{//没找着data
			q = p;
			p = p->next;
		}
		}
		return head;		
	}
};
int main(){
	ListNode* china = new ListNode(20);
	china->next = new ListNode(15);
 	china->next->next = new ListNode(10);
 	china->next->next->next = new ListNode(10);
 	Solution sol;
 	ListNode* harbin;
 	harbin = sol.removeElements(china,15);
 	cout<<"china: "<<china->val;
 	cout<<"   ";
 	cout<<"china -> next :"<<china->next->val;
 	cout<<"   ";
 	cout<<"china -> next->next :"<<china->next->next->val;
 	cout<<endl;
 	return 0;
}







