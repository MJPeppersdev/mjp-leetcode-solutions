class MyHashMap {
public:
    const int N = 10010;
    vector<list<pair<int, int>>> h; 


    MyHashMap() {
        h = vector<list<pair<int, int>>>(N);
    }
    
    list<pair<int, int>>::iterator find(int key) {
        int t = key % N;
        for (auto it = h[t].begin(); it != h[t].end(); it ++ ) {
            if (it->first == key)
                return it;
        }
        return h[t].end();
    }

    void put(int key, int value) {
        auto t = key % N;
        auto it = find(key);
        if (it == h[t].end()) h[t].push_back({key, value});
        else it->second = value;
    }
    
   
    int get(int key) {
        auto t = key % N;
        auto it = find(key);
        if (it != h[t].end()) return it->second;
        return -1;
    }
    
   
        auto it = find(key);
        if (it != h[t].end()) h[t].erase(it);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */