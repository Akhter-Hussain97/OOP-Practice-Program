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
	Distance operator +(Distance obj){
		Distance d;
		d.feet=feet+obj.feet;
		d.inch=inch+obj.inch;
		return d;
	}
	void show(){
		cout<<"feet"<<feet<<"inche"<<inch<<endl;
	}
};
int main(){
	Distance d1(3,5.3), d2(4,8.5), Add;
	Add=d1+d2;
	Add.show();
}