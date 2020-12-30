//search an eleent in singly linked list

#include<iostream>
#include <assert.h>  
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
void push(Node **head,int data){
	struct Node *temp=new Node;
	temp->data=data;
	temp->next=*head;
	*head=temp;
	
}
bool search(Node *head,int key){
	if(head==NULL){
		cout<<"List is empty";
	}
	struct Node *current=head;
	while(current !=NULL){
		if(current->data==key)
		return true;
		current=current->next;
	}
	return false;
}
int node(Node *head,int key){
	struct Node *current=head;
	int count=0;
	if(head==NULL){
		cout<<"List is empty";
	}
	while(current!=NULL){
		if(count==key)
		return current->data;
		count++;
		current=current->next;
		
	}
       assert(0);
	
}
int main(){
	struct Node *head=NULL;
	push(&head,5);
	push(&head,6);
	push(&head,10);
	push(&head,12);
	search(head,12)?cout<<"Yes"<<endl:cout<<"NO"<<endl;
	cout<<node(head,12);
}































































//#include<iostream>
//using namespace std;
//
//struct Node{
//	
//		int data;
//		Node *next;
//};
//struct Node *append(struct Node**head,int data){
//	struct Node *last=*head;
//	if(*head==NULL){
//		struct Node *temp=new Node;
//		temp->data=data;
//		last=temp;
//		last->next=NULL;
//
//	}
//	struct Node *temp=new Node;
//	temp->data=data;
//	last->next=temp;
//	temp->next=NULL;
//	last=temp;
//	
//}
//void traverse(struct Node *head){
//	
//	if(head==NULL){
//		cout<<"Empty list";
//		return;
//	}
//
//while(head!=0){
//	cout<<head->data<<' ';
//	head=head->next;
//}
//
//	
//}
//int main(){
//	struct Node *head=NULL;
//	head=append(&head,1);
//	head=append(&head,2);
//	head=append(&head,3);
//	head=append(&head,4);
//	traverse(head);
//}
