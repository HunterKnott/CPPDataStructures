//
//  LinkedList.hpp
//  CPPDataStructures
//
//  Created by Knott, Hunter on 2/7/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#include "List.hpp"

using namespace std;//Used for keyword access. Use this to make sure your pointers are pointing to the right things

#ifndef LinkedList_hpp
#define LinkedList_hpp

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;//Remember that these are pointers
    LinearNode<Type> * end;
public:
    //Constructors
    LinkedList();//This is a prototype
    //Destructor
    virtual ~LinkedList();//Virtual is here so that it can be overridden. This is also a prototype
    //Helper methods
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    //Structure Methods
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
    //Type setAtIndex(int index, Type item);
    //bool contains(Type item);
}

LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;//These nullptr's are here because there aren't any LinearNodes yet
    this->end = nullptr;
    this->size = 0;
}


#endif /* LinkedList_h */
