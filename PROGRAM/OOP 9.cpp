/*Define a class TEST in C++ with following description:
Private Members
TestCode of type integer
Description of type string
NoCandidate of type integer
CenterReqd (number of centers required) of type integer
A member function CALCNTR() to calculate and return the number of centers as
(NoCandidates/100+1)
Public Members 
- A function SCHEDULE() to allow user to enter values for TestCode, Description, NoCandidate & call function CALCNTR() to calculate the number of Centres
- A function DISPTEST() to allow user to view the content of all the data members.*/
#include<iostream>
using namespace std;
class TEST{
	private:
	int testcode;
	string description;
	int Nocandidates;
      int CenterReq;
       float CALCNTR(){
      return (Nocandidates/100+1);
	   }
	public:
  void SCHEDULE(){
     	cout<<"enter the testcode"<<endl;
    cin>>testcode;
    cin.ignore();
    cout<<"enter the description"<<endl;
    cin>>description;
    cout<<"enter the Nocandidates"<<endl;
    cin>>Nocandidates;
     CenterReq=CALCNTR();
	 }
	  void DISPTEST(){
     	cout<<"TESTCODE="<<testcode<<endl;
     	cout<<"DESCRIPTION="<<description<<endl;
     	cout<<"NO OF CANDIDATES="<<Nocandidates<<endl;
     	cout<<"NO OF CENTERREQUIRED="<<CenterReq<<endl;	
	 }	   
};
int main(){
	TEST T1;
	T1.SCHEDULE();
	T1.DISPTEST();
}
