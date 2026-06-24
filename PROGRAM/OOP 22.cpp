#include <iostream>
using namespace std;

class publication 
{
private:
    string title;
    float price;

public:
    void getdata()
    {
        cout << "Enter the book title: ";
        cin >> title;
        cout << "Enter the price of book: ";
        cin >> price;
    }

    void showdata()
    {
        cout << "The book title is: " << title << endl;
        cout << "The book price is: " << price << endl;
    }
};

class book : public publication
{
private:
    int pagecount;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter the page count: ";
        cin >> pagecount;
    }

    void showdata()
    {
        publication::showdata();
        cout << "The page count is: " << pagecount << endl;
    }
};

class tape : public publication
{
private:
    float playingtime;

public:
    void getdata()
    {
        publication::getdata();
        cout << "Enter the playing time in minutes: ";
        cin >> playingtime;
    }

    void showdata()
    {
        publication::showdata();
        cout << "The playing time in minutes is: " << playingtime << endl;
    }
};

int main()
{
    book b1;
    tape t1;

    cout << "---------The book information is----------" << endl;
    b1.getdata();
    cout << "---------The book information is----------" << endl;
    b1.showdata();

    cout << "---------The playtime information is-------" << endl;
    t1.getdata();
    cout << "---------The playtime information is-------" << endl;
    t1.showdata();
}