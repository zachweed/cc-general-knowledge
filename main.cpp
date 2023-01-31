#include <iostream>
#include <fstream>
using namespace std;


#define NAME_SIZE 50 // a macro

class LastNLines {
    void ofFile(char* fileName) {
        const int numberOfLines = 10;
        ifstream file (fileName);
        string LastLines[numberOfLines];
        int lBound = 0;

        // While we're not at end of file
        while (file.peek() != EOF){
            getline(file, LastLines[lBound % numberOfLines]);
        }

        cout << "I am a guy";
    }
};

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
        if (lengthOfLongestSubstring("abcabcbb") != 3) {
            throw(0);
        } else {
            cout << "function works as expected.";
            return true;
        }
    }

    int lengthOfLongestSubstring(string s) {
        int string_length = (s.length() - 1);
        int result = 0;

        for(int i = 0; i < string_length; i++) {
            int array[256] = {0};
            for(int j = i; j < string_length; j++) {
                if (s[j] && array[s[j]] == 1){
                    break;
                }
                result = std::max(result, j-i+1);
                array[s[j]] = 1;
            }
            array[s[i]] = 0;
        }
        return result;
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