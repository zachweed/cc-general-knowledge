//
// Created by Zachary Weed on 2/1/23.
//

#ifndef UNTITLED2_SOCIALGRAPHNODE_H
#define UNTITLED2_SOCIALGRAPHNODE_H

#include <fstream>
#include <vector>

using namespace std;

class SocialGraphNode {

public:
    string entity;
    std::vector<SocialGraphNode> connections;
    void setEntity(string s);
    string getEntity();
    void addConnection(SocialGraphNode * sGN);
    std::vector<SocialGraphNode> getConnections();
};


#endif //UNTITLED2_SOCIALGRAPHNODE_H
