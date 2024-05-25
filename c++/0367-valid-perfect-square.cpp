class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num ==1) {return true;}
        int l = 0,r = num;
        while(l<r){
            int m = l + (r-l)/2;
            float x = (float)num / (float)m;
            if(x==m){
                return true;
            }
            else if (x<m){
                r = m;
            }
            else {
                l = m +1;
            }
        }

        return false;
    }
};