/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   learnAI.cpp
 * Author: pashovich
 * 
 * Created on April 9, 2019, 7:46 PM
 */

#include "learnAI.h"

learnAI::learnAI(int k) {
    this->k = k;
}

learnAI::learnAI(const learnAI& orig) {
}

learnAI::~learnAI() {
}

int learnAI::learnIter(int* nums, int* weights){
    int result = 0;
    for (int i = 0; i < 15; i++){
        result += nums[i]*weights[i];
    }
    
    return result >= k;
}

