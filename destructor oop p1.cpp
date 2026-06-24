#include<iostream>
using namespace std;
class Destructor{
	private:
		int n;
    public:
    	Destructor(){
    		cout<<"CONSTRUCTOR IS CALL"<<endl;
		}
		~Destructor(){
				cout<<"DESTRUCTOR IS CALL"<<endl;
		}
};
void CreateObj(){
	Destructor D;
}
int main(){
	Destructor C;
	cout<<"Back in main"<<endl;
	CreateObj();
}