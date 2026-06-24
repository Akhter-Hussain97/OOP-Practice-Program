#include<iostream>
#include<cstring>
using namespace std;
class Name{
  private:
  	string name;
  	public:
  	Name(string n){
  	   n=name;
	  }
	  Name operator+(Name n2){
	  	Name n3(0);
	  	n3.name=name+n2.name;
	  	return n3;
	  }
	  void in(){
	  	cout<<"enter the name"<<endl;
	  	getline(cin,name);
	  }
	  void out(){
	  	cout<<"name"<<name<<endl;
	  }
};
int main(){
	Name n1("akhter"),n2("ali"),sum(0);
	sum=n1+n2;
	sum.out();
}
