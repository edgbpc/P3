//
//  statSem.cpp
//  P3
//
//  Created by Eric Goodwin on 4/23/19.
//  Copyright © 2019 umsl. All rights reserved.
//


#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
#include "statSem.h"
#include "node.h"
#include "token.h"
#include "testTree.h"


//reference https://www.geeksforgeeks.org/vector-in-cpp-stl/


using namespace std;

StaticSemantics::StaticSemantics(){
    
}


void StaticSemantics::insert(string variable){
    globalContainer.push_back(variable);
    
}

//returns true if variable succesfully inserted
bool StaticSemantics::verify(string variable){
    
    //scan the vector to see if the variable already exits
    for (int i = 0; i < globalContainer.size(); i++) {
        if (globalContainer[i] == variable){
            return false;
        } else {
            insert(variable);
        }
    }
    return true;
}


void StaticSemantics::Run(node* tree){
    
}








