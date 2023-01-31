//
// Created by Zachary Weed on 1/31/23.
//

#include "LinkedListNode.h"

void LinkedListNode::setData(int d) {
    data = d;
}

int LinkedListNode::getData() {
    return data;
}

void LinkedListNode::setNextNode(LinkedListNode * nN) {
    nextNode = nN;
}

LinkedListNode LinkedListNode::getNextNode() {
    return *nextNode;
}
