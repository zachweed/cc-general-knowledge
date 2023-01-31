#include <iostream>
#include <fstream>
using namespace std;


#define NAME_SIZE 50 // a macro

// Provide data; next_node
class LinkedListNode {
    public:
        int data;

        void setData(int d) {
            data = d;
        }

        int getData() {
            return data;
        }
};

// An array of nodes
class LinkedList {


};

class LastNLines {
    void ofFile(char* fileName) {
        const int numberOfLines = 10;
        ifstream file (fileName);
        string LastLines[numberOfLines];
        int lBound = 0;

        // While we're not at end of file
        while (file.peek() != EOF){
            getline(file, LastLines[lBound % numberOfLines]);
        }

        cout << "I am a guy";
    }
};

class Guy {
    int id;
    char name[NAME_SIZE];

public:
    void aboutMe() {
        cout << "I am a guy";
    }

    virtual bool giveChallenges(string s) = 0;
};

class Interviewee : public Guy {

    public:
        void aboutMe() {
            cout << "I am an interviewee with experience in C++." << endl;
        }

    bool giveChallenges(string s) {
        cout << "We're giving this guy an " << s << " to work on." << endl;
        LinkedListNode * node = new LinkedListNode();
        node->setData(0);
        if (node->getData() != 0) {
            throw(0);
        } else {
            cout << "The linked list node is correct.\n";
        }
        if (lengthOfLongestSubstring("abcabcbb") != 3) {
            throw(0);
        } else {
            cout << "The length of longest substring is correct.";
        }
    }

    int lengthOfLongestSubstring(string s) {
        int string_length = (s.length() - 1);
        int result = 0;

        for(int i = 0; i < string_length; i++) {
            int array[256] = {0};
            for(int j = i; j < string_length; j++) {
                if (s[j] && array[s[j]] == 1){
                    break;
                }
                result = std::max(result, j-i+1);
                array[s[j]] = 1;
            }
            array[s[i]] = 0;
        }
        return result;
    }
};

int main() {
    Interviewee * i = new Interviewee();
    i->aboutMe();
    i->giveChallenges("interesting challenge");
    delete i;
    Guy * g = new Interviewee();
    cout << "\n";
    g->aboutMe();
    delete g;
    return 0;
}