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

template <class Type>
Stack<Type> :: Stack() : LinkedList<Type>()
{
    //Empty
}

template <class Type>
Stack<Type> :: ~Stack()//Destructor for stack that uses pop method
{
    while(this->size> 0)
    {
        pop();
    }
}


#endif /* Stack_h */
