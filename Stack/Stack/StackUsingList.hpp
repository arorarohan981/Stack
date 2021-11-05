//
//  StackUsingList.hpp
//  Stack
//
//  Created by Rohan Arora on 05/11/21.
//

#ifndef StackUsingList_hpp
#define StackUsingList_hpp
#include <stdio.h>
#include <List>
#include <exception>
namespace mylib {
/*Stack Works on the Principle of LIFO . Last in First Out.*/
template <typename T>
class StackUsingList{
private:
    std::list<T> listOfData;
    size_t stackSize;
    int dataCount{-1};
    
public:
    /*Creates a Stack of specifies Size.*/
    StackUsingList(size_t sizeOfStack);
    
    /*Checks Whether the Stack is Empty. Returns True if the Stack is Empty or else returns False*/
    bool isEmpty() const;
    
    /*Checks Whether the Stack is Full. Returns True if the Stack is Full or else return False. */
    bool isFull() const;
    
    /*Returns the Copy of topmost Element of the Stack .
     Throws UnderFlow Exception if we try to See/Peak to Top Most element of the Stack if it is Empty.*/
    T top() const;
    
    /*Returns the Copy of Top Most Element of Stack and Removes the Top Most Element .
     Throws UnderFlow Exception if we try to pop out elements if the Stack is Empty.*/
    T pop() ;
    
    /*Pushes the data into the Stack.Returns True if the data is inserted successfully into the Stack or else returns False. */
    bool push(T data);
    
    
    /*Prints All Elements from the Stack in LIFO order.*/
    void PrintStack() const;
    
};
}


#endif /* StackUsingList_hpp */
