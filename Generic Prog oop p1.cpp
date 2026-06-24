#include<iostream>
using namespace std;
template<class T>
 T Max(T n1, T n2){
 	if(n1>n2){
 		return n1;
	 }
	 else {
	 	return n2;
	 }
 }
int main(){
	int r;
	r=Max(5,2);
	cout<<"The max value is"<<r<<endl;
	float R;
	R=Max(67.4,43.2);
	cout<<"The max value is"<<R<<endl;
	
}