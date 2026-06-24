#include<iostream>
using namespace std;
class student{
	private:
	string name;
	string city;
	public:
	  void input();
	  void output();
};
 void student:: input(){
 cout<<"enter the name"<<endl;
 getline(cin,name);
 cout<<"enter the city"<<endl;
 cin>>city;
 }
void student:: output(){
 	cout<<"Name"<<name<<endl;
 	cout<<"City"<<city<<endl;
 }
 class input_marks{
 	private:
 		int phy;
 		int math;
 		int comp;
 		int total;
   public:
   	input_marks(){

   	cout<<"enter the marks of the students"<<endl;
   	cin>>phy>>math>>comp;
   	total=phy+math+comp;
   	float avg=total/3.0;
   }
   
 };
 class result: public input_marks,