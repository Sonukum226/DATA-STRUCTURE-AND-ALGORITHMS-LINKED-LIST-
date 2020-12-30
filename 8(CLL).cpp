//circular linked list
#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
struct Node *addend(struct Node *last,int data){
	if(last==NULL){
		struct Node *temp=new Node;
		temp->data=data;
		last=temp;
		last->next=last;//pointing itself
		return last;
	}
	struct Node *temp=new Node;
	temp->data=data;
	temp->next=last->next;
	last->next=temp;
	last=temp;
	return last;
}
void traverse(struct Node *last){
	struct Node *p;
	if(last==NULL){
		cout<<"Linked list is empty"<<endl;
		return;
	}
	
	p=last->next;
	do{
		cout<<p->data<<" ";
		p=p->next;
	}while(p!=last->next);
}
int main(){
	struct Node *last=NULL;
	last=addend(last,6);
	last=addend(last,5);
    last=addend(last,2);
	last=addend(last,1);
	traverse(last);
}



















