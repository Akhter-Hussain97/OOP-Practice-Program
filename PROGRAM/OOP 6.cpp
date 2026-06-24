#include<iostream>
using namespace std;
class Student{
	private:
	  int mark_math;
	  int mark_phy;
	  int mark_comp;
	  int mark_bio;
	  int mark_eng;
	public:
		void INPUT(){
			cout<<"enter the five subject marks"<<endl;
		cin>>mark_math>>mark_phy>>mark_comp>>mark_bio>>mark_eng;
		}
		int sum,avg;
		int SUM(){
			sum=mark_math+mark_phy+mark_comp+mark_bio+mark_eng;
			return sum;
		}
		float AVG(){
			avg=sum/(5.0);
			return avg;
		}
};
int main(){
	Student s1;
	s1.INPUT();
	cout<<s1.SUM()<<endl;
	cout<<s1.AVG()<<endl;
}