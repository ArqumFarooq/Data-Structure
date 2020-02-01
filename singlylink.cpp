#include<iostream>
#include"singlylink.h"
using namespace std;
singlylink::singlylink(){        //constructor
	first=last=NULL;
	count=0;
}
singlylink::~singlylink(){
	destroylist();
}

void singlylink::insert_element(int element){
     t=new node(element);             //in short t is called current pointer
	 	
		if(first==NULL){ //list is empty
 		first=t;
		last=t;
		count++;
	}
	
	else{
		last->next=t;
		last=t;
		count++;
	}
}
	
	int singlylink::getlength(){
	
	           //return length of list;
		return count;
	}
	
	
bool singlylink::isempty(){
	if(first==NULL)
	  return true;
	  else
	   return false;
}

void singlylink::treversal(){
	t=first;
	while(t!=NULL){
		cout<<endl;
		cout<<t->data<<endl;
		t=t->next;
	}
}

void singlylink::destroylist(){
	while(first!=NULL){
		temp=first;       //set temp to current node
		first=first->next;  // move first to next node to run while loop
		delete temp;
	}
	last=NULL;
	count=0;
}


void singlylink::firstdata(){
	if(first!=NULL){
		cout<<"\nFirst node data is :"<<first->data<<endl;
	}
	else
	cout<<"\nfirst node is null"<<endl;
}

void singlylink::lastdata(){
	if(last!=NULL){
		cout<<"\nlast node data is :"<<last->data;
	}
	else{
		cout<<"\nLast node is simply null"<<endl;
	}
}

bool singlylink::search(int element){
	bool found=false;
	if(first==NULL)
      cout<<"\nList is empty nothing to search"<<endl;
	  else{
	  t=first;  //decdlare pointer to traverse

	  while(t!=NULL&&!found){
	  if(t->data==element)
	        found=true;
		else
		   t=t->next;	         
	}
}
return found;
}

void singlylink::insertfirst(int element){
	t=new node(element);
	t->next=first; //insert before first
	first=t;       //now first point first bnode
	count++;
	
	if(last==NULL) // if list is empty than last should also link with current first node
	      last=t;        
}


void singlylink::insertany(int loc,int val){
	t=new node(val);
	p=first;
	int i=1;
	
	while(i<loc-1){
		p=p->next;
		i++;
	}
	
	q=p->next;
	p->next=t;
	t->next=q;
	
	
	
}








void singlylink::insertend(int element){
	t=new node(element);
	if(first==NULL){     //if list is empty than first and last point the same new node
		first=t;
		last=t;
		count++;
	}
	else{
		last->next=t;      //insert after last node;
		last=t;           //set last to new last node;
		count++;      
	}
}

void singlylink::deletefirst(){
	if(!isempty()){
	
	      temp=first;
	      first=temp->next;
	      temp->next=NULL;
	      delete temp;
}
}


void singlylink::deleteanynode(int loc){
	if(!isempty()){
		t=first;
		int i=1;
	while(i<loc-1){       // to get control one previous node of actual node we want to delete
	   t=t->next;
	   i++;	
	}	
	
	temp=t->next; //actual node we want to delete
	t->next=temp->next;   // get connection next node of delteted node
	temp->next=NULL;
	delete temp;
	}
}

void singlylink::deletelastnode(){
	deleteanynode(getlength());
}

void singlylink::sortedinsert(int x){
	t=new node(x);
	
if(first==NULL|| first->data>=t->data){
	t->next=first;
	first=t;
}	
	
else{
	
	temp=first;
	
	while(temp!=NULL&&temp->next->data<t->data)
	{     //search the position
		temp=temp->next;
	}            
	temp->next=t;      //set the node
		
    }	
}
