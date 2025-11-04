#include <iostream>
#include <string>
using namespace std;

// Learning Topic 2: Namespaces & Void Functions..
// Fun exercise: 2 characters using namespaces


namespace dumbo1 {
string name = "X";
int age = 16;
string gender = "Female";
string worth = "unidentified";

void introduction() {  
		cout << "Im here to cook." << '\n' << "cook my life." << '\n' << "Nah waittt🌪️im here to be cooked!!" <<'\n';  
	}  
}  
  
namespace dumbo2 {  
	string name = "Y";  
	int age = 16;  
	string gender = "Male";  
	string worth = "-9999999";  
	  
	void introduction() {  
		cout << "Im chill.." << '\n' << " Just  a normal human being🥂" <<'\n';  
	}  
}

int main() {
cout << dumbo1:: name << '\n';
dumbo1::introduction();

cout << dumbo2::name <<'\n';  
dumbo2::introduction();  
	  
  
return 0;

}