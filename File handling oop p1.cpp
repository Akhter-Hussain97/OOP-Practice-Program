#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class Student{
	private:
		int rollno;
		string name;
	public:
		void inputdata(){
			cout<<"Enter the rollno and name "<<endl;
			cin>>rollno;
			cin>>name;
		}
		int getrollno(){
			return rollno;
		}
		string getname(){
		return name;
		}
};
int main(){
	Student s[3];
	ofstream outFile("student.txt");
	for(int i=0; i<3; i++){
		s[i].inputdata();
		outFile<<"Name "<<s[i].getname()<<" Rollno "<<s[i].getrollno()<<endl;
}
outFile.close();
	ifstream inFile("student.txt");
	string record;
	while(getline(inFile, record)){
		cout<<record<<endl;
	}
	inFile.close();
}