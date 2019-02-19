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
    virtual int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    //Structure Methods
    virtual void add(Type item);//virtual is here so that we can override these methods in a subclass
    virtual void addAtIndex(int index, Type item);
    virtual Type getFromIndex(int index);
    virtual Type remove(int index);
    //Type setAtIndex(int index, Type item);
    bool contains(Type item);
};

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

template <class Type>
Type LinkedList<Type> :: remove(int index)
{
    assert(index >= 0 && index < this->size);//The index must be checked for validity for the remove method
    
    LinearNode<Type> * current = front;//pointer called current points to front
    LinearNode<Type> * toBeRemoved = nullptr;//toBeRemoved pointer points to null
    LinearNode<Type> * previous = nullptr;//previous pointer points to null
    
    Type removedData;//Makes a variable
    
    if(index == 0)
    {
        toBeRemoved = front;
        this->front = this->front->getNextNode();
    }
    else
    {
        for(int position = 0; position < index; position++)
        {
            previous = current;
            current = current->getNextNode();
        }
        
        toBeRemoved = current;
        
        if(index == this->size - 1)
        {
            previous->setNextNode(nullptr);
            end = previous;
        }
        else
        {
            current = toBeRemoved->getNextNode();
            previous->setNextNode(current);
        }
    }
    this->size -= 1;
    
    removedData = toBeRemoved->getData();//removedData becomes the data value of the toBeRemoved pointer
    delete toBeRemoved;//Deleates memory allocation for node
    return removedData;
}

template <class Type>
LinearNode<Type> * LinkedList<Type> :: getEnd()
{
    return this->end;
}

template <class Type>
LinearNode<Type> * LinkedList<Type> :: getFront()
{
    return this->front;
}

template <class Type>
int LinkedList<Type> :: getSize() const
{
    return this->size;
}

template <class Type>
bool LinkedList<Type> :: contains(Type thingToFind)
{
    bool exists = false;
    
    LinearNode<Type> * searchPointer = front;
    
    for(int index; index < getSize(); index++)
    {
        if(searchPointer->getData() == thingToFind)
        {
            return true;
        }
        searchPointer = searchPointer->getNextNode();
    }
    
    return exists;
}


#endif /* LinkedList_h */
