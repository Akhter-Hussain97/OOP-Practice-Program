/*	Define a class batsman with the following specifications:
Private members:
bcode	4 digits code number
bname	20 characters
innings, notout, runs	integer type
batavg	it is calculated according to the formula 
 	batavg =runs/(innings-notout)
calcavg()	Function to compute batavg
Public members:
readdata()	Function to accept value from bcode, name, innings,  
 	notout and invoke the function calcavg()
displaydata()	Function to display the data members on the screen. 
*/
#include<iostream>
using namespace std;
class Batsman{
	private:
		int bcode;
		char bname[20];
		int inning,notout,runs;
		float batavg;
	  float calcavg(){
	  	batavg=runs/(inning-notout);
	  	return batavg;
	  }
	public:
	void readdata(){
	   cout<<"enter the bcode"<<endl;
	   cin>>bcode;
	   cin.ignore();
	   cout<<"enter the bname"<<endl;
	   cin.getline(bname,20);
	   cout<<"enter the inning"<<endl;
	   cin>>inning;
	   cout<<"if the batsman is notout the user enter 0, otherwise enter 1"<<endl;
	   cin>>notout;
	   cout<<"enter the runs of the batsman"<<endl;
	   cin>>runs;
	calcavg();
	  }
	  void displaydata(){
	  	cout<<"the bcode="<<bcode<<endl;
	  	cout<<"the bname="<<bname<<endl;
	  	cout<<"the batsman is play inning="<<inning<<endl;
	  	cout<<"the batsman run is="<<runs<<endl;
	  	cout<<"if the batsman is notout the user enter 0, otherwise enter 1="<<notout<<endl;
	  }
};
int main(){
	Batsman b;
	b.readdata();
	b.displaydata();
	}
