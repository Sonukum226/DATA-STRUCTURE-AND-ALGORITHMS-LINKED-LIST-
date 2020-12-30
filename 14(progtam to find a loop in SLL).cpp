#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
	int flag;
};
void push(Node **head,int data){
	struct Node *temp=new Node;
	temp->data=data;
	temp->flag=0;
	temp->next=*head;
	*head=temp;
}
bool detectloop(struct Node *head){
	while(head!=NULL){
		if(head->flag==1)
		return true;
		head->flag=1; //mark the node,when visited once;
		head=head->next;//update the head
	}
	return false;
}
int main(){
	struct Node *head=NULL;
	push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 10); 
    head->next->next->next=head->next;
    if(detectloop(head)){
    	cout<<"Loop found";
	}
	else cout<<"Not found";
}
