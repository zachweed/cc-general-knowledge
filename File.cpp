//
// Created by Zachary Weed on 1/31/23.
//

#include "File.h"
#include <iostream>
#include <fstream>

using namespace std;

void File::ofFile(char* fileName) {
    const int numberOfLines = 10;
    ifstream file (fileName);
    string LastLines[numberOfLines];
    int lBound = 0;
    while (file.peek() != EOF){
        getline(file, LastLines[lBound % numberOfLines]);
    }
    cout << "I am guy";
}