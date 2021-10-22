#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

class RandomizedSet {
public:
    unordered_map<int, int> uMap;
    int counter;
    
    RandomizedSet() {
        uMap.clear();
        counter = 0;
        return;
    }
    
    bool insert(int val) {
        if(uMap.count(val) == 1) return false;
        uMap[val] = counter;
        counter++;
        return true;
    }
    
    bool remove(int val) {
        if (uMap.count(val) == 0) return false;
        uMap.erase(val);
        counter--;
        return true;
    }
    
    int getRandom() {
        int num;
        uMap.rehash(rand()%uMap.size());
        for (auto x : uMap){
            num = x.first;
            break;
        }
        return num;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */