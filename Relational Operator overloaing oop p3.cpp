#include<iostream>
using namespace std;
class Distance{
	private:
	int feet;
	float inch;
	public:
		Distance():feet(0),inch(0){
		}
	Distance(int ft, int ih){
		feet=ft;
		inch=ih;
	}
	int operator <(Distance obj){
		if(feet<obj.feet&&inch<obj.inch){
			return 1;
		}
		else {
			return 0;
		}
	
	}
	void show(){
		cout<<"feet"<<feet<<"inche"<<inch<<endl;
	}
};
int main(){
	Distance d1(7,8.3), d2(4,4.5);
	if(d1<d2){
		cout<<"d1 is less than d2"<<endl;
	}
	else {
		cout<<"d2 is less than d2 "<<endl;
	}
}