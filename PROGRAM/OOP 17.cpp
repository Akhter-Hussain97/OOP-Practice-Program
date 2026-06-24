#include<iostream>
using namespace std;
class String{
	private:
		string str;
	public:
		String():str("NULL"){}
		String(string s):str(s){
		} 
     void Setdata(){
     	cout<<"enter the string"<<endl;
     	getline(cin,str);
	 }
	 void operator+(String& s) {
	 	String temp;
		temp.str= str+s.str;
	    temp.Show();
	 }
	 void Show(){
	 	cout<<"string is="<<str<<endl;
	 }
};
int main(){
	String S1,S2("+ Iqbal Hussain Barahvi"),S3("Aslam");
	S1.Setdata();
	S1.Show();
	S2.Show();
	S1+S2;
}