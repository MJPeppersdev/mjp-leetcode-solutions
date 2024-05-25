class Solution {
public:
    int videoStitching(vector<vector<int>>& clips, int time) {
        int maxi = 0;
        sort(clips.begin() , clips.end());
        for(int i = 0 ; i < clips.size() ; i++) 
            maxi = max(maxi, clips[i][1]);

        if(maxi < time)
            return -1;

        int count = 0, endTime = 0, covered = INT_MIN;
        for(int i = 0; endTime < time ; ) {
            ++count;
            while(i < clips.size() && clips[i][0] <= endTime)
                covered = max(covered, clips[i++][1]);

            if(endTime == covered)
                return -1;
            endTime = covered;
        }
        return count;
    }
};
