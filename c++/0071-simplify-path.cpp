class Solution {
public:
    string simplifyPath(string path) {
        stringstream ss(path);
        string dir;
        stack<string> stk;

        while (getline(ss, dir, '/')) {
            if (dir.empty() || dir == ".") {
                continue;
            }
            else if (dir == "..") {
                if (!stk.empty())
                    stk.pop();
            }
            else {
                stk.push(dir);
            }
        }

        string res = "";
        while (!stk.empty()) {
            res = "/" + stk.top() + res;
            stk.pop();
        }
        return res.empty()? "/" : res;
    }
};
