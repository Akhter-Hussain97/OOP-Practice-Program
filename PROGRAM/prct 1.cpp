#include<iostream>
using namespace std;
class publication{
	private:
	  string title;
	  float price;
	public:
		void getdata();
		void putdata();
};
class book: public publication{
	private:
		int pagecount;
	public:
			void getdata();
		void putdata();
};
class tape: public book{
	private:
		float minutes;
	public:	
		void getdata();
		void putdata();
};
void publication::getdata(){
	cout<<"enter the title"<<endl;
	cin>>title;
	cout<<"enter the price"<<endl;
	cin>>price;
	cout<<"enter the page coutnt"<<endl;
	cin>>pagecount;
	cout<<"enter the minute"<<endl;
	cin>>minutes;
}
void publication::putdata(){
	cout<<"title="<<title<<endl;
	cout<<"price="<<price<<endl;
	cout<<"page="<<pagecount<<endl;
	cout<<"minute"<<minutes<<endl;	
}
int main(){
	book b;
	tape t;
	b.getdata();
	b.putdata();
	t.getdata();
	t.putdata();
}