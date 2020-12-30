//liNEKED LIST 
#include<iostream>
using namespace std;

class Linkedlist{
	public:
	int data;
	Linkedlist *next;
};
void printlinkedlist(Linkedlist *root){
	while(root !=NULL){
		cout<<endl<<root->next<<" ";
		cout<<root->data<<" ";
		
		root=root->next;
	}
}   

int main(){
	Linkedlist *root,*second,*third;
	root=new Linkedlist();
	second=new Linkedlist();
	third=new Linkedlist();
	
	root->data=10;  //1st	
	root->next=second;
	
	second->data=20; //2nd
	second->next=third;
	
	third->data=30;  //3rd
	third->next=NULL;
	printlinkedlist(root);
}


