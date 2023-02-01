//
// Created by Zachary Weed on 2/1/23.
//

#ifndef UNTITLED2_SOCIALGRAPH_H
#define UNTITLED2_SOCIALGRAPH_H
#include "SocialGraphNode.h"

class SocialGraph {
public:
    SocialGraphNode rootNode;
    SocialGraphNode * getRootNode();
    void setRootNode(SocialGraphNode sN);
};


#endif //UNTITLED2_SOCIALGRAPH_H
