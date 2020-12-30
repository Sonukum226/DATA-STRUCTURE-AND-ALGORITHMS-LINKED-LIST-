#include<bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node *next;
};
void addf(struct Node **head,int data,int position){//adding at first;
	struct Node *p,*q,*new_node;
	new_node=new Node;
	new_node->data=data;
	p=*head;
	if(position==1){
	
	new_node->next=p;
	*head=new_node;
}
else cout<<"Position is not 1\n";
}

void adde(struct Node **head,int data){ //adding at end
	Node *new_node=new Node;
	struct Node *last=*head;
	new_node=new Node;
	new_node->data=data;
	new_node->next=NULL;
	if(*head==NULL){
		*head=new_node;
		return;
	}
	while(last->next !=NULL){
	
		last=last->next;
	}
	last->next=new_node;
	return;
}
void traverse(struct Node *first){  //travversing the list
	while(first !=NULL){
		cout<<first->data<<" ";
		first=first->next;
	}
	cout<<endl;
}
//Deletion 
void del(struct Node **head,int pos){
	if(*head==NULL){
		cout<<"List is empty, Deletion is not possible"<<endl;
	}
  struct Node *temp=*head;
   
   if(pos==0){
   	*head=temp->next;//head is pointing to the next element 
   	free(temp);//free the old head
   }
   for(int i=0;temp!=NULL && i<pos-1;i++)
   temp=temp->next;
   
   //if position more than number of NODES
   if(temp==NULL || temp->next==NULL)
     return;
     struct Node *next=temp->next->next;
     free(temp->next);
     temp->next=next;
}
void insertafter(struct Node *prev,int data){
	if(prev==NULL){// agsr previous node nll hao to fir insertion krna inpossible hai
		cout<<"not possible"<<endl;
	}
	Node *new_node;
	new_node=new Node;
	new_node->data=data;
	new_node->next=prev->next;//new node ka next hai wo previous node ka next hoga
	prev->next=new_node;//ab jo previous node uska node new node ho gya
	
}



int main(){  //here is the main method
	Node *first,*second,*third;
	first=new Node;
	second=new Node;
	third=new Node;
	first->data=5;
	first->next=second;
	second->data=6;
	second->next=third;
	
	third->data=9;
	third->next=NULL;
	
	traverse(first);
	
	addf(&first,1,1);
	
	traverse(first);
	
	adde(&third,6);
	
	traverse(first);
	del(&first,0);
	traverse(first);
	del(&first,6);
	addf(&first,9,1);
	traverse(first);
	
	del(&first,3);
	traverse(first);
	insertafter(first,5);
	traverse(first);
}
