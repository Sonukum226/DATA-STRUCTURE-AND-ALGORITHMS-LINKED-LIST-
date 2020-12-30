#include<iostream>
using namespace std;
struct Node{
	int data;
	struct Node *next;
};
void push(Node **head,int data){
	 Node *temp=new Node;
	temp->data=data;
	temp->next=*head;
	*head=temp;
}
void removeduplicate(Node *head){
	 Node *current=head;
	Node *next_next;
	if(current==NULL) cout<<"Empty list";
	while(current->next!=NULL){
		if(current->data==current->next->data){
			next_next=current->next->next;
			free(current->next);
			current->next=next_next;
		}
		else{
			current=current->next;
		}
	}
}

void traverse(Node *head){
	while(head!=NULL){
		cout<<head->data<<" ";
		head=head->next;
	}
	
}
int main(){
	struct Node *head=NULL;
    push(&head, 13);  
    push(&head, 13);  
    push(&head, 13);  
    push(&head, 11);  
    push(&head, 11);  
    push(&head, 11); 
    traverse(head);
    removeduplicate(head);
    cout<<endl;
    traverse(head);
}
