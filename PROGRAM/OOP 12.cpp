#include<iostream>
using namespace std;

class Complex
{
	private:
		int real,img;
	public:
	 Complex() // Default constructor
		{
			real=0;
			img=0;
		}
		Complex(int r, int i) // Overloaded constructor
		{
			real = r;
			img = i;
		}
		void getdata()
		{
			cout << "Enter the real number:";
			cin >> real;
			cout << "Enter the imaginary number:";
			cin >> img;
		}
		void showdata() const
		{
			cout << "The complex number in a+bi is " << real << "+" << img << "i" << endl;
		}
		void Addition(const Complex &cc) const
		{
			Complex temp;
			temp.real = real + cc.real; 
			temp.img = img + cc.img;    
			temp.showdata();
		}
};

int main()
{
	Complex c1,c2(3,4); 
	c1.getdata();
	c1.showdata();
	c1. Addition(c2);
}