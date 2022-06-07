struct TrieNode{
  TrieNode* child[26];
  int ew=0;
  int cp=0;    
};
class Trie{
    TrieNode* root;
    public:

    Trie(){
        // Write your code here.
        root=new TrieNode();
    }

    void insert(string &word){
        // Write your code here.
        TrieNode* temp=root;
        for(int i=0;i<word.length();i++){
            int index=word[i]-'a';
            if(temp->child[index]==NULL){
                temp->child[index]=new TrieNode();
            }
            temp->child[index]->cp++;
            temp=temp->child[index];
        }
        temp->ew++;
    }

    int countWordsEqualTo(string &word){
        // Write your code here.
        TrieNode* temp=root;
        for(int i=0;i<word.length();i++){
            int index=word[i]-'a';
            if(temp->child[index]==NULL)return 0;
            temp=temp->child[index];
        }
        return temp->ew;
    }

    int countWordsStartingWith(string &word){
        // Write your code here.
        TrieNode* temp=root;
        for(int i=0;i<word.length();i++){
            int index=word[i]-'a';
            if(temp->child[index]==NULL)return 0;
            temp=temp->child[index];
        }
        return temp->cp;
        
    }

    void erase(string &word){
        // Write your code here.
        TrieNode* temp=root;
        for(int i=0;i<word.length();i++){
            int index=word[i]-'a';
            temp->child[index]->cp--;
            temp=temp->child[index];
        }
        temp->ew--;
    }
};
