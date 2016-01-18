#include <iostream>
using namespace std;
struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
 int main(){
 	ListNode* china = new ListNode(20);
 	china->next = new ListNode(15);
 	china->next->next = new ListNode(10);
 	china->next->next->next = new ListNode(5);

 	// ListNode* p = china;
 	// china = china->next;
 	// delete p;
 	// p = NULL;
 	ListNode* p = china;
 	ListNode* q = china;
 	china  = china->next;
 	delete p;
 	p = NULL;
 	cout<<"china : "<<china->val<<endl;//输出china的值是15
 	cout<<" q : "<<q->val<<endl;//输出q的值是20，所以删了p，改了china，但是q，还在那里
 	return 0;

 }

//两个指针指向同一个地址，必须删掉两个指针才能把指向的内容删掉
 //若是三个指针指向同一个地址，那么是不是应该把三个指针都删掉才能删掉值？





