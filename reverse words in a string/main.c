#include <iostream>
#include <sstream>
#include <string>
#include <stack>

using namespace std;

int main() {
  string myStr;
  cout << "Please input any string:" << endl;
  getline(cin, myStr);
  cout << "the string you inputed is: " << myStr << endl;
  
  istringstream iss;
  ostringstream oss;
  iss.str(myStr);
  string word;
  stack<string> myStk;

  while(iss >> word){
    myStk.push(word);
  }

  while(!myStk.empty()){
    oss << myStk.top() << " ";
    myStk.pop();
  }

  cout << oss.str();


  return 0;
}