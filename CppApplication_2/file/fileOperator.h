/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fileOperator.h
 * Author: pashovich
 *
 * Created on April 9, 2019, 7:11 PM
 */

#ifndef FILEOPERATOR_H
#define FILEOPERATOR_H

class fileOperator {
public:
    fileOperator();
    fileOperator(const fileOperator& orig);
    virtual ~fileOperator();
    void readFrom(const char * s,int* temp);
    void writeTo(const char * s, int* temp);
private:

};

#endif /* FILEOPERATOR_H */

