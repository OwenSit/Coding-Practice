#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>
#include <sstream>
using namespace std;

struct unit{
  char letter;
  int appears;
};

bool comparison(unit left, unit right){
  return (left.appears > right.appears);
}

int main() {
  int counter = 0;
  // sample string
  string str = "Aabb";
  unordered_map<char, int> uMap;

  // transfrom info from string to map:
  for (int i = 0; i < str.length(); i++){
    if(uMap.count(str[i]) != 0){
      uMap[str[i]]++;
      continue;
    }
    uMap[str[i]] = 1;
  }

  // print the map:
  for (auto x : uMap){
    cout << x.first << ": " << x.second << endl;
  }

  // transform info from map to unit:
  unit* unitPtr = new unit[uMap.size()];

  for (auto x : uMap){
    unitPtr[counter].letter = x.first;
    unitPtr[counter].appears = x.second;
    counter++;
  }

  sort(unitPtr, unitPtr + uMap.size(), comparison);

  // from unit list to string
  ostringstream oss;

  // print the unit list
  for (int i = 0; i < uMap.size(); i++){
    for (int j = 0; j < unitPtr[i].appears; j++){
      oss << unitPtr[i].letter;
    }
  }

  cout << oss.str() << endl;

  // release the dynamic array 
  delete [] unitPtr;

  return 0;
}