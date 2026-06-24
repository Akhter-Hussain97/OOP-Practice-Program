#include<iostream>
using namespace std;
class biodata{
	private:
	int	n1,n2;
   public:
   	void input(){
   		cout<<"enter the no"<<endl;
   		cin>>n1>>n2;
	   }
	void details(){
		cout<<"the sum of two no is="<<n1+n2<<endl;
		cout<<"the subract of two no is="<<n1-n2<<endl;
		cout<<"the product of two no is="<<n1*n2<<endl;
		cout<<"the division of two no is="<<n1/n2<<endl;
	}
	
};
int main(){
	biodata b;
	b.input();
	b.details();
}