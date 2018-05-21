//
//  main.cpp
//  HelloWorld
//
//  Created by Jude on 5/5/18.
//  Copyright © 2018 Jude. All rights reserved.
//

#include <iostream>
using namespace std;

string hello();
void Playgame();

int main(int argc, const char * argv[]) {
    // ask for your name
    cout << "put in your name ";
    string name;
    cin >> name;
    cout << "Nice to meet you " << name << "\n";
    Playgame();
    return 0;
}

string hello(string name) {
    return "";
}

void Playgame()
{
    int numberbucket=50;
    cout<< "whats your guess";
    int guess;
    cin>> guess;
}
