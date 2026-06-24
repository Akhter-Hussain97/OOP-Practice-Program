#include<iostream>
using namespace std;
class Test{
	private:
		int n;
		float x,y;
		char Name[20];
		public:
			Test():n(0),x(0),y(0),Name("NULL"){
			}
			Test(int no){
				n=no;
			}
			Test(float a, float b){
				x=a;
				y=b;
			}
			Test(char m){
				Name[20]=m;
			}
			void Show(){
				cout<<n<<endl;
				cout<<x<<" "<<y<<endl;
				cout<<Name<<endl;
			}
};
int main(){
	Test T1(13);
	Test T2(4,5);
	Test T3('ali');
	T1.Show();
	T2.Show();
	T3.Show();
}