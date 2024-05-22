class MinStack {
    var stack: [Int]
    var minStack: [Int]
    init() {
        stack = []
        minStack = []
    }
    
    func push(_ val: Int) {
        stack.append(val)
        if minStack.isEmpty {
            minStack.append(val)
        }
        else {
            let minVal = min(val, minStack.last!)
            minStack.append(minVal)
        }

    }
    
    func pop() {
        stack.removeLast()
        minStack.removeLast()
    }
    
    func top() -> Int {
        return stack.last!
    }
    
    func getMin() -> Int {
        return minStack.last!
    }
}
