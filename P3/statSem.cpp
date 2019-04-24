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


int DEVMode = 1;


//reference https://www.geeksforgeeks.org/vector-in-cpp-stl/


using namespace std;

vector<string> globalContainer;

StaticSemantics::StaticSemantics(){
    
}


void StaticSemantics::insert(string variable){
    globalContainer.push_back(variable);
    
}

//returns true if variable found in the container
bool StaticSemantics::verify(string variable){

    //scan the vector to see if the variable already exits
    for (int i = 0; i < globalContainer.size(); i++) {
        if (globalContainer[i] == variable){
            return true;
        }
    }
    return false;
}


void StaticSemantics::Run(node* tree){
    traverseTree(tree, 0);
    
    
}

void StaticSemantics::traverseTree(node *tree, int depth) {
    token_t token1;

    
    if (tree == NULL) {
        return;
    } else {
        depth++;
    }
    
    if (tree->nodeLabel == "vars"){
        if (DEVMode) cout << "Checking if Variable Exists In Scope" << endl;
        
        if (!verify(tree -> token1.tokenInstance)){
            if (DEVMode) cout << "Variable did not exist, adding to container" << endl;
            insert(tree-> token1.tokenInstance);
            if (DEVMode) cout << globalContainer.back() << " added." << endl;
        }
             
    }
    
    if (tree->nodeLabel != "vars"){
        if (tree->token1.tokenID == identifierToken && tree->token1.tokenInstance != ""){
            if (DEVMode) cout << "Found: " << tree->token1.tokenInstance << ".  Checking if previously defined"<< endl;
            if (!verify(tree->token1.tokenInstance)){
                cout << "Error: " << tree->token1.tokenInstance << " is not defined." << endl;
            } else {
                if (DEVMode) cout << tree->token1.tokenInstance << " was defined." << endl;
            }
        }
            
    }
    

    if(tree->child1 != NULL){
        traverseTree(tree->child1, depth);
    }
    if(tree->child2 != NULL){
        traverseTree(tree->child2, depth);
    }
    if(tree->child3 != NULL){
        traverseTree(tree->child3, depth);
    }
    if(tree->child4 != NULL){
        traverseTree(tree->child4, depth);
    }
}






