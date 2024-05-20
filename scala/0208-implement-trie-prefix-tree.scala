import scala.collection.mutable.HashMap

class Trie() {
    class TrieNode {
        val children: HashMap[Char, TrieNode] = HashMap()
        var isEndOfWord = false
    }

    private var root: TrieNode = new TrieNode()

    def insert(word: String): Unit = {
        var curr = root
        word.foreach(c => {
            if (!curr.children.contains(c)) {
                curr.children(c) = new TrieNode()                
            }

            curr = curr.children(c)
        })

        curr.isEndOfWord = true
    }

    def search(word: String): Boolean = {
        traverse(word) match {
            case Some(endNode) => endNode.isEndOfWord
            case None => false
        }
    }

    def startsWith(prefix: String): Boolean = {
        traverse(prefix).isDefined
    }

    private def traverse(word: String): Option[TrieNode] = {
        var curr = root
        for (c <- word) {
            if (!curr.children.contains(c)) {
                return None
            } else {
                curr = curr.children(c) 
            }
        }

        return Some(curr)
    }
}