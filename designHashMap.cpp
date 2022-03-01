class MyHashMap {
public:
    MyHashMap() : map_(BUCKET_SIZE) {}
    
    void put(int key, int value) {
        auto& bucket = map_[get_hash(key)];
        for (auto& [key_, val_] : bucket) {
            if (key_ == key) {
                val_ = value;
                return;
            };
        }
        bucket.emplace_back(key, value);
    }
    
    int get(int key) {
        auto& bucket = map_[get_hash(key)];
        for (auto& [key_, val_] : bucket) {
            if (key_ == key) return val_;
        }
        return -1;
        
    }
    
    void remove(int key) {
        auto& bucket = map_[get_hash(key)];
        for (auto it = bucket.begin(); it != bucket.end(); ++it) {
            if (it->first == key) {
                bucket.erase(it);
                return;
            }
        }
        
    }
    
    int get_hash(int key) {
        return static_cast<int>( static_cast<size_t>(key) * HASH_CODE % BUCKET_SIZE );
    }
    

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */