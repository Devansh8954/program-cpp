/*
Code : Search in Tries
Implement the function SearchWord for the Trie class.
For a Trie, write the function for searching a word. Return true if the word is found successfully, otherwise return false.
Note : main function is given for your reference which we are using internally to test the code.
*/

#include <iostream>
#include <string>
using namespace std;

class TrieNode {
   public:
    char data;
    TrieNode **children;
    bool isTerminal;

    TrieNode(char data) {
        this->data = data;
        children = new TrieNode *[26];
        for (int i = 0; i < 26; i++) {
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie {
    TrieNode *root;

   public:
    Trie() { 
        root = new TrieNode('\0'); 
    }

    void insertWord(TrieNode *root, string word) {
        // Base case
        if (word.size() == 0) {
            root->isTerminal = true;
            return;
        }

        // Small Calculation
        int index = word[0] - 'a';
        TrieNode *child;
        if (root->children[index] != NULL) {
            child = root->children[index];
        } else {
            child = new TrieNode(word[0]);
            root->children[index] = child;
        }

        // Recursive call
        insertWord(child, word.substr(1));
    }

    void insertWord(string word) { 
        insertWord(root, word); 
    }
    /*
     bool search(TrieNode *root,string word) {
        // Write your code here
         if (word.size() == 0) {
            return root->isTerminal;
        }

         TrieNode *child;
        int index = word[0] - 'a';
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else {
            return false;
        }
        
        return search(child,word.substr(1));
    }*/
    bool search(TrieNode *root,string word) {
        // Write your code here
         if (word.size() == 0) {
            return root->isTerminal;
        }

        int index = word[0] - 'a';
        if(root->children[index] == NULL){
            return false;
        }

        return search(root->children[index],word.substr(1));
    }

    bool search(string word){
        return search(root, word);
    }

    void removeWord(TrieNode *root, string word) {
		// Base case
		if(word.size() == 0) {
			root -> isTerminal = false;
			return;
		}

		// Small calculation
		TrieNode *child;
		int index =  word[0] - 'a';
		if(root -> children[index] != NULL) {
			child = root -> children[index];
		}
		else {
			// Word not found
			return;
		}

		removeWord(child, word.substr(1));

		// Remove child Node if it is useless
		if(child -> isTerminal == false) {
			for(int i = 0; i < 26; i++) {
				if(child -> children[i] != NULL) {
					return;
				}
			}
			delete child;
			root -> children[index] = NULL;
		}
	}

    void removeWord(string word){
        removeWord(0, word);
    }
};
/*When we want to use insert and delete function only.
This is problem solution
int main() {
    int choice;
    cin >> choice;
    Trie t;

    while (choice != -1) {
        string word;
        bool ans;
        switch (choice) {
            case 1:  // insert
                cin >> word;
                t.insertWord(word);
                break;
            case 2:  // search
                cin >> word;
                cout << (t.search(word) ? "true\n" : "false\n");
                break;
            default:
                return 0;
        }
        cin >> choice;
    }

    return 0;
}*/


int main() {
	Trie t;
	t.insertWord("and");
	t.insertWord("are");
	t.insertWord("dot");

	cout << t.search("and") << endl;

	t.removeWord("and");
	cout << t.search("and") << endl;
}
