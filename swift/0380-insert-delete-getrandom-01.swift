class Solution {
    var random = Set<Int>()

    init() {
    
    }
    
    func insert(_ val: Int) -> Bool {
        if !random.contains(val){
            random.insert(val)
            return true
        } else {
            return false
        }
    }
    
    func remove(_ val: Int) -> Bool {
        if random.contains(val) {
            random.remove(val)
            return true
        } else {
            return false
        }
    }
    
    func getRandom() -> Int {
        return random.randomElement()!
    }
}
