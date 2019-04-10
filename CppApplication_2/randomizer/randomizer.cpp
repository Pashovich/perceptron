/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   randomizer.cpp
 * Author: pashovich
 * 
 * Created on April 10, 2019, 10:21 AM
 */

#include "randomizer.h"
#include <ctime>
#include <stdlib.h>

randomizer::randomizer() {
    srand(time(NULL));
}

randomizer::randomizer(const randomizer& orig) {
}

randomizer::~randomizer() {
}
void randomizer::randomFunc(int* temp){
    for(int i = 0 ; i < 15;i++){
        temp[i] = rand() % 2;
    }
}

