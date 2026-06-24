#include<iostream>
using namespace std;
class Test{
	private:
		char name[20];
		int roll_no;
		float marks;
		public:
			Test(){
				cout<<"I  am constructor"<<endl;
			}
		void get(){
			cout<<"enter the name"<<endl;
			cin.getline(name,20);
			cout<<"enter the roll_no"<<endl;
			cin>>roll_no;
			cout<<"enter the marks"<<endl;
			cin>>marks;
		}
		void Show(){
			cout<<"The name is ="<<name<<endl;
			cout<<"roll no is="<<roll_no<<endl;
			cout<<"marks is "<<marks<<endl;
		}
};
int main(){
	Test t1,t2;
	t1.get();
	cout<<"-----------------Student 1 Result----------------"<<endl;
	t1.Show();
	t2=t1;
	cout<<"-----------------Student 2 Result-----------------"<<endl;
    t2.Show();
}