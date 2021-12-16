#include <fstream>
#include <string>
#include "./utils.cpp"

using std::ifstream;
using std::string;

#define CHAR_SIZE 128

class TrieNode{
    public:
        TrieNode *children[CHAR_SIZE];
        bool leaf;

        TrieNode *getNode(){
            TrieNode *newNode = new TrieNode;
            newNode->leaf = false;
            for (int i = 0; i < CHAR_SIZE; i++)
                newNode->children[i] = nullptr;
            return newNode;
        }
};

class Trie{
    private:
        TrieNode tr;
        TrieNode *root = new TrieNode();

        void insert(string str, TrieNode *root){
            for (int i = 0; i < str.length(); i++){
                if (root->children[str[i]] == nullptr)
                    root->children[str[i]] = root->getNode();
                root = root->children[str[i]];
            }
            root->leaf = true;
        }

    public:
        bool search(string str, TrieNode *root){
            if (this == nullptr)
                return false;
            for (int i = 0; i < str.length(); i++){
                root = root->children[str[i]];
                if (root == nullptr)
                    return false;
            }
            return root->leaf;
        }
        
        TrieNode *buildTrie(){
            Utilities ut;
            ifstream dictTxt;
            dictTxt.open("freq-word.txt");
            string line;
            while (getline(dictTxt, line)){
                string str = ut.rTrim(ut.toUpper(line));
                insert(str, root);
            }
            return root;
        }
};