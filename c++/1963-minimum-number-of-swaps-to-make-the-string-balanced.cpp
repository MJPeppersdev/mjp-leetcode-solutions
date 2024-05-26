class Solution {
public:
    int minSwaps(string s) {

        int answer=0;

        stack<char> stc;
        stc.push(']'); 

        int n = s.size();

        for(int i=0;i<n;i++){
            char top = stc.top();

            if(s[i]==']'){

                
                if (top=='[') {
                    stc.pop();
                }
               
                else{ 
                    stc.push('[');
                    answer++;
                }
            }
            else{
                stc.push('[');
            }
        }
        return answer;
    }
};