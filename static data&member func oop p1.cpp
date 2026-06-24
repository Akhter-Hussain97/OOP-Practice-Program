#include<iostream>
using namespace std;
class Counter{
   private:
      static int count;
      int d=0;
      public:
	Counter(){
		count++;
		d++;
	}
   static void Output(){
		cout<<"I AM A STATIC MEMBER FUNCTION"<<endl;
	}
	void Show()	{
		cout<<"YOU CREATED "<<count<<" OBJECT"<<endl;
		cout<<"D Created "<<d<<" object"<<endl;
	}
	
};
int Counter::count=0;
int main(){
	Counter obj1,obj2,obj3;
	Counter a,b,c;
	obj1.Show();
	Counter::Output();
}