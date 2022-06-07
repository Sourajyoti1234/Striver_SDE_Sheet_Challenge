#include<bits/stdc++.h>
struct TrieNode{
    TrieNode* child[26];
    bool flag=false;
};
void insert(TrieNode* root,string key){
    TrieNode* t=root;
    for(int i=0;i<key.length();i++){
        int index=key[i]-'a';
        if(t->child[index]==NULL)
            t->child[index]=new TrieNode();
        t=t->child[index];
    }
    t->flag=true;
}
bool checkPrefix(TrieNode* root,string key){
    TrieNode* t=root;
    bool f=true;
    for(int i=0;i<key.length();i++){
        int index=key[i]-'a';
        if(t->child[index]){
            t=t->child[index];
            f=f&(t->flag);
        }else{
            return false;
        }
    }
    return f;
    
    
}
string completeString(int n, vector<string> &a){
    // Write your code here.
    TrieNode *root=new TrieNode();
    string ans="";
    for(auto i:a)
        insert(root,i);
   for(auto i:a)
   {
       if(checkPrefix(root,i)){
           if(i.length()>ans.length()){
               ans=i;
           }
           else if(i.length()==ans.length() && i<ans){
               ans=i;
           }
       }
   } 
    return ans==""?"None":ans;
}
