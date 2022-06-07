/*
    Your Trie object will be instantiated and called as such:
    Trie* obj = new Trie();
    obj->insert(word);
    bool check2 = obj->search(word);
    bool check3 = obj->startsWith(prefix);
 */

struct TrieNode{
    TrieNode* child[26];
    bool isEnd=false;
};
class Trie {
    
   private:
     TrieNode* root;

   public:

    /** Initialize your data structure here. */
    Trie() {
        root=new TrieNode();
        
    }

    /** Inserts a word into the trie. */
    void insert(string word) {
        TrieNode* t=root;
        for(int i=0;i<word.length();i++){
            int index=word[i]-'a';
            if(t->child[index]==NULL){
                t->child[index]=new TrieNode();
            }
            t=t->child[index];
        }
        t->isEnd=true;
    }

    /** Returns if the word is in the trie. */
    bool search(string word) {
        TrieNode* t=root;
        for(int i=0;i<word.size();i++){
            int index=word[i]-'a';
            if(t->child[index]==NULL)
                return false;
            t=t->child[index];
        }
        return t->isEnd;
    }

    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        TrieNode* t=root;
        for(int i=0;i<prefix.size();i++){
            int index=prefix[i]-'a';
            if(t->child[index]==NULL)return false;
            t=t->child[index];
        }
        return true;

    }
};
