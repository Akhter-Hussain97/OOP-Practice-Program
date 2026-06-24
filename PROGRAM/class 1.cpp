#include<iostream>
using namespace std;
class Distance{
	int feet;
	float inches;
	public:
void getdist(){
	cout<<"enter the feet and inches"<<endl;
	cin>>feet>>inches;
}
void setdist(int ft,float in){
	feet=ft;
	inches=in;
}
void showdist(){
	cout<<"feet="<<feet<<endl;
	cout<<"inches="<<inches<<endl;
}

};
int main(){
	Distance d1,d2;
    d1.getdist();
    d1.showdist();
    d2.setdist(5,3.2);
    d2.showdist();
}
