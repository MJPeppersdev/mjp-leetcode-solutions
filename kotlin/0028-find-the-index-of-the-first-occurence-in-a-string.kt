class Solution {
    fun strStr(haystack: String, needle: String): Int {
        if(needle == "") return 0

        val lps = IntArray(needle.length)
        var prevLPS = 0
        var i = 1
        while(i < needle.length) {
            if(needle[i] == needle[prevLPS]) {
                lps[i] = prevLPS + 1
                prevLPS++
                i++
            }else if(prevLPS == 0) {
                lps[i] = 0
                i++
            }else{
                prevLPS = lps[prevLPS - 1]
            }
        }

        i = 0
        var j = 0
        while (i < haystack.length) {
            if(haystack[i] == needle[j]){
                i++
                j++
            }else if(j == 0){
                i++
            }else{
                j = lps[j - 1] 
            }
            if(j == needle.length) {
                return i - needle.length
            }     
        }
        
        return -1
    }
}
