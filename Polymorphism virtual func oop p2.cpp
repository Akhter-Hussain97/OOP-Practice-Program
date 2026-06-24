#include<iostream>
using namespace std;
class Shape{
	protected:
	float Area;
		int r;
		float Pi=3.142;
	public:
		virtual void input()=0;
		virtual void output()=0;
};
class AofCircle: public Shape{
    public:
      	void input(){
    		cout<<"Enter the Radius of Circle"<<endl;
    		cin>>r;
    		Area=3.142*r*r;
		}
		void output(){
		  cout<<"The Area of Circle "<<Area<<endl;
		}
};
int main(){
	AofCircle A;
	 Shape *sh;
	 sh=&A;
	sh->input();
	sh->output();
	
}