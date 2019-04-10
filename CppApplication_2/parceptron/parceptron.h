/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   parceptron.h
 * Author: pashovich
 *
 * Created on April 9, 2019, 7:31 PM
 */

#ifndef PARCEPTRON_H
#define PARCEPTRON_H

class parceptron {
public:
    parceptron(const char s);
    parceptron(const parceptron& orig);
    virtual ~parceptron();
    void setWeights();
private:
    int* weights_;
    int* nums_;
    int* constNums;
    void learn();
    void test();
    const int K = 7;

};

#endif /* PARCEPTRON_H */

