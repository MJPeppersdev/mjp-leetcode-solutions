class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> C;
        vector<int> v(A.size()+1,0);
        int count = 0;

        for(int i = 0; i < A.size(); ++i){
            if(v[A[i]] < 0)
                count++;
            ++v[A[i]];

            if(v[B[i]]>0)
                count++;
            --v[B[i]];
            
            C.push_back(count);
        }
        return C;
    }
};
