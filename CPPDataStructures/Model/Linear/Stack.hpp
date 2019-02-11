//
//  Stack.hpp
//  CPPDataStructures
//
//  Created by Knott, Hunter on 2/11/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#ifndef Stack_hpp
#define Stack_hpp

#include "LinkedList.hpp"

template <class Type>
class Stack : public LinkedList<Type>
{
public:
    Stack();//Constructor
    ~Stack();//Destructor
    
    //Stack specific methods
    void push(Type data);
    Type pop();
    Type peek();
    
    //Overriden LinkedList methods
    void add(Type data);
    void addAtIndex(int index, Type data);
    Type getFromIndex(int index);
    Type remove(int index);
}


#endif /* Stack_h */
