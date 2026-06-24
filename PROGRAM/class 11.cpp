#include<iostream>
using namespace std;
class doctor{
	private:
	int did;
	string dname;
	public:
    doctor(){
    	did=0;
    	dname="default";
	}
	doctor(int i,string c){
	did=i;
    dname=c;
	}
	void show(){
	 cout<<"doctor id is"<<did<<endl;
	 cout<<"doctor name "<<dname<<endl;
	}
};
int main(){
	doctor d1;
	doctor d2(34,"akhter");
	d1.show();
	d2.show();
}