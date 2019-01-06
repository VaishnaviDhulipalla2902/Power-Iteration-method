#ifndef MATRIX_H
#define MATRIX_H
#include "Record.h"
#include "Row.h"
#include <vector>
#include <string>
using namespace std;
class Matrix
{
    public:
    Matrix(int ir = 250, int ic = 250);
    int get_row_size()
    {
        return r;
    }
    int get_column_size()
    {
        return c;
    }
    
    vector<double> get_row_i(int i);
    vector<double> get_column_i(int i);

    vector< vector<double> > get_matrix()
    {
        return matrix;
    }

    void set_value(int i, int j, double value)
    {
        matrix[i][j] = value;
    }
    void fill_data_from_csv(string filename);
    void re_size(int r, int c);

    private:
    int r;
    int c;
    vector< vector<double> > matrix;
};

#endif
