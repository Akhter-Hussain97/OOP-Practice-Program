#include<iostream>
using namespace std;
class Time{
	private:
		int hour;
		 int minute;
		 int second;
	public:
		void settime(int H, int M, int S){
			hour=H;
			minute=M;
			second=S;
		}
		void showtime(){
			cout<<"Hour"<<hour<<":"<<"Minute"<<minute<<":"<<"Second"<<second<<endl;	
		}
	};
	int main(){
		Time t1,t2;
		t1.settime(6,30,24);
		t2.settime(12,40,36);
		t1.showtime();
		t2.showtime();
	}