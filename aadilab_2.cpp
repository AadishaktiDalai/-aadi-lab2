#include<iostream>
using namespace std;

//we need two classes : one for defining node and another the linked list of all the nodes 

//class for the nodes

class node{
	public:
	// the node has two parts 
	// one is the data and the other is the pointer pointing the next node

	int data;
	//the pointer
	node *ptr;

};

//class for the whole linked list

class linkedlist{
	public:
	
	//the constructer(the default condition to be satisfied)
	node *head;
	
	linkedlist(){
	//by default the value of the head is NULL
	head = NULL;
	}

	//insert a node

	void insert(int a){
		
		//the second part of the node pointing the next node

		//taking a temp node to denote the new node 
		node * temp = new node;

		//1-temp's ptr point to null
		temp->ptr=NULL;

		//2-the data of the new node should be a
		temp->data=a;
		
		//3-the previous node should point to the temp now 
		 //we have to assign a pointer to the current node 
		 node *current = head;
		 
		 if(head!=NULL){
			 //we have to move the pointer till it points to NULL
			 while(current->ptr != NULL){
			 current=current->ptr; }
			 current->ptr = temp;
		 }			
		 else{head=temp;}

	}

	//display the nodes values

	void display(){
	node *current = head;
	
	cout<<"The linked list is : ";
	while(current != NULL){

		cout<<current->data<<"->";	
		current=current->ptr;
	}
	cout<<"NULL"<<endl;}

	//delete a node(from the end)

	void delet(){node *current = head ; node * temp;
		if(head == NULL){
		}
		else if (head -> ptr == NULL){ head = NULL;
		}
		else{
			while(current -> ptr -> ptr->ptr = NULL){
				current = current -> ptr;
				temp = current -> ptr;
				current -> ptr  = NULL;
				delete temp;
			}
		}
	}

	//insert at a specific location

	void insertat(int pos , int a){

	node * current = head;
	int i = 1;
	while(i<pos-1){
		i++;
		current = current->ptr;
		}
	node * temp = new node ;
	temp->data = a;
	temp->ptr = current->ptr;
	current->ptr = temp;

	}

	//delete a node at a specific location
	void deleteat(int pos ){

	node * current = head;
	int i = 1;
	while(i<pos-1){
		i++;
		current = current->ptr;
		}
	node * temp = new node ;
	
	temp->ptr = current->ptr;
	current->ptr = current -> ptr -> ptr;
	delete temp;
	}
	//count the number of nodes in the linked list
	void count(){
	node *current = head;
	
	cout<<"The count of the linked list is : ";
	int i=0;
	while(current != NULL){
		i++;	
		current=current->ptr;
	}
	cout<<i<<endl;
	}

}; 


        int main(){

	    linkedlist li;
	    li.insert(2);
	    li.insert(4);
	    li.insert(6);
	    li.insert(8);
	    li.display();
	    
	    li.insertat(4,7);
	    li.display();
	    li.deleteat(3);
	    li.display();
	    li.count();
	    li.delet();
	    li.display();
        return 0;
}


