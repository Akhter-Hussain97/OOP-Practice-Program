#include<iostream>
#include<string.h>
using namespace std;
class TV{
	private:
		char BrandName[20], ModalName[20];
		double Price;
	public:
		TV(char b[], char m[], double p){
			strcpy(BrandName,b);
			strcpy(ModalName,m);
			Price=p;
		}
		void Display(){
			cout<<"The Brand Name of TV IS= "<<BrandName<<endl;
			cout<<"The Modal Name of TV IS= "<<ModalName<<endl;
			cout<<"The Price Of A TV IS = "<<Price<<endl;
		}
		void ChangeAttribute(char b[], char m[], double p){
				strcpy(BrandName,b);
			strcpy(ModalName,m);
			Price=p;
		}
};
int main(){
	TV tv("STDV", "HARI", 30000);
	tv.Display();
	tv.ChangeAttribute("STJD", "SONY",40000);
	tv.Display();
}