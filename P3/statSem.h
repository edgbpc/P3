//
//  statSem.hpp
//  P3
//
//  Created by Eric Goodwin on 4/23/19.
//  Copyright © 2019 umsl. All rights reserved.
//

#ifndef statSem_h
#define statSem_h

#include <stdio.h>
#include <vector>
#include <stack>
#include "node.h"


using namespace std;

extern vector<string> globalContainer;
extern stack<string> localContainer;

class StaticSemantics {
    
    public:
        StaticSemantics();
        void Run(node* tree);
    
    private:
        void insert(string variable, bool inBlock);
        bool verify(string variable);
        void traverseTree(node *tree, int depth);
        int find(string variable);
    
};


#endif /* statSem_h */
