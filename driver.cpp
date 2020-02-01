#include<iostream>
#include"singlylink.cpp"
using namespace std;
void dashboard(){
	cout<<"\n1)Insert Element in the List"<<endl;
	cout<<"2)Print the list"<<endl;
	cout<<"3)Get length of list"<<endl;
	cout<<"4)Check whether list is empty or not?"<<endl;
	cout<<"5)Get First node data"<<endl;
	cout<<"6)Get Last node data"<<endl;
	cout<<"7)Insert data at First node"<<endl;
	cout<<"8)Insert data at Last node"<<endl;
	cout<<"9)Search for element in list"<<endl;
	cout<<"10)Delete first node"<<endl;
	cout<<"11)Delete at any node :"<<endl;
	cout<<"12) delete the last one"<<endl;
	cout<<"13) insert at any node"<<endl;
	cout<<"14)Sorted insert"<<endl;
	cout<<"14)Destroy List"<<endl;
}
int main(){
	singlylink s;
	char key;
	do{
		int n;
		dashboard();
		cout<<"\nEnter your opion"<<endl;
		cin>>n;
switch(n){
	case 1:
		int n;
		cout<<"\nTo stop adding element press 0"<<endl;
		cin>>n;
	while(n!=0){
		s.insert_element(n);
		cin>>n;
	}
	break;
	case 2:
		s.treversal();
		break;
	case 3:
	   cout<<"\nLength of list is :"<<" "<<s.getlength()<<endl;
	   break;
	case 4:
		 bool b;
		 b=s.isempty();
	if(b)
		cout<<"\nList is empty"<<endl;
	else
	  cout<<"\nList is not empty"<<endl;
	  break;
	case 5:
	     s.firstdata();
		 break;
	case 6:
	     s.lastdata();
		 break;
	case 7:
		char k;
		do{
			int elem;
			cout<<"enter element :"<<endl;
			cin>>elem;
			s.insertfirst(elem);
			cout<<"\nDo u want to add more data at first node?"<<endl;
			cin>>k;
		}while(k=='y'||k=='Y');
		
		break;
	 case 8:
	  		do{
			int elem;
			cout<<"enter element :"<<endl;
			cin>>elem;
			s.insertend(elem);
			cout<<"\nDo u want to add more data at Last node?"<<endl;
			cin>>k;
		}while(k=='y'||k=='Y'); 	 	   
	  	 
	  	 break;
	  case 9:
	  	int element;
	  	bool c;
	        cout<<"\nEnter element to search it "<<endl;
	        cin>>element;
	        c=s.search(element);
	      if(c)
	      	cout<<"\nElement found"<<endl;
		   else
		     cout<<"\nNot found"<<endl;
			break;
		case 10:
		    s.deletefirst();
			break;
		case 11:
		     int loc;
			 cin>>loc;
			 s.deleteanynode(loc);
			 break;
			 case 12:
			    s.deletelastnode();
				break;
				case 13:
				int v,l;
				cout<<"\ninsert index"<<endl;
				cin>>l;
				cout<<"insert value"<<endl;
				cin>>v;
				s.insertany(l,v);
				break;
			case 14:
				int elem;
			cout<<"enter element :"<<endl;
			cin>>elem;
			s.sortedinsert(elem);
			break;				 
	default:
		cout<<"\nIrrelevant command!"<<endl;
}		
		
cout<<"\nDo u want to interact again?"<<endl;		
cin>>key;		
	}while(key=='Y'||key=='y');

	
	return 0;
}
