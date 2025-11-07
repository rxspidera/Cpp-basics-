#include <iostream>
#include <string>
using namespace std;

//Learning topic 6: Type conversations in c++
//Implicit, Explicit
//Enjoy☕

int main() {
int salary = 30000;
float bonus = 500.78;

//implicit  
float total = salary+bonus;  

//explicit  
int approx_total = (int)total;  
  
cout << "Total earned: " << total <<" $" <<endl ; 
 
cout << "Approx earning: " << approx_total << " $" <<endl;  
  
  
return 0
}