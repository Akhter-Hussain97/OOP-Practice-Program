#include<iostream>
using namespace std;
class Type{
	private:
		string dimension;
		string degree;
	public:
		Type():dimension(""),degree(""){}
		Type(string di,string dg):dimension(di),degree(dg){}
	void Showdata() const{
		cout<<"THE DIMENSION IS="<<dimension<<endl;
		cout<<"THE DEGREE IS="<<degree<<endl;
	}
};
class Distance{
	private:
		int feet;
		float inche;
	public:
		Distance():feet(0),inche(0){}
		Distance(int ft,float inh):feet(ft),inche(inh){}
    void Showdata()const{
    	cout<<"THE FEET IS="<<feet<<endl;
    	cout<<"THE INCHES IS="<<inche<<endl;
	}
};
class Lumber:private Type,private Distance{
	private:
		int quantity;
		double price;
	public:
		Lumber():Type(),Distance(),quantity(0),price(0){}
		Lumber(string di,string dg, int ft, float inh, int qu,double pr):Type(di,dg),Distance(ft,inh),quantity(qu),price(pr){}
		void Showdata()const{
		Type::Showdata();
	Distance::Showdata();
			cout<<"The Quantity is="<<quantity<<endl;
			cout<<"The Price is="<<price<<endl;
		}
	};
int main(){
	Lumber L1("2*4","const",4,3.2,10,1000);
     L1.Showdata();
Distance d(8,9.4);
	d.Showdata();
	
}