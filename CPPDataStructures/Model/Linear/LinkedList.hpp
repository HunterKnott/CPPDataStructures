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

template <class Type>//Remember to put this on top of everything
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

template <class Type>
LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;//These nullptr's are here because there aren't any LinearNodes yet
    this->end = nullptr;
    this->size = 0;
}

template <class Type>
LinkedList<Type> :: ~LinkedList()//Destructor of data structure
{
    LinearNode<Type> * destroyStructure = front;
    while(front != nullptr)
    {
        front = destroyStructure->getNextNode();
        delete destroyStructure;
        destroyStructure = front;
    }
}

template <class Type>
void LinkedList<Type> :: add(Type item)//add(Type) method must know the size of the list
{
    LinearNode<Type> * newData = new LinearNode<Type>(item);
    
    if(this->size == 0)
    {
        this->front = newData;
    }
    else
    {
        this->end->setNextNode(newData);
    }
    
    this->end = newData;
    
    this-> size += 1;
}

template <class Type>
void LinkedList<Type> :: addAtIndex(int index, Type item)
{
    assert(index >= 0 && index <= this->size);
    if(index == this->size)//Checks to see if index is the size of the current list
    {
        add(item);
    }
    else//Handles moving front pointer if index and list are different sizes
    {
        LinearNode<Type> * toBeAdded = new LinearNode<Type>(item);
        if(index == 0)
        {
            toBeAdded->setNextNode(front);
            front = toBeAdded;
        }
        else
        {
            LinearNode<Type> * previous = nullptr;
            LinearNode<Type> * current = front;
            for(int position = 0; position < index; position++)
            {
                previous = current;
                current = current->getNextNode();
            }
            previous->setNextNode(toBeAdded);
            toBeAdded->setNextNode(current);
        }
        this->size++;
    }
}

template <class Type>
Type LinkedList<Type> :: getFromIndex(int index)//Retrieves values from the list
{
    assert(index >= 0 && index < this->size);
    Type data;
    
    LinearNode<Type> * current = front;
    
    for(int position = 0; position < index; position++)
    {
        current = current->getNextNode();
    }
    
    data = current->getData();
    
    return data;
}


#endif /* LinkedList_h */
