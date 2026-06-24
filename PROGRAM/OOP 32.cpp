/*Create a class called Employee that stores the name string) of the employee. From this class derive two classes: 
Students, which has a page CGPA (type float) and Teacher: which has a publication (type int). Each of the three classes 
should have a getdata() function to get its data from the user at the keyboard, and a putdata () function to display the data. 
Add a member function Islapeligible () to the Student and Teacher classes. Let’s say that a Student with more than or equal to 3.00 CGPA,
 or a Teacher with more than or equal to 10 publication, is considered laptop eligible. You can access this function from main ()
  and display the string “you are eligible for PM laptop scheme” for student and Teacher when you display their data.
 Define appropriate constructors and detractor into the above said classes. Write a main () program that creates an array of pointers to 
 Employee.In a loop, ask the user for data about a particular Student or Teacher.*/
 #include<iostream>
 using namespace std;
 class Employee{
 	private:
 	 string name;
 	public:
 	virtual void Getdata(){
 	 	cout<<"enter the employee name"<<endl;
 	 	cin>>name;
	  }
	 virtual void Putdata(){
	 	cout<<"the employee name is ="<<name<<endl;
	 }
	 virtual void Islapeligible()=0;
 };
 class Student:public Employee{
 	private:
 	 float cgpa;
 	public:
 	void Getdata(){
 		Employee::Getdata();
 	 	cout<<"enter the student cgpa"<<endl;
 	 	cin>>cgpa;
	  }
	void Putdata(){
		Employee::Putdata();
	 	cout<<"the student cgpa is ="<<cgpa<<endl;
	 }
	 void Islapeligible(){
	  	if(cgpa>=3.0)
	 		cout<<" You are eligilbe for PM Laptop scheme"<<endl;
		 else  
		  cout<<" You are not eligilbe for PM Laptop scheme"<<endl;
	}
 };
  class Teacher:public Employee{
 	private:
 	 int publication;
 	public:
 	void Getdata(){
 		Employee::Getdata();
 	 	cout<<"enter the publication of teacher"<<endl;
 	 	cin>>publication;
	  }
	void Putdata(){
		Employee::Putdata();
	 	cout<<"the publication is ="<<publication<<endl;
	 }
	  void Islapeligible(){
	 	if(publication>=10)
	 	   cout<<" You are eligilbe for PM Laptop scheme"<<endl;
		 else
		  cout<<" You are not eligilbe for PM Laptop scheme"<<endl;
}
 };
 int main(){
 	Student s;
 	Employee* ptr[2];
 	ptr[0]=&s;
 	ptr[0]->Getdata();
 	ptr[0]->Putdata();
 	ptr[0]->Islapeligible();
 	cout<<endl;
 	Teacher t;
 	ptr[1]=&t;
 	ptr[1]->Getdata();
 	ptr[1]->Putdata();
 	ptr[1]->Islapeligible();
 }