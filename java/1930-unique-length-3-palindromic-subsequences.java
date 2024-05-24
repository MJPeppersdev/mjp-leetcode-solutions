class Solution {
    public int countPalindromicSubsequence(String s) {
        Map<Character, Integer> map = new HashMap<>();
        for(char c: s.toCharArray())
            map.put(c, map.getOrDefault(c, 0) + 1);

        int res = 0;
        for(char c : map.keySet()){
            if (map.get(c) >= 2){
                int fo = s.indexOf(c), lo = s.lastIndexOf(c);
                Set<Character> between = new HashSet<>();
                for(int i = fo+1; i < lo; i++)
                    between.add(s.charAt(i));
                res += between.size();    
            }
        }
        return res; 
    }
}
