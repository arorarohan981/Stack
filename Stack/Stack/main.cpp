//
//  main.cpp
//  Stack
//
//  Created by Rohan Arora on 05/11/21.
//

#include <iostream>
#include "StackUsingVector.hpp"
#include "StackUsingList.hpp"



void StackUsingVectorImpl(){
    mylib::StackUsingVector<int> integerStack{3};
    std::cout<<std::boolalpha<<"Is Stack Empty ? "<<integerStack.isEmpty()<<std::endl;
    std::cout<<"Is Stack Full ? "<<integerStack.isFull()<<std::endl;
//    integerStack.top();
//    integerStack.pop();
    integerStack.push(1);
    integerStack.push(2);
    integerStack.push(3);
    integerStack.push(4);
    integerStack.PrintStack();
}

void StackUsingListImpl(){
    mylib::StackUsingList<int> integerStack{4};
    std::cout<<std::boolalpha<<"Is Stack Empty ? "<<integerStack.isEmpty()<<std::endl;
    std::cout<<"Is Stack Full ? "<<integerStack.isFull()<<std::endl;
//    integerStack.top();
//    integerStack.pop();
    integerStack.push(1);
    integerStack.push(2);
    integerStack.push(3);
    integerStack.push(4);
    integerStack.PrintStack();
}
int main(int argc, const char * argv[]) {
//    StackUsingVectorImpl();
    StackUsingListImpl();
    
    return 0;
}
