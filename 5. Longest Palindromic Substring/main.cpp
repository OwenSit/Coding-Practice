#include <iostream>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool IsPalindrom(string s){
  stack<char> ms;
  int mid = s.length() / 2;
  if (s.length() == 1) return true;
  for (int i = 0; i < mid; i++){
    ms.push(s[i]);
    }
  // check if the second half is the same as the first half
  int start = (s.length()%2==0?mid:(mid+1));
  // cout << start << endl;

  for(int i = start; i < s.length(); i++){
    // cout << "ms.top:" << ms.top() << " s[i]:" << s[i] << endl;
    if(s[i] != ms.top()){
      return false;
    }
    else ms.pop();
  }
  if (ms.empty()) return true;
  else return false;
}

bool Comparision(pair<string, int> left, pair<string, int> right){
  return (left.second > right.second);
} 

int main() {
  string mstr = "zudfweormatjycujjirzjpyrmaxurectxrtqedmmgergwdvjmjtstdhcihacqnothgttgqfywcpgnuvwglvfiuxteopoyizgehkwuvvkqxbnufkcbodlhdmbqyghkojrgokpwdhtdrwmvdegwycecrgjvuexlguayzcammupgeskrvpthrmwqaqsdcgycdupykppiyhwzwcplivjnnvwhqkkxildtyjltklcokcrgqnnwzzeuqioyahqpuskkpbxhvzvqyhlegmoviogzwuiqahiouhnecjwysmtarjjdjqdrkljawzasriouuiqkcwwqsxifbndjmyprdozhwaoibpqrthpcjphgsfbeqrqqoqiqqdicvybzxhklehzzapbvcyleljawowluqgxxwlrymzojshlwkmzwpixgfjljkmwdtjeabgyrpbqyyykmoaqdambpkyyvukalbrzoyoufjqeftniddsfqnilxlplselqatdgjziphvrbokofvuerpsvqmzakbyzxtxvyanvjpfyvyiivqusfrsufjanmfibgrkwtiuoykiavpbqeyfsuteuxxjiyxvlvgmehycdvxdorpepmsinvmyzeqeiikajopqedyopirmhymozernxzaueljjrhcsofwyddkpnvcvzixdjknikyhzmstvbducjcoyoeoaqruuewclzqqqxzpgykrkygxnmlsrjudoaejxkipkgmcoqtxhelvsizgdwdyjwuumazxfstoaxeqqxoqezakdqjwpkrbldpcbbxexquqrznavcrprnydufsidakvrpuzgfisdxreldbqfizngtrilnbqboxwmwienlkmmiuifrvytukcqcpeqdwwucymgvyrektsnfijdcdoawbcwkkjkqwzffnuqituihjaklvthulmcjrhqcyzvekzqlxgddjoir";
  vector<pair<string, int>> mv;

  for(int i = 0; i < mstr.length(); i++){
    for(int j = 1; j <= mstr.length() - i; j++){
      // cout << "i: " << i << ", j:" << j << "->";
      string tempStr  = mstr.substr(i, j);
      // cout << tempStr << endl;
      if(IsPalindrom(tempStr)){
        // cout << tempStr << endl;
        pair<string, int> tempp;
        tempp.first = tempStr;
        tempp.second = tempStr.length();
        mv.push_back(tempp);
      }
    }
  }

  // now we have a vector of <palinString, length>
  // we just need to sort it:
  sort(mv.begin(), mv.end(), Comparision);

  // for (auto x : mv){
  //   cout << x.first << ": " << x.second << endl;
  // }
  cout << mv[0].first << endl;
  // cout << IsPalindrom("aba") << endl;

  return 0;
}