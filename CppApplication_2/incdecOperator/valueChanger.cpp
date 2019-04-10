/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   valueChanger.cpp
 * Author: pashovich
 * 
 * Created on April 10, 2019, 10:34 AM
 */

#include "valueChanger.h"

valueChanger::valueChanger() {
}

valueChanger::valueChanger(const valueChanger& orig) {
}

valueChanger::~valueChanger() {
}
void valueChanger::increase(int* nums, int* weights){
    for(int i = 0 ; i < 15; i++){
        if(nums[i]==1) weights[i]++;
    }
}
void valueChanger::decrease(int* nums, int* weights){
    for(int i = 0 ; i < 15; i++){
        if(nums[i]==1) weights[i]--;
    }
}

