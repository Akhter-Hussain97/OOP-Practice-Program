#include<iostream>
using namespace std;
class student{
	private:
	int math;
	int physics;
	int computer;
	int urdu;
	int english;
	public:
	void inputmarks(){
	cout<<"enter the marks of five subject "<<endl;
	cin>>math>>physics>>urdu>>english>>computer;
	}
	void getassign(int m,int c,int e,int u,int p){
		e=english;
		p=physics;
		c=computer;
		u=urdu;
		m=math;
	}
	void sum(){
	   int S;	
		S=math+physics+computer+urdu+english;
		cout<<S<<endl;
	}
	void avg(){
		int S;
		int avg=S/5;
	  cout<<avg<<endl;
	}
	
};
int main(){
	student s1;
	s1.inputmarks();
	s1.sum();
	s1.avg();
}