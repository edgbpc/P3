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
#include "node.h"


extern vector<string> globalContainer;

class StaticSemantics {
    
    public:
        StaticSemantics();
        void Run(node* tree);
    
    private:
        void insert(string variable);
        bool verify(string variable);
    

    
    
    
};


#endif /* statSem_h */
