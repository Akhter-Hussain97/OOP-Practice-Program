#include<iostream>
using namespace std;
class Name{
	private:
	  char name[20];
	public:
	   Name():name(""){}
	   Name(char n[]){
	   	strcpy(name,n);
	   }
	   void getdata(){
	   	cout<<"enter the name"<<endl;
	   	cin.getline(name,20);
	   }
	   void showdata(){
	   	cout<<"the name is="<<name<<endl;
	   }
	void operator += (Name char n){
		strcpy(name,N.name);
		strcat(name,N.name);
	}
};
int main(){
	Name n1,n2,n3;
}