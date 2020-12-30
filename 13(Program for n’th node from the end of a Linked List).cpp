//Program for n’th node from the end of a Linked List
#include<iostream>
using namespace std;
struct Node{
	int data;
struct	Node *next;
};
void push(Node **head,int data){
	Node *temp=new Node;
	temp->data=data;
	temp->next=*head;
	*head=temp;
}
void nth(struct Node *head,int index){
	int len=0;
	struct Node *temp=head;
	while(temp!=NULL){
		temp=temp->next;
		len++;
	}
	if(len<index)
		//cout<<"Not possible"<<endl;
		return;
	temp=head;
	for(int i=1;i<len-index+1;i++)
	temp=temp->next;
	
	
	cout<<temp->data;
	return;
}
void printlist(Node *head){
	if(head==NULL){
		cout<<"Empty List";
	}
	while(head !=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main(){
	struct Node *head=NULL;
	int m,n;
	for(int i=5;i>=1;i--){
		cin>>m;
		push(&head,m);
	}
	printlist(head);
	cout<<endl<<"Enter the Index::";
	cin>>n;
	nth(head,n);
}
