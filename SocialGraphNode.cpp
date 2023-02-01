//
// Created by Zachary Weed on 2/1/23.
//

#include "SocialGraphNode.h"

using namespace std;

void SocialGraphNode::setEntity(string s) {
    entity = s;
};

string SocialGraphNode::getEntity() {
    return entity;
}

void SocialGraphNode::addConnection(SocialGraphNode * sGN) {
    connections.push_back(*sGN);
};

std::vector<SocialGraphNode> SocialGraphNode::getConnections() {
    return connections;
};