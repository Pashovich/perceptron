/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   valueChanger.h
 * Author: pashovich
 *
 * Created on April 10, 2019, 10:34 AM
 */

#ifndef VALUECHANGER_H
#define VALUECHANGER_H

class valueChanger {
public:
    valueChanger();
    valueChanger(const valueChanger& orig);
    virtual ~valueChanger();
    void static increase(int* nums,int* weights);
    void static decrease (int* nums,int* weights);
private:

};

#endif /* VALUECHANGER_H */

