class Solution {
public:
    string removeKdigits(string num, int k) {
      int n = num.size();
      
      stack<char>s;
      int count = k;
      
      for(int i = 0 ; i < n; i++)
      {
        while(!s.empty() && count > 0 && s.top() > num[i])
        {
          s.pop();
          count--;
        }
        s.push(num[i]);
      }
      
     
      while(s.size() != n - k) s.pop();
     
      string res = "";
      while(!s.empty())
      {
        res += s.top();
        s.pop();
      }
      reverse(res.begin() , res.end());

      while (res[0] == '0') res.erase(0 , 1);
    
      
      return (res == "") ? "0": res;
    }
};
