/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   learnAI.h
 * Author: pashovich
 *
 * Created on April 9, 2019, 7:46 PM
 */

#ifndef LEARNAI_H
#define LEARNAI_H

class learnAI {
public:
    learnAI(int k);
    learnAI(const learnAI& orig);
    virtual ~learnAI();
    int learnIter(int* nums, int* weights);
private:
    int k;

};

#endif /* LEARNAI_H */

