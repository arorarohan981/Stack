//
//  StackUsingVector.hpp
//  Stack
//
//  Created by Rohan Arora on 05/11/21.
//

#ifndef StackUsingVector_hpp
#define StackUsingVector_hpp

#include <stdio.h>
#include <vector>
namespace mylib {

/*Stack Works on the Principle of LIFO . Last in First Out.*/
template <typename T>
class StackUsingVector{
private:
    std::vector<T> vectorOfData;
    size_t stackSize;
    int dataCount{-1};
    
public:
    /*Checks Whether the Stack is Empty. Returns True if the Stack is Empty or else returns False*/
    bool isEmpty() const;
    
    /*Checks Whether the Stack is Full. Returns True if the Stack is Full or else return False. */
    bool isFull() const;
    
    /*Returns the Copy of topmost Element of the Stack */
    T top() const;
    
    /*Returns the Copy of Top Most Element of Stack and Removes the Top Most Element */
    T pop() ;
    
    /*Pushes the data into the Stack.Returns True if the data is inserted successfully into the Stack or else returns False. */
    bool push(T &data);
};


}
#endif /* StackUsingVector_hpp */
