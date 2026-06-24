#include<iostream>
using namespace std;
class Myclass{
	private:
		int no;
  public:
  	friend istream& operator >>(istream&, Myclass&);
  	friend ostream& operator <<(ostream&, Myclass&);
};
 istream& operator >>(istream& in,Myclass& m){
 	in>>m.no;
 	return in;
 }
  ostream& operator <<(ostream& out,Myclass& m){
 	out<<m.no;
 	return out;
 }
 int main(){
 	Myclass m1,m2;
 	cin>>m1>>m2;
 	cout<<m1<<m2;
 	
 }