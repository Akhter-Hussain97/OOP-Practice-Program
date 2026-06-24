#include<iostream>
using namespace std;
class Student{
	private:
	  int admno;
	  char sname[20];
	  float eng, math, science;
	  float total;
	 float ctotal(){
	  	total=eng + math + science;
	  	 return total;
	  }
	public:
		 void Takedata(){
			cout<<"enter the adm no"<<endl;
		cin>>admno;
		 cin.ignore();
			cout<<"enter the sname"<<endl;
			cin.getline(sname,20);
		 	cout<<"enter the three subject"<<endl;
		 	cin>>eng>>math>>science;
		 	ctotal();
		}
		void Showdata(){
			cout<<"the adm no is="<<admno<<endl;
			cout<<"the sname is="<<sname<<endl;
			cout<<"the total no is="<<total<<endl;
		}
};
  int main(){
  	Student d;
  	d.Takedata();
  	d.Showdata();
  }