#include<iostream>
using namespace std;
class child{
	private:
        char name[20];
        int rollno;
    public:
        void setname(char n[]){
        	n=name;
		}
	    void setrollno(int rn){
	    	rn=rollno;
		}
		void getname(){
			cout<<"name"<<name;
		}
		void getrollno(){
			cout<<"roll no"<<rollno;
		}
		friend void output();
};
 class parent{
	public:
	void output(){
		cout<<"the name is="<<name<<endl;
	}	
};
int main(){
	child c;
	
}