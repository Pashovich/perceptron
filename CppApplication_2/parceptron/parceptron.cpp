/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   parceptron.cpp
 * Author: pashovich
 * 
 * Created on April 9, 2019, 7:31 PM
 */

#include "parceptron.h"
#include "../learnIt/learnAI.h"
#include"../file/fileOperator.h"
#include "../incdecOperator/valueChanger.h"
#include "../randomizer/randomizer.h"
#include <iostream>
using namespace std;

parceptron::parceptron(const char s) {
    constNums = new int [15];
    weights_ = new int[15];
    if (s == 'l'){
        setWeights();
        learn();
    }
    else{
        test();
    }
}
void parceptron::test(){
    fileOperator file;
    learnAI test(K);
    file.readFrom("const.txt",constNums);
    file.readFrom("weights.txt",weights_);
    if (test.learnIter(constNums,weights_)) {
        std::cout << "ok" << std::endl;
    }
    else std::cout << "no"<<std::endl;
}
void parceptron::setWeights(){
    for(int i = 0; i < 15; i++){
        weights_[i] = 1;
    }
}

parceptron::parceptron(const parceptron& orig) {
}

parceptron::~parceptron() {
}
void parceptron::learn(){
    valueChanger change;
    fileOperator file;
    randomizer random;
    file.readFrom("const.txt",constNums);
    nums_ = new int[15];
    learnAI iter(K);
    for(int i = 0 ; i< 10000000;i++){
        if((i%5) == 0){
            if(!iter.learnIter(constNums,weights_)){
                change.increase(constNums,weights_);
            }
        }
        else{
            random.randomFunc(nums_);
            if(iter.learnIter(nums_,weights_)) change.decrease(nums_,weights_);
        }
    }
    file.writeTo("weights.txt",weights_);
}

