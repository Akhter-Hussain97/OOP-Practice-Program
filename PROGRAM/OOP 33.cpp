#include<iostream>
using namespace std;
class publication{
  private:
  	string title;
  	float price;
  public:
 virtual void getdata(){
  		cout<<"title"<<endl;
  		cin>>title;
  		cout<<"price"<<endl;
  		cin>>price;
	  }
  virtual void putdata(){
		cout<<"title"<<title<<endl;
		cout<<"price"<<price<<endl;
	}
	virtual void oversize()=0;
};
class book: public publication{
	private:
	 int pagecount;
	public:
		void getdata(){
			publication::getdata();
  		cout<<"pagecount"<<endl;
  		cin>>pagecount;
	  }
	void putdata(){
		publication::putdata();
		cout<<"pagecount"<<pagecount<<endl;
	}
	void oversize(){
		if(pagecount>=500)
		cout<<"page is oversize"<<endl;
	}
};
class tape: public publication{
		private:
	 float playtime;
	public:
		void getdata(){
		publication::getdata();
  		cout<<"playtime"<<endl;
  		cin>>playtime;
	  }
	void putdata(){
		publication::putdata();
		cout<<"playtime"<<playtime<<endl;
	}
		void oversize(){
		if(playtime>=90)
		cout<<"play time is oversize"<<endl;
	}	
};
int main(){
	publication *p[10];
	book b;
	tape t;
	p[0]=&b;
	p[1]=&t;
	p[0]->getdata();
	p[1]->getdata();
	p[0]->putdata();
	p[1]->putdata();
	p[0]->oversize();
	p[1]->oversize();	
}