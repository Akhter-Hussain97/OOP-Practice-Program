#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
		Node(int val){
			data=val;
			next=NULL;
		}
};
 class List{
 	Node* head;
 	Node* tail;
 	public:
 		List(){
 			head=tail=NULL;
		 }
    void push_front(int val){
    	Node* newNode=new Node(val);
    	if(head==NULL){
    		head=tail=newNode;
		}
		else{
			newNode->next=head;
			head=newNode;
		}
	}
		void push_back(int val){
		Node* newNode=new Node(val);
		   if(head==NULL){
		   	head=tail=newNode;
		   }
		   else{
		     Node* newNode=new Node(val);
				 tail->next=newNode;
				 tail=newNode;
		   }
	}
		void pop_front(){
			    if(head==NULL){
			    	cout<<"Empty ";
			    	return;
				}
				  Node* curr=head;
		   	    head=head->next;
				 curr->next=NULL;
				 delete curr;
			}
			
		void pop_back(){
			    if(head==NULL){
			    	cout<<"Empty ";
			    	return;
				}
				  Node* temp=head;
				   while(temp->next!=tail){
				   	   temp=temp->next;
				   }
		   	    temp->next=NULL;
				 delete tail;
				 tail=temp;
			}
		
		 void InsertPos(int val, int pos){
	    	       if(pos<0){
	    	       	cout<<"invalid position";
				   }
				   if(pos==0){
				   	push_front(val);
				   	return;
				   }
	    	  Node* temp=head;
	    	  for(int i=0; i<pos-1; i++){
	    	  	    if(temp==NULL){
	    	  	    	cout<<"INvalid pos";
					  }
	    	  	   temp=temp->next;
			  }
			Node* newNode=new Node(val);
			  newNode->next=temp->next;
			  temp->next=newNode;
		}
		int Search(int key){
			Node* temp=head;
			int idx=0;
			while(temp!=NULL){
				if(temp->data==key){
					return idx;
				}
				temp=temp->next;
				idx++;	
			}
			return -1;
		}
	void print(){
		Node* temp=head;
		while(temp!=NULL){
			cout<<temp->data<<"->";
			temp=temp->next;
		}
		cout<<"NULL"<<endl;
	}
 	
 };
 int main(){
 	List l1;
 	l1.push_front(3);
 	l1.push_front(2);
 	l1.push_front(1);
 	l1.print();
 	l1.push_back(4);
 	l1.print();
 	l1.pop_front();
 	l1.print();
 	l1.pop_back();
 	l1.print();
 	l1.InsertPos(5,1);
 	l1.print();
 	cout<<"search at the key"<<l1.Search(2);
 	l1.print();
 }