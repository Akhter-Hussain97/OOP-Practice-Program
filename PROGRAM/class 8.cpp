#include<iostream>
using namespace std;
class notebook{
	private:
	int bookid;
	string bookname;
	int bookprice;
	public:
	notebook(){
		cout<<"enter the book details"<<endl;
		cin>>bookid>>bookname>>bookprice;
	}
	void display(){
	cout<<"bookid="<<bookid<<endl;
	cout<<"bookname="<<bookname<<endl;
	cout<<"bookprice="<<bookprice<<endl;
	}
	int getprice(){
		return bookprice;
	}
};
int main(){
	notebook n1,n2;
	n1.display();
	n2.display();
	int x,y,z;
	x=n1.getprice();
	y=n2.getprice();
	z=x+y;
       cout<<z;;
       if(z%2==0){
       	n1.display();
	   }
	   else {
	   n2.display();
}
}
       