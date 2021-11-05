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
#include <exception>
namespace mylib {

/*Stack Works on the Principle of LIFO . Last in First Out.*/
template <typename T>
class StackUsingVector{
private:
    std::vector<T> vectorOfData;
    size_t stackSize;
    int dataCount{-1};
    
public:
    /*Creates a Stack of specifies Size.*/
    StackUsingVector(size_t sizeOfStack);
    
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

template <typename T>
StackUsingVector<T>::StackUsingVector(size_t sizeOfStack){
    stackSize=sizeOfStack;
    vectorOfData.reserve(stackSize);
}

template<typename T>
bool StackUsingVector<T>::isEmpty() const{
    if(dataCount==-1){
        return true;
    }
    return false;
}



template <typename T>
bool StackUsingVector<T>::isFull() const{
    if(dataCount==stackSize-1){
        return true;
    }
    return false;
}

template <typename T>
bool StackUsingVector<T>::push(T data){
    if(isFull()){
        std::cout<<"Stack Is Full. We can't Push in More Elements "<<std::endl;
        return false;
    }
    dataCount++;
    vectorOfData.push_back(data);
    return true;
}


template <typename T >
T StackUsingVector<T>::pop(){
    
    if(isEmpty()){
        throw std::underflow_error("Stack is Empty we can't Pop out Elements \n");
    }
    T data=vectorOfData.at(dataCount);
    vectorOfData.pop_back();
    dataCount--;
    return data;
}

template <typename T >
T StackUsingVector<T>::top() const{
    if(isEmpty()){
        throw std::underflow_error("Stack is Empty we can't see the Top Most Elements \n");
    }
    T data=vectorOfData.at(dataCount);
    return data;
}


template<typename T>
void StackUsingVector<T>::PrintStack() const{
    if(isEmpty()){
        std::cout<<"Stack is Empty !!"<<std::endl;
    }
    auto stackiterator = vectorOfData.cbegin();
    std::cout<<"Elements in Stack are as Follows : "<<std::endl;
    while(stackiterator!=vectorOfData.cend()){
        std::cout<<*stackiterator<<std::endl;
        stackiterator++;
    }

}

}
#endif /* StackUsingVector_hpp */
