#include<iostream>
using namespace std;
class BOOK{
	private:
		int Bid, Bprice;
		char Bname[20];
	public:
		void InputB(){
			cout<<"Enter the Bid"<<endl;
			cin>>Bid;
			cout<<"Enter the Bprice"<<endl;
			cin>>Bprice;
			cout<<"Enter the Bname"<<endl;
			cin>>Bname;
		}
		void OutputB(){
		cout<<"The Book ID is "<<Bid<<endl;
		cout<<"The Book Price is "<<Bprice<<endl;
		cout<<"The Book Name is "<<Bname<<endl;
		}
};
class WRITER{
	private:
		char Wname[20], Waddress[20];
		int NofBW;
	    BOOK objB[5];
	public:
			void InputW(){
			cout<<"Enter the Writer name"<<endl;
			cin>>Wname;
			cout<<"Enter the Address of Writer"<<endl;
			cin>>Waddress;
			cout<<"Enter the No of BOOK writen by Writer "<<endl;
			cin>>NofBW;
				for(int i=0; i<5; i++)
				objB[i].InputB();
		}
		void OutputW(){
		cout<<"The W_Name is "<<Wname<<endl;
		cout<<"The W_Address is "<<Waddress<<endl;
		cout<<"The No of BOOk Written By the Writer is "<<NofBW<<endl;
		   	for(int i=0; i<5; i++)
		   	objB[i].OutputB();
		}
};
int main(){
	WRITER obj;
	obj.InputW();
	obj.OutputW();
}