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



//reference https://www.geeksforgeeks.org/vector-in-cpp-stl/


using namespace std;

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
    
    
}

void StaticSemantics::traverseTree(node *tree, int depth) {
    if (tree == NULL) {
        return;
    }
    else {
        for (int i = 0; i <= depth; i++) {
            //     cout << "  ";
        }
        depth++;
        
        cout << tree->nodeLabel;
        
        token_t token1 = tree -> token1;
        token_t token2 = tree -> token2;
        
        if (tree->nodeLabel == "var"){
            
        }
        
        //        if (token1.tokenInstance != "") {
        //            cout << " Token 1: " << tokenTypes[token1.tokenID] << ", element: " << token1.tokenInstance << " ";
        //        }
        //        if (token2.tokenInstance != "") {
        //            cout << " Token 2: " << tokenTypes[token2.tokenID] << ", element: " << token2.tokenInstance << " ";
        //        }
        //
        
        cout << endl;
        
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
}





