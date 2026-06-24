#include<iostream>
using namespace std;
class destructor{
	public:
   destructor(){
   	cout<<"destructor is created"<<endl;
   }
   ~destructor(){
   	cout<<"destructor is destroyed";
   }
};
int main(){
	destructor d;
}