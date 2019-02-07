//
//  List.hpp
//  CPPDataStructures
//
//  Created by Knott, Hunter on 2/1/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#ifndef List_hpp
#define List_hpp

#include <assert.h>
#include "../../Nodes/LinearNode.hpp"

template <class Type>
class List : public Node<Type>
{
protected:
    int size;
public:
    //List operations
    virtual void add(Type item) = 0;
    virtual void addAtIndex(int index, Type item) = 0;
    virtual Type remove(int index) = 0;
    virtual Type getFromIndex(int index) = 0;
    //Helper accessor methods
    virtual int getSize() const = 0;
    virtual LinearNode<Type> * getFront() = 0;
    virtual LinearNode<Type> * getEnd();
};

#endif /* List_hpp */
