#include<iostream>
using namespace std;
class Distance{
	private:
	 int feet;
	 float inche;
	public:
	 Distance():feet(0),inche(0.0){}
	 Distance(int f,float i):feet(f),inche(i){}
	 void Getdata(){
	 	cout<<"enter the feet"<<endl;
	 	cin>>feet;
	 	cout<<"enter the inche"<<endl;
	 	cin>>inche;
	 }
	void Showdata(){
	 	cout<<"THE FEET IS "<<feet<<"THE INCHES IS"<<"\'-"<<inche<<endl;
	 }
	 void add_dist(const Distance& dd)const{
	 	Distance temp;
	 	temp.feet=feet+temp.feet;
	 	temp.inche=inche+temp.inche;
	 	while(temp.inche>=12.0f){
	 		temp.inche-=12.0f;
	 	}
	 	temp.feet++;
		 temp.Showdata(); 
	}
	 Distance operator-(const Distance& dd)const{
	 	Distance temp;
	 	temp.feet=feet-temp.feet;
	 	temp.inche=inche-temp.inche;
	 	while(temp.inche>=12.0f){
	 		temp.inche-=12.0f;
	 	}
	 	temp.feet++;
	   return temp; 
	}
		 Distance operator*(const Distance& dd)const{
	 	Distance temp;
	 	temp.feet=feet*temp.feet;
	 	temp.inche=inche*temp.inche;
	   return temp; 
	}		
};
int main(){
	Distance d1,d2(12,13.0),d3,d4;
	d1.Getdata();
	d1.Showdata();
	d2.Showdata();
	cout<<"The addition of Two operator"<<endl;
	d1.add_dist(d2);
   d3=d2-d1;
   cout<<"The subraction of Two operator"<<endl;
   d3.Showdata();
   d4=d2*d1;
   cout<<"The Multiplication of Two operator"<<endl;
   d4.Showdata();
}