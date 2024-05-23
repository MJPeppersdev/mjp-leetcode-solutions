int trap(int* height, int heightSize) {
    
    // Initialize leftMax to store the largest height present to the left of every bar
    int leftMax[heightSize];

    leftMax[0] = height[0];
    for (int i = 1; i < heightSize; ++i) {
        leftMax[i] = fmax(height[i], leftMax[i-1]);
    }

    // Initialize rightMax similar to leftMax but for largest height to the right
    int rightMax[heightSize];

    rightMax[heightSize-1] = height[heightSize-1];
    for (int i = heightSize-2; i >= 0; --i) {
        rightMax[i] = fmax(height[i], rightMax[i+1]);
    }

    int waterTrapped = 0;

    for (int i = 0; i < heightSize; ++i) {
        // The minimum of both side decides how much water can be trapped
        int minHeight = fmin(leftMax[i], rightMax[i]);
        
        // If the minHeight is more the current height at a point, water is present there
        if (minHeight > height[i]) {
            waterTrapped += minHeight - height[i];
        }
    }

    return waterTrapped;
}
