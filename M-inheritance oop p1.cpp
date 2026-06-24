#include<iostream>
using namespace std;
class Student{
	private:
	 char name[20], city[20];
	 public:
	 	void INPUT_data();
	 	void OUTPUT_data();
};
class STD_Marks{
	private:
		float phy, comp, math, urdu, eng, Total, Avg;
	public:
		void INPUT_Mark(){
			cout<<"--------------INPUT MARKS---------------------"<<endl;
			cout<<"ENTER THE FIVE SUBJECT MARKS"<<endl;
			cin>>phy>>comp>>math>>urdu>>eng;
			Total=phy+comp+math+urdu+eng;
			Avg=(Total)/5.0;
		}
		void OUTPUT_Mark(){
			cout<<"---------------OUTPUT MARKS-------------------------"<<endl;
			cout<<"THE FIVE SUBJECT MARKS IS="<<phy<<comp<<math<<urdu<<eng<<endl;
			cout<<"THE AVERAGE OF STUDETN MARKS IS="<<Avg<<endl;
		}
};
 void Student::INPUT_data(){
 	cout<<"------------------INPUT DATA---------------------"<<endl;
 	cout<<"Enter the Student Name is= "<<endl;
 	cin>>name;
 	cout<<"Enter the City Name is= "<<endl;
 	cin>>city;
 }
  void Student::OUTPUT_data(){
 	cout<<"------------------OUTPUT DATA---------------------"<<endl;
 	cout<<" the Student Name is= "<<name<<endl;
 	cout<<" the City Name is= "<<city<<endl;
 }
 class Result:public Student, public STD_Marks{
 	public:
 		void Show_R(){
 			cout<<"---------------The STUDENT RESULT------------------------------------"<<endl;
 			OUTPUT_data();
 			OUTPUT_Mark();
		 }
 };
int main(){
	Result r;
	r.INPUT_data();
	r.INPUT_Mark();
	r.Show_R();
}