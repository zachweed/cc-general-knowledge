#include <iostream>
#include "CustomString.h"
#include "LinkedList.h"

using namespace std;

#define NAME_SIZE 50 // a macro

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
        CustomString * st = new CustomString();
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
        if ((&(*theNodes)[0])->getData() != node->getData()) {
            throw(0);
        } else {
            cout << "The linked list node has the correct first node.\n";
        }
        if ((&(*theNodes)[1])->getData() != anotherNode->getData()) {
            throw(0);
        } else {
            cout << "The linked list node has the correct second node.\n";
        }
        if ((&(*theNodes)[2])->getData() != aThirdNode->getData()) {
            throw(0);
        } else {
            cout << "The linked list node has the correct third node.\n";
        }
        if (st->lengthOfLongestSubstring("abcabcbb") != 3) {
            throw(0);
        } else {
            cout << "The length of longest substring is correct.";
        }
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