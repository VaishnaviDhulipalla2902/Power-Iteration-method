#ifndef TASK5_H
#define TASK5_H
#include <vector>
#include <string>
#include<iostream>
#include <math.h>
#include "Matrix.h"
#include <time.h>
#include<string>
#include <fstream>
using namespace std;
class task5
{
    private: 
    Matrix mat;
    Matrix vectors;
    vector<double> value;
    vector< vector<double> > matrix_multiply(vector< vector<double> > a,vector< vector<double> > b);
    vector< vector<double> > transpose(vector< vector<double> > a);
    vector< vector<double> > transpose(vector<double>  a);
    double norm(vector< vector<double> > a);
    vector< vector<double> > multiply_scalar(vector< vector<double> > a,double k);
    vector< vector<double> > division_scalar(vector< vector<double> > a,double k);
    vector< vector<double> > subtract_scalar(vector< vector<double> > a,double k);
    vector< vector<double> > add_scalar(vector< vector<double> > a,double k);
    vector< vector<double> > init(int ax,int ay);
    void copy(vector< vector<double> >&,vector< vector<double> >&);
    vector< vector<double> > matrix_subtract(vector< vector<double> >a,vector< vector<double> >b);
    public:
    task5(string filename);
    void powerIteration(int k);
    void output_to_csv(string );
    };
#endif