#include<iostream>
using namespace std;
class Shape{
	protected:
		int length, width;
	public:
		virtual void input()=0;
		virtual void output()=0;
};
class AofRectangle: public Shape{
    public:
    	float Area;
      	void input(){
    		cout<<"Enter the length and width  of Rectangle "<<endl;
    		cin>>length>>width;
    		Area=length*width;
		}
		void output(){
		  cout<<"The Area of Rectangle "<<Area<<endl;
		}
};
int main(){
	AofRectangle A;
	 Shape *sh;
	 sh=&A;
	sh->input();
	sh->output();
}