#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <cstdlib>

class RandomizedCollection {
public:
    std::vector<int> vec;
    std::unordered_map<int, std::unordered_set<int>> mp; // value -> set of indices

    RandomizedCollection() {
        
    }
    
    bool insert(int val) {
        bool isNew = mp[val].empty(); // Check if it's a new value
        vec.push_back(val);
        mp[val].insert(vec.size() - 1);
        return isNew;
    }
    
    bool remove(int val) {
        if (mp[val].empty()) {
            return false;
        }
        
        int idx = *(mp[val].begin()); // Get an index of val
        mp[val].erase(idx);           // Remove index from the set

        if (idx != vec.size() - 1) {  // If not the last element, swap with the last
            int lastVal = vec.back();
            vec[idx] = lastVal;
            mp[lastVal].erase(vec.size() - 1);
            mp[lastVal].insert(idx);
        }

        vec.pop_back();
        if (mp[val].empty()) {
            mp.erase(val);
        }

        return true;
    }
    
    int getRandom() {
        int n = vec.size();
        int randomIndex = rand() % n;
        return vec[randomIndex];
    }
};

