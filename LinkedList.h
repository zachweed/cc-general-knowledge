//
// Created by Zachary Weed on 1/31/23.
//

#ifndef UNTITLED2_LINKEDLIST_H
#define UNTITLED2_LINKEDLIST_H

#include "LinkedListNode.h"

class LinkedList {
    LinkedListNode * nodes[];

    public:

        void setNodes(LinkedListNode * nS);
        const LinkedListNode getNodes();
};


#endif //UNTITLED2_LINKEDLIST_H
