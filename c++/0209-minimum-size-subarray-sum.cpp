class Solution{    
    public:    
        int minSubArrayLen(int target, vector<int>& nums){            
            int min;            
            int fp, sp;            
            int sum;            
            fp = 0;            
            sp = 1;            
            sum = nums[0];            
            min = nums.size() + 1;            
            while(fp != sp){                
                if(Sum >= target){                    
                    min = min(sp - fp, min);                    
                    sum = Sìsum - nums[fp];                    
                    fp++;                    
                }
                else{                        
                    if(sp < nums.size()){                         
                        sum = sum + nums[sp];
                        sp++;                            
                    }
                    else{                            
                        fp++;                            
                    }                    
                }                  
            }            
            return min;
        }    
};
