#include <iostream>
#include <fstream>
using namespace std;


#define NAME_SIZE 50 // a macro

class LinkedListNode {
    public:
        int data;
        LinkedListNode * nextNode;

        void setData(int d) {
            data = d;
        }

        int getData() {
            return data;
        }

        void setNextNode(LinkedListNode * nN) {
            nextNode = nN;
        }

        LinkedListNode getNextNode() {
            return *nextNode;
        }
};

// An array of nodes
class LinkedList {
    public:
        LinkedListNode *nodes = new LinkedListNode[3];

        void setNodes(LinkedListNode * nS) {
            nodes = nS;
        }

        LinkedListNode getNodes() {
            return *nodes;
        }
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
        LinkedListNode * anotherNode = new LinkedListNode();
        LinkedListNode * aThirdNode = new LinkedListNode();
        node->setData(0);
        anotherNode->setData(1);
        aThirdNode->setData(2);
        anotherNode->setNextNode(aThirdNode);
        node->setNextNode(anotherNode);
        LinkedList * list = new LinkedList();
        LinkedListNode * theNodes[3] = {node, anotherNode, aThirdNode};
        list->setNodes(*theNodes);
        if (node->getData() != 0) {
            throw(0);
        } else {
            cout << "The linked list node has the correct data.\n";
        }
        if (node->getNextNode().getData() != anotherNode->getData()) {
            throw(0);
        } else {
            cout << "The linked list node has the correct next node.\n";
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