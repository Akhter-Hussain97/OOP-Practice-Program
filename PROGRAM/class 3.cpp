#include<iostream>
#include<string>
using namespace std;
class Person{
	string pname;
	int pid;
	int psalary;
	public:
void getdata(){
	cout<<"enter the personal information"<<endl;
	cin>>pname;
	cin>>pid>>psalary;
}
void setdata(string nme,int id,int slry){
	pname=nme;
	pid=id;
	psalary=slry;
}
void showdata(){
	cout<<"pname="<<pname<<endl;
	cout<<"pid="<<pid<<endl;
	cout<<"psalary"<<psalary<<endl;
}
int getsalary(){
	return psalary;
}
bool operator>(Person& other) {
		return psalary > other.psalary;
	}
};
int main(){
	Person p1,p2,p3;
	p1.getdata();
	p1.showdata();
	p2.getdata();
	p2.showdata();
	p3.getdata();
	p3.showdata();

	if (p1 > p2) {
		p1.showdata();
	} else if (p1 > p3) {
		p1.showdata();
	} else if (p2 > p1) {
		p2.showdata();
	} else if (p2 > p3) {
		p2.showdata();
	} else if (p3 > p1) {
		p3.showdata();
	} else if (p3 > p2) {
		p3.showdata();
	} else {
		cout << "Not valid" << endl;
	}

	return 0;

}