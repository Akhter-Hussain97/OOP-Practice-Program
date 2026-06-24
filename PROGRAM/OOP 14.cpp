/*Define a class BOOK with the following specifications :
Private members of the class BOOK are
BOOK NO	integer type
BOOKTITLE	20 characters
PRICE	float (price per copy)
TOTAL_COST()	A function to calculate the total cost for N number of  
 	copies where N is passed to the function as argument. 
Public members of the class BOOK are
INPUT ()	function to read BOOK_NO. BOOKTITLE, PRICE
PURCHASE ()	function to ask the user to input the number of copies to be
 	purchased. It invokes TOTAL_COST() and prints the total 
 	cost to be paid by the user. 
Note: You are also required to give detailed function definitions. 
*/
#include<iostream>
using namespace std;
class BOOK{
	private:
		int bookno;
		char booktitle[20];
		float price;
		TOTAL_COST(int N){
		return N*price;
		}
	public:
		void INPUT(){
			cout<<"ENTER THE BOOK NO"<<endl;
			cin>>bookno;
		  cout<<"ENTER THE BOOK TITLE"<<endl;
			cin>>booktitle;
			cout<<"ENTER THE BOOK PRICE"<<endl;
			cin>>price;	
		}
		void PURCHASE(){
			int no;
			cout<<"ENTER THE NO OF COPIES"<<endl;
			cin>>no;
			cout<<TOTAL_COST(no);
		}
};
int main(){
	BOOK b;
	b.INPUT();
	b.PURCHASE();
}