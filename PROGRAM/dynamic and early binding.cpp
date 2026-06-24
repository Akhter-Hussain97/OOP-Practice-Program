#include<iostream>
using namespace std; 
class person{
	public:
	virtual void show(){
		cout<<"this is the person class"<<endl;
	}	
};
class teacher: public person{
	public:
		void show(){
			cout<<"this is the teacher class"<<endl;
		}
};
 class employee: public teacher{
 	public:
 		void show(){
 			cout<<"this is the employee class"<<endl;
		 }
 };
 main(){
 	person *ptr[5];
 	int op,i;
 	for(i=0; i<5; i++){
 	cout<<"enter the operator"<<endl;
 	cin>>op;
 	if(op==0)
 	ptr[i]=new person;
 	else if(op==1)
 	ptr[i]=new teacher;
 	else 
 	ptr[i]=new employee;
 }
	 for(i=0; i<5; i++)
 	ptr[i]->show();
}