#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
void push(Node **head,int data){
	struct Node *temp=new Node;
	temp->data=data;
	temp->next=*head;
	*head=temp;
}
int count(Node *head,int key){
	Node *current=head;
	int s=0;
	while(current!=NULL){
		if(current->data==key)
		++s;
		
	current=current->next;
	}
	return s;
}
int main(){
	struct Node *head=NULL;
	int m;
	for(int i=5;i>0;i--){
		cin>>m;
		push(&head,m);
		
	}
	cout<<count(head,1);
}
