#include<iostream>
using namespace std;
class Time{
	int hours;
	int minutes;
	int seconds;
	public:
void gettime(){
	cout<<"enter the hours minutes and seconds"<<endl;
	cin>>hours>>minutes>>seconds;
}
void settime(int h,int m,int s){
	hours=h;
	minutes=m;
	seconds=s;
}
void showtime(){
	cout<<"hours="<<hours<<":"<<"minutes="<<minutes<<":"<<"seconds="<<seconds<<":"<<endl;
}
};
int main(){
	Time t1,t2;
	t1.gettime();
	t2.gettime();
	t1.showtime();
	t2.showtime();
}