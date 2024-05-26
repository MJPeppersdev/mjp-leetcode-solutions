class Solution {
public:
    string result = "";
    
    void backtrack(vector<string>& inputStrings, string& currentString, int stringLength, set<string>& stringSet) {
        if (!result.empty()) return;
        if (currentString.size() == stringLength && stringSet.find(currentString) == stringSet.end()) {
            result = currentString;
            return;
        }
        if (currentString.size() > stringLength) return;

        for (char ch = '0'; ch <= '1'; ++ch) {
            currentString.push_back(ch);
            backtrack(inputStrings, currentString, stringLength, stringSet);
            currentString.pop_back();
        }
    }
    
    string findDifferentBinaryString(vector<string>& inputStrings) {
        int stringLength = inputStrings[0].size();
        string currentString = "";
        set<string> stringSet(inputStrings.begin(), inputStrings.end());

        backtrack(inputStrings, currentString, stringLength, stringSet);
        return result;
    }
};
