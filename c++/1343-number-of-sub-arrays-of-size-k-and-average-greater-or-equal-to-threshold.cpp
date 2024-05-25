class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int sum = 0;
        int n = arr.size();
        for(int i=0;i<k;i++){
            sum += arr[i];
        }
        int left = 0;
        int right = k;
        int res = 0;
        if(sum/k >= threshold) res++;
        while(right < n){
            sum -= arr[left++];
            sum += arr[right++];
            if(sum/k >= threshold) res++;
        }
        return res;
    }
};
