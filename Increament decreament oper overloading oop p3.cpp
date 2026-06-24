#include<iostream>
using namespace std;
class Test{
	private:
		int n;
    public:
    	Test():n(0){
		}
		void operator ++(){
			++n;
		}
		void operator ++(int){
			n++;
		}
		void show(){
			cout<<"The value of n is "<<n<<endl;
		}
		void operator --(){
			--n;
		}
};
int main(){
	Test obj;
	++obj;
	obj++;
	--obj;
	obj.show();
}