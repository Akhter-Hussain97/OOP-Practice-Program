#include<iostream>
using namespace std;
class Students{
	private:
		string name;
		int rollno;
	public:
		void input_data(){
			cout<<"enter the name"<<endl;
			getline(cin,name);
			cout<<"enter the roll no"<<endl;
			cin>>rollno;
		}
		void output_data(){
			cout<<"the name of person"<<name<<endl;
			cout<<"the rollno of a person is"<<rollno<<endl;
		}
};
int main(){
	Students S;
	S.input_data();
	S.output_data();
}
