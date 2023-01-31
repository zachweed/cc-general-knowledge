#include <iostream>

#include "Interviewee.h"
#include "CustomString.h"
#include "File.h"

using namespace std;

int main() {
    Interviewee * i = new Interviewee();
    i->aboutMe();
    i->giveChallenges("interesting challenge");
    delete i;
    return 0;
}