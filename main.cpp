#include <iostream>
using namespace std;

#define NAME_SIZE 50 // a macro

class Guy {
    int id;
    char name[NAME_SIZE];

public:
    void aboutMe() {
        cout << "I am a guy";
    }

    virtual bool giveChallenge(string s) = 0;
};

class Interviewee : public Guy {

public:
    void aboutMe() {
        cout << "I am an interviewee with experience in C++." << endl;
    }

bool giveChallenge(string s) {
    cout << "We're giving this guy an " << s << " to work on." << endl;
    return true;
}
};

int main() {
    Interviewee * i = new Interviewee();
    i->aboutMe(); // Create a new interviewer and print the about me.
    i->giveChallenge("interesting challenge");
    delete i; // Free memory
    Guy * g = new Interviewee(); // Utilizing static-binding to reach through function is not virtual.
    cout << "\n";
    g->aboutMe(); // Create a new guy and print the about me.
    delete g; // Free memory.
    return 0;
}

// 1. What's the typical tab size in c++?
// 2. Private functions in c++?
// 3. Memory allocation in C++ (remove pointers).