//
// Created by Zachary Weed on 1/31/23.
//

#ifndef UNTITLED2_LINKEDLISTNODE_H
#define UNTITLED2_LINKEDLISTNODE_H


class LinkedListNode {
    public:
        int data;
        LinkedListNode * nextNode;

        void setData(int d);
        int getData();
        void setNextNode(LinkedListNode * nN);
        LinkedListNode * getNextNode();
};


#endif //UNTITLED2_LINKEDLISTNODE_H
