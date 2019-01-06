#include "Matrix.h"
#include <fstream>
#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;

Matrix::Matrix(const int ir , const int ic)
{
    r = ir;
    c = ic;
}

vector<double> Matrix::get_row_i(const int i)
{
    return matrix[i];
}

vector<double> Matrix::get_column_i(const int i)
{
    vector<double> column;
    for(int j=0;j<matrix.size();j++)
    {
        column.push_back(matrix[j][i]);
    }
    return column;
}
void Matrix::re_size(int r,int c)
{
    matrix.resize(r);
    int i;
    for(i=0;i<r;i++)
    {
        matrix[i].resize(c);
    }

}

void Matrix::fill_data_from_csv(const string filename)
{
    ifstream file(filename);
    Row row;

    string firstLine;
    getline(file, firstLine);

    string temp("");

    int i=0;
    while(firstLine[i]>=48 && firstLine[i]<=57)
    {
        temp+=firstLine[i++];
    }
    // cout<<temp<<endl;
    r = stoi(temp);
    i++;
    temp="";
    while(firstLine[i]>=48 && firstLine[i]<=57)
    {
        temp+=firstLine[i++];
    }
    // cout<<temp<<endl;
    c = stoi(temp);

    string line;

    stringstream lineStream(line);
    string cell;

    while(file >> row)
    {
        // continue;
        // cout << "4th Element(" << row[3] << ")\n";
        Record *r;
        r = new Record(row.get_vector());
        // for(int i=0;i<row.get_vector().size();i++)
            // cout<<row.get_vector()[i]<<" ";
        // cout<<endl;
        // .push_back(*r);
        vector<string> temp1 = r->get_record();
        vector<double> temp2;
        for(int i=0;i<temp1.size();i++)
        {
            temp2.push_back(stod(temp1[i]));
        }
        matrix.push_back(temp2);
        temp2.clear();
    }
}

