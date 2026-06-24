#include<iostream>
using namespace std;
class students{
	private:
		int roll_no;
		 string name;
		  int marks;
	public:
		void setvalue(int r, string n, int c){
			roll_no=r;
			name=n;
			marks=c;
		}
		void getvalue(){
			cout<<"------------------Output of the Program---------------------"<<endl;
			cout<<roll_no<<endl;
			cout<<name<<endl;
			cout<<marks<<endl;
		}
};