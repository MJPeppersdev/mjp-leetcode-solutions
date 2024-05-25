class Solution {
public:
    int binarySearch(int& begin, int& end, const int& target, MountainArray &mountainArr)
    {
        while (begin <= end)
        {
            int mid = begin + (end-begin)/2;
            int mid_number = mountainArr.get(mid);

            if(mid_number == target)
            {
                return mid;
            }
            else if (mid_number > target)
            {
                end = --mid;
            }
            else
            {
                begin = ++mid;
            }
        }
        return -1;
    }

    int reverseBinarySearch(int& begin, int& end, const int& target, MountainArray &mountainArr)
    {
        while (begin <= end)
        {
            int mid = begin + (end-begin)/2;
            int mid_number = mountainArr.get(mid);

            if(mid_number == target)
            {
                return mid;
            }
            else if (mid_number > target)
            {
                begin = ++mid;
            }
            else
            {
                end = --mid;
            }
        }
        return -1;
    }

    int findPeakElement(int& begin, int& end, MountainArray &mountainArr)
    {
        while (begin < end)
        {
            int mid = begin + (end-begin)/2;
            if(mountainArr.get(mid) < mountainArr.get(mid+1))
            {
                begin = ++mid;
            }
            else
            {
                end = --mid;
            }
        }
        return begin;
    }

    int findInMountainArray(int target, MountainArray &mountainArr) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int begin = 0; 
        int end = mountainArr.length()-1;
        int minimum_index = 0;

        int peak_index = findPeakElement(begin, end, mountainArr);

        begin = 0; 
        end = peak_index;   
        minimum_index = binarySearch(begin, end, target, mountainArr);

        if(minimum_index != -1) return minimum_index;
        
        begin = peak_index;
        end = mountainArr.length()-1;
        minimum_index = reverseBinarySearch(begin, end, target, mountainArr);

        return minimum_index;
    }
};
