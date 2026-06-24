#include<iostream>
using namespace std;
class Distance{
	private:
		int Km,Hr;
	public:
		Distance():Km(0), Hr(0){
		}
	void Get(){
		cout<<"ENTER THE KILOMETER "<<endl;
		cin>>Km;
		cout<<"ENTER THE HOUR"<<endl;
		cin>>Hr;
	}
	void Show(){
		cout<<"YOU TRAVELLED "<<Km<<" KILOMETER "<<Hr<<" HOURS"<<endl;
	}
	void TotalDis(Distance TotD){
		Distance t;
		t.Km=Km+TotD.Km;
		t.Hr=Hr+TotD.Hr;
		cout<<"TOTAL DISTANCE TRAVELED IN "<<t.Km<<" KILOMETER "<<t.Hr<<" HOURS"<<endl;
	}
	  
};
int main(){
	Distance YouDis, MyDis;
	cout<<"----------INPUT YOUR DISTANCE--------------------------- "<<endl;
	YouDis.Get();
	YouDis.Show();
		cout<<"----------INPUT MY DISTANCE--------------------------- "<<endl;
	MyDis.Get();
	MyDis.Show();
	YouDis.TotalDis(MyDis);
}