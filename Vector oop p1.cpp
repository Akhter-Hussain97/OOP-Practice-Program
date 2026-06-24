#include<iostream>
#include<vector>
using namespace std;
class User{
	public:
		string name, gmail;
		int age;
};
int main(){
	vector<User> users;
	User user1;
	user1.name="Akhter Hussain";
	user1.age=21;
	user1.gmail="akhterhussainshirani795000@gmail.com";
	users.push_back(user1);
	User user2; 
	user2.name="Shirani";
	user2.age=22;
	user2.gmail="shirani123@gmail.com";
	users.push_back(user2);
	for(int i=0; i<users.size(); i++){
		cout<<"Name "<<users[i].name<<endl;
		cout<<"Age "<<users[i].age<<endl;
		cout<<"Gmail "<<users[i].gmail<<endl;
	}
	
}