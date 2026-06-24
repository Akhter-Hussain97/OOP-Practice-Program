#include<iostream>
using namespace std; 
class person{
	public:
	virtual void show()=0;	
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
 	person *ptr[2];
 	ptr[0]=new employee;
 	ptr[1]=new teacher; 
 	ptr[1]->show();
 	ptr[0]->show();
 	
 }