class Solution {
private:
    map<string, string> encodeMap;
    map<string, string> decodeMap;
    string base = "http://tinyurl.com/";
public:

    string encode(string longUrl) {
        if(!encodeMap.count(longUrl)) {
            string shortUrl = base + to_string(encodeMap.size() + 1);
            encodeMap[longUrl] = shortUrl;
            decodeMap[shortUrl] = longUrl;
        }
        return encodeMap[longUrl];
    }


    string decode(string shortUrl) {
        return decodeMap[shortUrl];
    }
};
