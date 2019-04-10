/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   fileOperator.cpp
 * Author: pashovich
 * 
 * Created on April 9, 2019, 7:11 PM
 */

#include "fileOperator.h"
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

fileOperator::fileOperator() {
}

fileOperator::fileOperator(const fileOperator& orig) {
}

fileOperator::~fileOperator() {
}
void fileOperator::readFrom(char* s,int * temp){
    ifstream in;
    string filename = "file/";
    filename+=s;
    in.open(filename,ios::in);
    if(in.is_open()){
        for(int i = 0 ; i < 15; i++){
            in >> temp[i];
        }
        in.close();
    }
}
void fileOperator::writeTo(char* s, int* temp){
    ofstream out;
    string filename;
    filename = "file/";
    filename += s;
    out.open(filename,ios::out);
    if (out.is_open()){
        for(int i = 0 ;i<15;i++){
            out << temp[i] << " ";
        }
        out.close();
    }
}

