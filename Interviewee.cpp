//
// Created by Zachary Weed on 1/31/23.
//

#include <iostream>
#include "Interviewee.h"
#include "CustomString.h"
#include "SocialGraph.h"

void Interviewee::aboutMe() {
    cout << "I am an interviewee with experience in C++. See: https://github.com/zachweed" << endl;
}

bool Interviewee::giveChallenges(string s) {
    cout << "We're giving this guy an " << s << " to work on." << endl;
    LinkedListNode *node = new LinkedListNode();
    LinkedListNode *anotherNode = new LinkedListNode();
    LinkedListNode *aThirdNode = new LinkedListNode();
    LinkedListNode *aFourthNode = new LinkedListNode();
    node->setData(0);
    anotherNode->setData(1);
    aThirdNode->setData(2);
    aFourthNode->setData(3);
    aThirdNode->setNextNode(aFourthNode);
    anotherNode->setNextNode(aThirdNode);
    node->setNextNode(anotherNode);
    LinkedList *list = new LinkedList();
    LinkedListNode * root = node;
    list->setRoot(root);
    CustomString *st = new CustomString();
    SocialGraph *graph = new SocialGraph();
    SocialGraphNode *graphNode = new SocialGraphNode();
    SocialGraphNode *anotherGraphNode = new SocialGraphNode();
    graphNode->setEntity("Zachary Weed");
    anotherGraphNode->addConnection(graphNode);
    anotherGraphNode->setEntity("Interviewer (Some Company)");
    graphNode->addConnection(anotherGraphNode);
    graph->setRootNode(*graphNode);
    if (node->getData() != 0) {
        throw (0);
    } else {
        cout << "The linked list node has the correct data.\n";
    }
    if (node->getNextNode()->getData() != anotherNode->getData()) {
        throw (0);
    } else {
        cout << "The linked list node has the correct next node.\n";
    }
    if (root->getData() != node->getData()) {
        throw (0);
    } else {
        cout << "The linked list node has the correct first node.\n";
    }
    if (st->lengthOfLongestSubstring("abcabcbb") != 3) {
        throw (0);
    } else {
        cout << "The length of longest substring is correct.\n";
    }
    if (!!(graph->getRootNode()->getEntity().compare("Zachary Weed"))) {
        throw (0);
    } else {
        cout << "Yeah his name is Zach.\n";
    }
    if (!!(graph->getRootNode()->getConnections()[0].getEntity().compare("Interviewer (Some Company)"))) {
        throw (0);
    } else {
        cout << "Yeah we got the right guy.\n";
    }
    if (!!(anotherGraphNode->getConnections()[0].getEntity().compare("Zachary Weed"))) {
        throw (0);
    } else {
        cout << "The connection is mutual.\n";
    }
};