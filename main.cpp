/* 
 * File:   main.cpp
 * Author: Ivan
 *
 * Created on November 3, 2013, 9:17 PM
 */

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

/**
 * Return the special number
 * 
 * @param number The number
 * @return The special number
 */
int game(int number) {
    int result = number * 100 + 90 + (9 - number);
    return result;
}

int main(int argc, char** argv) {
    // Open input the file
    string inFileName = "input.txt";
    ifstream in;
    in.open(inFileName.c_str());
    if (!in.is_open()) {
        cerr << "Error: could not open file: " << inFileName.c_str() << endl;
        return 1;
    }

    // Open output the file
    string outFileName = "output.txt";
    ofstream out;
    out.open(outFileName.c_str());
    if (!out.is_open()) {
        cerr << "Error: could not open file: " << outFileName.c_str() << endl;
        return 1;
    }
    
    // Read input data and calculate the result
    int n;
    int result;
    if (in >> n) {
        result = game(n);
        out << result << endl;
    } else {
        cerr << "Error: incorrect data in the file: " << inFileName.c_str() << endl;
        return 1;
    }
    
    return 0;
}
