#include<iostream>
using namespace std;
class Myclass{
	private:
		int n;
	public:
		void input_data(){
			cout<<"enter the number"<<endl;
			cin>>n;
		}
		void output_data(){
			cout<<"the number is ="<<n<<endl;
		}
};
int main(){
	Myclass obj;
	obj.input_data();
	obj.output_data();	
}