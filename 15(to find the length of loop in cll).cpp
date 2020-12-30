#include<iostream>
using namespace std;
struct Node{
int data;
Node *next;	
};
int count(struct Node *n){
	int res=1;
	struct Node *temp=n;
	while(temp->next !=n){
		res++;
		temp=temp->next;
	}
	return res;
}
int countloop(struct Node *head){
	Node *slow=head,*fast=head;
	while(slow && fast && fast->next){
	   	slow=slow->next;
		fast=fast->next->next;
		if(slow ==fast){
			return count(slow);
		}
	}
	return 0;
}
void push(Node **head,int data){
	struct Node *temp=new Node;
	temp->data=data;
	temp->next=*head;
	*head=temp;
}
int main(){
	struct Node *head=NULL;
	push(&head, 20); 
    push(&head, 4); 
    push(&head, 15); 
    push(&head, 10); 
    head->next->next->next->next=head->next;
	 cout<<countloop(head);
}
