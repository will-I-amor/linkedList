#include <iostream>
using namespace std;
struct ListNode{
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){}
};
int main(){
	ListNode* originList;
	ListNode* q;
	{
		originList = new ListNode(5);
		q = originList;
	}
	cout << q->val;
	return 0;
}






