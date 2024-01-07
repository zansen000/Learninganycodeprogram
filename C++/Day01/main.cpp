//introduction for this code
//I have been learnt about cpp in day one and I learnt about :
//namespace, output and input, declare any variable with data type
//With all of that I make Simple sum caculator :)
//All code that I learn based of W3School! Shout out to W3School to make me learn the code!

#include <iostream>
using namespace std;

int main(){
  int x,y;
  
  cout << "====================\n";
  cout << "Simple Sum Caculator\n";
  cout << "====================\n";
  cout << "Enter the first number: ";
  cin >> x;
  cout << "Now Enter the second number: ";
  cin >> y;

  int sum;
  sum = x + y;
  
  cout << "====================\n";
  cout << "The total of the sum is: " << sum << "\n";
  cout << "====================\n";
  return 0;
}
