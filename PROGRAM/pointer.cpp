#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"enter the no"<<endl;
	cin>>a>>b;
	int *ptr1=&a;
	int *ptr2=&b;
	*ptr1+=10;
	 *ptr2+=10;
	cout<<a<<":"<<b;
}