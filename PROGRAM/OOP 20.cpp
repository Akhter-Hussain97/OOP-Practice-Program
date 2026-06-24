#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
  const int SIZE=20;
class String{
	private:
		char str[20];
	public:
		String():str("NULL"){}
		String(char s[]){
			strcpy(str,s);
		}
		void Setdata(){
			cout<<"enter the string "<<endl;
			cin.getline(str,20);
		}
		String operator +(const String& s)const{
			if(strlen(str)+strlen(s.str)>=SIZE){
				cout<<"string overflow"<<endl;
			   exit(1);	
			}
			String temp;
			strcpy(temp.str,str);
			strcat(temp.str,s.str);
			return temp;
		}
		void Show(){
			cout<<"the string is="<<str<<endl;
		}
};
int main(){
	String s1,s3;
	String s2;
	s1.Setdata();
	s1.Show();
	s2.Show();
	s3=s1+s2;
}