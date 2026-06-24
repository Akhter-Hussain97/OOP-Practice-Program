#include<iostream>
#include<string>
using namespace std;

class CAR{
	private:
		 string Modal;
		int Chasis_NO;
	public:
		void set_Modal(string m){
			Modal=m;
		}
		void set_Chas_NO(int Ch_no){
			Chasis_NO=Ch_no;
		}
		void get_data(){
		cout<<Modal<<Chasis_NO<<endl;
		}
};
int main(){
	CAR C;
	C.set_Modal("Mehran");
	C.set_Chas_NO(3423);
           C.get_data();
}