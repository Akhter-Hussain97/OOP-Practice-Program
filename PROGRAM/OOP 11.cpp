/*Create a class Rational which represents two data members Num and Dnum with type integer. 
Create the member function that gets the Num and Dnum from the user and ShowRational () member function that displays the rational number in p/q format. 
Create a default constructor that automatically sets the rational data members to 0 and 1. Create an additional overloaded constructor for this class. 
This constructor receives integers as parameters and assigns the value to the class data members.
The class also includes a member function AddRational (Rational) to add two rational objects.
Create a main () function that declared three objects of rational, adds two rational no’s and then shows the sum of two rational by the main function. 
Makes the appropriate members function as a const member function. Demonstrates each function works correctly.*/
#include<iostream>
using namespace std;
class Rational{
	private:
	int Num,Dnum;
	public:
	Rational():Num(0),Dnum(0){}
	Rational(int n,int d):Num(n),Dnum(d){}
	void Getdata(){
		cout<<"enter the numentor"<<endl;
		cin>>Num;
		cout<<"enter the denumentor"<<endl;
		cin>>Dnum;
	}
	void AddRational(Rational r){
		Rational temp;
		temp.Dnum=Dnum*r.Dnum;
		temp.Num=Num*r.Dnum+Dnum*r.Num;
		temp.ShowRational();
	}
	void ShowRational(){
		cout<<"the numentor of p and denumentor of q is "<<Num<<'/'<<Dnum<<endl;
	}
};
int main(){
	Rational r1,r2(44,78);
	r1.Getdata();
	r1.ShowRational();
	r2.ShowRational();
	r1.AddRational(r2);
}