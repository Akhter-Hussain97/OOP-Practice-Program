#include<iostream>
using namespace std;
class Book{
private:
	int bookno;
	char booktitle[20];
	float bookprice;
	float TOTAL_COST(int N){
		return (N=bookprice);
	}
	public:
	void INPUT(){
		cout<<"enter the bookno,booktitle,bookprice"<<endl;
		cin>>bookno>>booktitle>>bookprice;
	}
	void PURCHASE(){
		int n;
		cout<<"enter no of copies";
		cin>>n;
		cout<<"total cost is ="<<TOTAL_COST(n)<<endl;
	}
};
int main(){
	Book b1,b2;
	b1.INPUT();
	b2.PURCHASE();
}