#include<iostream>
#include<string.h>
using namespace std;
class Parent{
	private:
		int n;
		char name[20];
	public:
		Parent():n(0), name("NULL"){}
		Parent(int no, char N[]){
			n=no;
			strcpy(name,N);
		}
		void Show_P(){
			cout<<"ETNER THE NUMBER OF P-ID IS "<<n<<" AND ITS NAME IS "<<name<<endl;
		}
};
class Child: public Parent{
	private:
		int x;
		char address[20];
	public:
		Child():x(0), address("NULL"){
		}
		Child(int no, char N[], int d, char Add[]): Parent(no,N){
			x=d;
			 strcpy(address,Add);
		}
		void Show_C(){
			cout<<"ETNER THE NUMBER OF C-ID IS "<<x<<" AND ITS ADDRESS IS "<<address<<endl;
		}
};
int main(){
	Child C(2,"Ali",4,"Lahore");
	C.Show_P();
	C.Show_C();
	
	
}