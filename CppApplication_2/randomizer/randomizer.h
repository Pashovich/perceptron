/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   randomizer.h
 * Author: pashovich
 *
 * Created on April 10, 2019, 10:21 AM
 */

#ifndef RANDOMIZER_H
#define RANDOMIZER_H

class randomizer {
public:
    randomizer();
    randomizer(const randomizer& orig);
    virtual ~randomizer();
    void randomFunc(int * temp);
private:

};

#endif /* RANDOMIZER_H */

