#include<iostream>
#include<string.h>
using namespace std;
class String{
	private:
		char str[50];
	public:
		String(){
			strcpy(str,"");
		}
		String(char s[]){
			strcpy(str,s);
		}
		void getstr(){
			cout<<"Enter the string "<<endl;
			cin.getline(str,50);
		}
		String operator +( String obj){
			String temp;
		   if(strlen(temp.str)+strlen(obj)<50){
		   	strcpy(temp.str,obj);
		strcat(temp.str,obj.str);
		   }else{
		   	cout<<"overflow"<<endl;
		   	exit(1);
		   }
		   return temp;
		}
		void Show(){
			cout<<"The concatenate of two string is "<<str<<endl;
		}
};
int main(){
	String str1("Aslam"), str2, str3;
	str2.getstr();
	str3=str1+str2;
}