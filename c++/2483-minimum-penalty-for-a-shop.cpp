class Solution {
public:
    int bestClosingTime(string customers) {
        int res = -1, maxi = 0, pen = 0;
        for(int i = 0 ; i < customers.size() ; ++i) {
            if(customers[i] == 'Y')
                ++pen;
            else 
                --pen;
            if(pen > maxi) {
                maxi = pen;
                res = i;
            }
        }
        return ++res;
    }
};
