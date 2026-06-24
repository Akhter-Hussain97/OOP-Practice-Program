#include<iostream>
using namespace std;
class Constructor{
	private:
		int n;
    public:
    	Constructor(){
    		cout<<"CONSTRUCTOR IS CALL"<<endl;
		}
		Constructor(int no){
			n=no;
		}
		void display(){
			cout<<"The value of n is="<<n<<endl;
		}
};
int main(){
	Constructor C, c(4);
	c.display();
	
}