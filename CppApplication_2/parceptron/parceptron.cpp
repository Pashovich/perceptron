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

parceptron::parceptron(const char* s) {
    this->constNums = new int [15];
    this->weights = new int[15];
    if (s[1] == 'l'){
        setWeights();
        learn();
    }
    if (s[1] == 't'){
       char *test1  = "right.txt";
       test(test1); 
       char* test2 = "wrong.txt";
       test(test2);
    }
}
void parceptron::test(char * testName){
    fileOperator* file = fileOperator::getInitialization();
    learnAI test(K);
    file->readFrom(testName,constNums);
    file->readFrom("weights.txt",weights);
    if (test.learnIter(constNums,weights)) {
        std::cout << "ok" << std::endl;
    }
    else std::cout << "no"<<std::endl;
}
void parceptron::setWeights(){
    for(int i = 0; i < 15; i++){
        this->weights[i] = 1;
    }
}

parceptron::parceptron(const parceptron& orig) {
}

parceptron::~parceptron() {
}
void parceptron::learn(){
    valueChanger change;
    fileOperator * file = fileOperator::getInitialization();
    randomizer random;
    file->readFrom("const.txt",constNums);
    nums = new int[15];
    learnAI iter(K);
    for(int i = 0 ; i< 1000000;i++){
        if((i%10) == 0){
            if(!iter.learnIter(constNums,this->weights)){
                valueChanger::increase(constNums,this->weights);
                
            }
        }
        else{
            random.randomFunc(nums);
            if(iter.learnIter(nums,this->weights)) valueChanger::decrease(nums,this->weights);
        }
    }
    file->writeTo("weights.txt",this->weights);
}

