//swap the kth element of Linked list
#include<iostream>
using namespace std;
struct Node{
	int data;
	Node *next;
};
void push(Node **head,int data){
	Node *temp=new Node;
	temp->data=data;
	temp->next=*head;
	*head=temp;
}
void printlist(Node *head){
	while(head){
		cout<<head->data<<" ";
		head=head->next;
	}
}
int count(Node *node){
	int count=0;
	while(node!=NULL){
		count++;
		node=node->next;
	}
	return count;
}
void swapkth(Node **head,int k){
	int n=count(*head);
	if(n<k){
		return ;
	}
	if(2*k-1==n){
		return ;
	}
	Node *x=*head;
	Node *x_prev=NULL;
	for(int i=1;i<k;i++){
		x_prev=x;
		x=x->next;
	}
	Node *y=*head;
	Node *y_prev=NULL;
	for(int i=1;i<n-k+1;i++){
		y_prev=y;
		y=y->next;
	}
	if(x_prev){
		x_prev->next=y;
	}
	if(y_prev){
		y_prev->next=x;
	}
	Node *temp=x->next;
	x->next=y->next;
	y->next=temp;
	 if (k == 1) 
        *head = y; 
    if (k == n) 
        *head = x;
}
int main(){
	struct Node *head=NULL;
	for(int i=8;i>=1;i--){
		push(&head,i);
	}
	cout << "Original Linked List: "; 
    printlist(head); 
  
    for (int k = 1; k < 9; k++) 
    { 
        swapkth(&head, k); 
        cout << "\nModified List for k = " << k << endl; 
        printlist(head); 
    } 
}
