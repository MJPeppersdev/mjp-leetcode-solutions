class Codec {
    var urlMap = [String: String]()

    // Encodes a URL to a shortened URL.
    func encode(_ longUrl: String) -> String {
        var id = UUID().uuidString

        if urlMap[id] != nil {
            id = UUID().uuidString
        }

        urlMap[id] = longUrl
        return "http://tinyurl.com/\(id)"
    }
    
    // Decodes a shortened URL to its original URL.
    func decode(_ shortUrl: String) -> String {
        let id = shortUrl.split(separator:"/").last!
        return urlMap[String(id)]!
    }
}