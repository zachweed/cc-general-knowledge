//
// Created by Zachary Weed on 1/31/23.
//

#ifndef UNTITLED2_PERSON_H
#define NAME_SIZE 50
#define SEX
#define UNTITLED2_PERSON_H

#include <fstream>
using namespace std;

class Person {
    int id;
    int name;
    char sex;

    public:
        void aboutMe();
        virtual bool giveChallenges(string s)=0;
};


#endif //UNTITLED2_PERSON_H
