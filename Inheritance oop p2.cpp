#include<iostream>
#include<string.h>
using namespace std;
class Animal{
	protected:
		char name[20];
		int age;
	public:
		void Set_value(char n[], int a){
			strcpy(name,n);
			age=a;
			}
};
class Zebra:public Animal{
	public:
		void Show(){
			cout<<"The name of Zebra is "<<name<<" and its Age is "<<age<<endl;
		}
};
class Dolphin:public Animal{
	public:
		void Show(){
			cout<<"The name of Dolphin is "<<name<<"and it Age is "<<age<<endl;
		}
};
int main(){
	Zebra z;
	Dolphin d;
	char n1[10]="Aien", n2[10]="pari";
	z.Set_value(n1,10);
	z.Show();
	d.Set_value(n2,15);
	d.Show();
}