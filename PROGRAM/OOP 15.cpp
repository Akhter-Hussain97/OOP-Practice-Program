/*Define a class REPORT with the following specification:
Private members :
adno	4 digit admission number
name	20 characters
marks	an array of 5 floating point values
average	average marks obtained
GETAVG()	a function to compute the average obtained in five subject
Public members:
READINFO()	function to accept values for adno, name, marks. Invoke
	the function GETAVG () 
DISPLAYINFO () 	function to display all data members of report on the 
 	screen.
You should give function definitions. 
*/
#include<iostream>
using namespace std;
class REPORT{
	private:
	int adno;
	char name[20];
	float mark[5];
 float GETAVG(){
 	 int sum=0;
 	for(int i=1; i<=5; i++){
	sum+=mark[i];
}
		return sum/5.0;
	}
	public:
	void READINFO(){
		cout<<"erter the adno is ="<<endl;
		cin>>adno;
		cin.ignore();
		cout<<"enter the name is ="<<endl;
		cin.getline(name,20);
		cout<<"enter the five subject marks is ="<<endl;
		 	for(int i=1; i<=5; i++){
	cin>>mark[i];
}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                         
		GETAVG();
	}
	void DISPLAYINFO(){
	   cout<<"THE ADNO IS ="<<adno<<endl;
	   cout<<"THE NAME IS ="<<name<<endl;
	   cout<<"THE AVG IS ="<<GETAVG()<<endl;
	}
};
int main(){
	REPORT R1;
	R1.READINFO();
	R1.DISPLAYINFO();
}