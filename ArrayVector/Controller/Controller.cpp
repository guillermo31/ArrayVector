//
//  Controller.cpp
//  ArrayVector
//
//  Created by Ramos aguirre, Guillermo on 1/28/19.
//  Copyright © 2019 ctec. All rights reserved.
//

#include "Controller.hpp"
void Controller:: start()
{
    playWithVector();
}

void Controller:: playWithVector()
{
    vector<int> myVector;
    myVector.push_back(2);
    myVector.push_back(5);
    myVector.push_back(1);
    
    for(int i = 0; i < myVector.size(); i++)
    {
        cout << myVector[i] << endl;
    }
    
    vector<string> stringVector;
    string vectorCopy [stringVector.size()];
    stringVector.push_back("hello");
    stringVector.push_back("hi there");
    
    for (int i = 0; i < stringVector.size(); i++)
    {
        cout << stringVector[i] << endl;
        vectorCopy[i] = stringVector[i];
        cout << vectorCopy[i] << endl;
        
    }

}
