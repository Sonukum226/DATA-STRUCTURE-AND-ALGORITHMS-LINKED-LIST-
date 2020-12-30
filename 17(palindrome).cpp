//palindrome
#include<iostream>
#include<stack>
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
bool ispalin(Node *head){
	struct Node *temp=head;
	stack <int> s;
	while(temp!=NULL){
		s.push(temp->data);
		temp=temp->next;
	}
	while(head!=NULL){
		int i=s.top();
		s.pop();
		if(head->data == i){
			return true;
		}
		head=head->next;
	}
	return false;
}


int main(){
	struct Node *head=NULL;
	push(&head, 20); 
    push(&head, 5); 
    push(&head, 1); 
    push(&head, 20);
	cout<<ispalin(head); 
}
