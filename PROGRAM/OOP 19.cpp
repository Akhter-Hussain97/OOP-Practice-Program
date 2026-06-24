#include<iostream>
using namespace std;
class Subscribt{
	private:
	 int arr[2];
	public:
	Subscribt(int x =0, int y=0, int z=0){
		arr[0]=x;
		arr[1]=y;
		arr[2]=z;
	}
	int& operator[](const int n){
		if(n==0)
		return arr[0];
		else if(n==1)
		return arr[1];
		else if(n==2)
		return arr[2];
		else
		cout<<"invalid result"<<endl;
		exit(0);
	}
	void Show(){
		cout<<"x"<<arr[0]<<"y"<<arr[1]<<"z"<<arr[2]<<endl;
	}
};
int main(){
	Subscribt s1(3,7,6);
	s1.Show();
	s1[0]=24;
	s1[1]=29;
	s1[2]=43;
	s1.Show();
}