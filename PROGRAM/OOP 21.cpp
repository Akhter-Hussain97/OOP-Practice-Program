#include<iostream>
using namespace std;
class Counter{
	protected:
		int count;
   public:
   	Counter():count(0){}
   	Counter(int c):count(c){}
   	void operator++(int){
   		count++;
	   }
	int Show(){
		return count;
	} 
};
class DCounter:public Counter{
	public:
	void operator--(int){
   		count--;
	   }
};
int main(){
	DCounter C1;
	C1++;
	C1--;
	cout<<C1.Show();
}