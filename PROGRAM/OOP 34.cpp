#include<iostream>
using namespace std;
class child{
  private:
  	string name;
  	float age;
  public:
 virtual void getdata(){
  		cout<<"Name"<<endl;
  		cin>>name;
  		cout<<"age"<<endl;
  		cin>>age;
	  }
  virtual void showdata(){
		cout<<"name"<<name<<endl;
		cout<<"age"<<age<<endl;
	}
	virtual void getgender()=0;
};
class male: public child{
	private:
	string name;
  	float age;
  	string gender;
	public:
		void getdata(){
		child::getdata();
  		cout<<"gender"<<endl;
  		cin>>gender;
	  }
	void showdata(){
		child::showdata();
		cout<<"gender"<<gender<<endl;
	}
	void getgender(){
		cout<<"gender"<<gender<<endl;
	}
};
class female: public child{
	private:
	 string name;
  	float age;
  	string gender;
	public:
		void getdata(){
		child::getdata();
  		cout<<"gender"<<endl;
  		cin>>gender;
	  }
	void showdata(){
		child::showdata();
		cout<<"gender"<<gender<<endl;
	}
	void getgender(){
		cout<<"gender"<<gender<<endl;
	}
};
int main(){
	child* p[10];
	char opt;
	cout<<"enter the option"<<endl;
	while(opt='m'and opt='f')
	cin>>opt;
	

}