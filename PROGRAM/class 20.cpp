#include <iostream>
#include <cstring>
using namespace std;
class person
{
private:
    int id;
    char name[10];

public:
    person() : id(0)
    {
        strcpy(name, "");
    }
    person(int i, char n[]) : id(i)
    {
        strcpy(name, n);
    }
    void get()
    {
        cout << "Enter id:" << endl;
        cin >> id;
        //cin.ignore use for remove blank spaces
        cin.ignore();
        cout << "Enter name of person:" << endl;
        cin.getline(name, 10);
    }
    void show()
    {
        cout << "Id is:" << id << endl;
        cout << "Name is:" << name << endl;
    }
};
class student : public person
{
private:
    float gpa;

public:
    student() : person(), gpa(0) {}
    student(int i, char a[], float g) : person(i, a), gpa(g) {}
    void get()
    {
        // over riding
        person::get();
        cout << "Enter gpa of student:" << endl;
        cin >> gpa;
    }
    void show()
    {
        // over riding
        person::show();
        cout << "Gpa of student is:" << gpa << endl;
    }
};
class teacher : public person
{
private:
    int publication;
    double salary;

public:
    teacher() : person(), publication(0), salary(0.0f) {}
    teacher(int d, char na[], int pub, double sal) : person(d, na), publication(pub), salary(sal) {}
    void get()
    {
        // over riding
        person::get();
        cout << "Enter publication:" << endl;
        cin >> publication;
        cout << "Enter salary of teacher:" << endl;
        cin >> salary;
    }
    void show()
    {
        // over riding
        person::show();
        cout << "Publication is :" << publication << endl;
        cout << "Salary is :" << salary << endl;
    }
};

int main()
{
    teacher t1;
    student s1;
    t1.get();
    s1.get();
    t1.show();
    s1.show();
    return 0;
}