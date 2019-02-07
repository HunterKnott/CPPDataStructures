//
//  LinkedList.hpp
//  CPPDataStructures
//
//  Created by Knott, Hunter on 2/7/19.
//  Copyright © 2019 Knott, Hunter. All rights reserved.
//

#include "List.hpp"

using namespace std; //Used for keyword access. Use this to make sure your pointers are pointing to the right things

#ifndef LinkedList_hpp
#define LinkedList_hpp

template <class Type>
class LinkedList : public List<Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
}


#endif /* LinkedList_h */
