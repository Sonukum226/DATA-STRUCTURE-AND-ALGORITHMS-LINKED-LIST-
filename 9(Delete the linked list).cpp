#include<bits/stdc++.h>
using namespace std;
 class Node{
 	public:
	 int data;
	 Node *next;
};
void push(Node **head,int data){
	Node *new_node=new Node;
	new_node->data=data;
	new_node->next=*head;
	*head=new_node;
}
void del(Node **head){
	Node *current=*head;
	Node *next;
	while(current!=NULL){
		next=current->next;
		free(current);
		current=next;
	}
	*head==NULL;
}
	
void reverse(Node *head){
	if(head==NULL)
	return ;
	cout<<"abc::";
	Node *prev=NULL,*Next,*curr=head;
	while(curr){
		Next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=Next;
		cout<<prev->data<<" ";
	}
	cout<<endl;
}



  void traverse(Node *head){
  	if(head==NULL){
  		cout<<"list is empty"<<endl;
	  }
	  int count=0;
	  while(head!=NULL){
	  	cout<<head->data<<" ";
	  	head=head->next;
	  	++count;
	  }
	  cout<<endl<<"NO of node"<<count;
  }
int main(){
 Node *head=NULL;
	push(&head,1);
	push(&head,2);
	push(&head,2);
	push(&head,3);
	traverse(head);
	reverse(head);
	del(&head);
	
	
}
