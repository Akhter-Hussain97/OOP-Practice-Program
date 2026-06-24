#include<iostream>
using namespace std;
class Array{
	int a[5];
	public:
	void input();
	void display();
	void max();
	void min();
};
 void Array::input(){
 	for(int i=0; i<5; i++)
	 cin>>a[i];
 }
 void Array::display(){
 	for(int i=0; i<5; i++)
 	cout<<a[i];
 }
 void Array::max(){
 		for(int i=0; i<5; i++){
	int	mx=a[0];
 	if(mx<a[i]){
 		mx=a[i];
 		cout<<mx<<endl;
	 }
	}
}
	 void Array::min(){
 		for(int i=0; i<5; i++){
		
	int	mn=a[0];
 	if(mn>a[i]){
 		mn=a[i];
 	}
 		cout<<mn<<endl;
 	}
 }
int main(){
	Array c1;
	c1.input();
	c1.display();
	c1.max();
	c1.min();
}