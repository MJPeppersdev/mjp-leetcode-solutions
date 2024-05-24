int prec(char x){
    switch(x){
        case 'I':
            return 1;
        case 'V':
            return 2;
        case 'X':
            return 3;
        case 'L':
            return 4;
        case 'C':
            return 5;
        case 'D':
            return 6;
        case 'M':
            return 7;
        default:
            return -1;
    }
}

int val(char x){
    switch(x){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return -1;
    }
}

class Solution {
public:

        int romanToInt(string s)
        {
           int ans = 0;
           
           for(int i=0; i<s.length(); i++){
               if(prec(s[i]) >= prec(s[i+1])){
                   ans += val(s[i]);
               }
               else if(prec(s[i]) < prec(s[i+1])){
                   ans = ans - val(s[i]) + val(s[i+1]);
                   i++;
               }
           }

           return ans;
        }
    
};
