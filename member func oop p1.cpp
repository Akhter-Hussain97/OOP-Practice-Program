#include<iostream>
using namespace std;
class Test{
	public:
		void display(int rollno, char name[20]);
};
void Test::display(int rollno, char name[20]){
	cout<<rollno<<endl;
	cout<<name<<endl;
}
int main(){
	Test t;
	t.display(97,"ali");
}