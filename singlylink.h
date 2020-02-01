#include<iostream>
#include"node.cpp"
class singlylink{
	public:
		singlylink();  //constructor
		~singlylink();
		int getlength();
		void firstdata();
		void lastdata();
		void insert_element(int a);
		void treversal();  //for printing;
		bool isempty();
		void destroylist();
		bool search(int a);
		void insertfirst(int b);
		void insertany(int l,int v);
		void insertend(int c);
		void deletefirst();
		void deleteanynode(int l);
		void deletelastnode();
		void sortedinsert(int el);
		protected:
		node *first,*last,*t,*temp,*p,*q;// t for some functions
		                                    //for treversal or use in other things
  
		int count;  // to get length of list;                		                                    
};
