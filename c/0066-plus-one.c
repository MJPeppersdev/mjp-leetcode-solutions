int* plusOne(int* digits, int digitsSize, int* returnSize){
    
    // Reserve the result with a digitsSize+1 size array
    int* result = (int*) malloc(sizeof(int)*(digitsSize+1));
    *returnSize = digitsSize+1;
    result[0] = 1;
    
    int carry = 1;
    for (int i = digitsSize; i > 0; --i) {
        int sum = digits[i-1] + carry;
        carry = sum/10;
        sum = sum%10;

        result[i] = sum;
    }
    
    if (carry)
        return result;
    
    // Skip the additional element which was reserved for carry
    *returnSize = digitsSize;
    return result+1;
}
