#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	try{
	cout<<"Enter the first no a "<<endl;
	cin>>a;
	cout<<"Enter the second no b "<<endl;
	cin>>b;
	if(b==0)
	throw 0;
	c=a/b;
	cout<<"The result of c is "<<c<<endl;
	}
	catch(int){
		cout<<"You cannot divide "<<endl;
	}
}