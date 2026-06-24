/*Define a class Flight in C++ with following description:
Private Members
A data member Flight number of type integer
A data member Destination of type string
A data member Distance of type float
A data member Fuel of type float
A member function CALFUEL() to calculate the value of Fuel as per the following criteria
Distance			Fuel
<=1000			500
more than 1000 and <=2000 		1100
more than 2000 			2200
Public Members
A function FEEDINFO() to allow user to enter values for Flight Number, Destination, Distance & call function CALFUEL() to calculate the quantity of Fuel
A function SHOWINFO() to allow user to view the content of all the data members.*/
#include<iostream>
using namespace std;
class Flight{
	private:
		int Fno;
		string Destination;
		float Distance;
		float Fuel;
			void CALFUEL(){
		if(Distance<=1000)
		Fuel=500;
		else if(Distance>1000 && Distance<=2000)
		Fuel=1100;
		else
		 Fuel=2200;
	}
		public:
		Flight():Fno(0),Destination(""),Distance(0),Fuel(0){}
	/* void FEEDINFO(){
	 	cout<<"enter the flight no"<<endl;
	 	cin>>Fno;
	 	cout<<"enter the Destination"<<endl;
	 	cin>>Destination;
	 	cout<<"enter the Distance"<<endl;
	 	cin>>Distance;
	    CALFUEL();
	 }*/
	 Flight(int f){
	 	Fno=f;
	 	CALFUEL();
	 }
	 Flight(string D,float d){
		Destination=D;
		Distance=d;
	}
	
	 void SHOWINFO(){
	 	cout<<"FLIGHT NO="<<Fno<<endl;
	 	cout<<"DESTINATION="<<Destination<<endl;
	 	cout<<"DISTANCE="<<Distance<<endl;
	 	cout<<"FUEL="<<Fuel<<endl;
	 
	 }
};
main(){
	Flight f1(12);
	Flight f2("lahore",500);
	f1.SHOWINFO();
	f2.SHOWINFO();
}
