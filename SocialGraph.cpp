//
// Created by Zachary Weed on 2/1/23.
//

#include "SocialGraph.h"

void SocialGraph::setRootNode(SocialGraphNode sN) {
    rootNode = sN;
};

SocialGraphNode * SocialGraph::getRootNode() {
    return &rootNode;
};
