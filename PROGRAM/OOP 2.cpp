#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		float inche;
	public:
		void getdist(int F,float I){
			feet=F;
			inche=I;
		}
		void showdist(){
			cout<<"Feet is="<<feet<<endl;
			cout<<"Inche is="<<inche<<endl;
		}
	};
 int main(){
 	Distance d1,d2;
 	d1.getdist(4,4.3);
 	d2.getdist(5,3.6);
 	d1.showdist();
 	d2.showdist();
 }
		