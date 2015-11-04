#include <iostream>
using namespace std;
struct Node{
	int data;
	Node* next;

	Node(void):next(NULL){}
	Node(int mydata):data(mydata),next(NULL){}
	Node(int mydata, Node* ptr):data(mydata),next(ptr){}
	int getData(){return data;}
	void setData(int a_data){data = a_data;}
};
struct LinkedList{
	Node* _pHead;
	Node* _pTail;
	LinkedList(int val);
	void tailAppend(int val);
	void traverse_and_Print_LinkedList();
	void remove(int val);
};
LinkedList::LinkedList(int val)
{
	_pHead = new Node(val);
	_pTail = _pHead;
}
void LinkedList::traverse_and_Print_LinkedList()
{
	if (_pHead == NULL){
		cout<<"This link is empty"<<endl;
	}
	else{
		Node* p = _pHead;
		while (p != NULL){
			cout<<p->data;
			cout<<" ->";
			p = p->next;
		}
		cout<<endl;
	}
}
void LinkedList::tailAppend(int val){
	if (_pHead == NULL){//if list is empty
		_pHead = _pTail = new Node(val);
	}
	else{
		_pTail->next = new Node(val);
		_pTail = _pTail->next;
	}
}
int main()
{
	LinkedList china(10);
	china.tailAppend(5);
	china.tailAppend(0);
	china.tailAppend(-5);
	Node* p = china._pHead;
	Node* q = p;
	while(p!=NULL){
		if (p->data == 0 && p!=china._pHead){//如果不是头Node
			q->next = p->next;
			//cout<<"found p == 0"<<endl;
			delete p;
			//cout<<"delete p"<<endl;
			p = NULL;
		}
		else if(p->data == 0 && p == china._pHead){//如果是头Node
			delete china._pHead;
			china._pHead = p->next;
		}
		else{//如果没找到，把q设成p的前一Node
			q = p;
			p = p->next;
		}
	}
	china.traverse_and_Print_LinkedList();
	
	return 0;
}

