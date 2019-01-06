#include "task5.h"

task5::task5(string filename)
{
    mat.fill_data_from_csv(filename);
}
vector< vector<double> >task5::matrix_multiply(vector< vector<double> > a,vector< vector<double> > b)
{
    vector< vector<double> > temp;
    int i,j,k;
    for(i=0;i<a.size();i++)
    {
        vector<double> temp1;
        for(j=0;j<b[0].size();j++)
        {
            temp1.push_back(0);
        }
        temp.push_back(temp1);
    }
    if(a[0].size()==b.size())
    {
        for(i=0;i<a.size();i++)
        {
            for(j=0;j<b[0].size();j++)
            {
                for(k=0;k<a[0].size();k++)
                {
                    temp[i][j] += a[i][k]*b[k][j];
                }
            }
        }
    }
    return temp;
}

vector< vector<double> > task5::transpose(vector< vector<double> > a)
{
    vector< vector<double> > temp;
    int i,j,k;
    for(i=0;i<a[0].size();i++)
    {
        vector<double> temp1;
        for(j=0;j<a.size();j++)
        {
            temp1.push_back(0);
        }
        temp.push_back(temp1);
    }
    for(i=0;i<temp.size();i++)
    {
        for(j=0;j<temp[0].size();j++)
        {
            temp[i][j]=a[j][i];
        }
    }
    return temp;
}

vector< vector<double> > task5::transpose(vector<double>  a)
{
    vector< vector<double> > temp;
    int i,j,k;
    for(i=0;i<a.size();i++)
    {
        vector<double> temp1;
        for(j=0;j<1;j++)
        {
            temp1.push_back(0);
        }
        temp.push_back(temp1);
    }
    for(i=0;i<temp.size();i++)
    {
        temp[i][0]=a[i];
    }
    return temp;
}
double task5::norm(vector< vector<double> > a)
{
    double temp=0;
    if(a[0].size()==1)
    {
        int i;
        for(i=0;i<a.size();i++)
        {
            temp=temp+a[i][0]*a[i][0];
        }
        temp=pow(temp,0.5);
    }
    return temp;
}

vector< vector<double> > task5::multiply_scalar(vector< vector<double> > a,double p)
{
    vector< vector<double> > temp;
    int i,j,k;
    for(i=0;i<a.size();i++)
    {
        vector<double> temp1;
        for(j=0;j<a[0].size();j++)
        {
            temp1.push_back(0);
        }
        temp.push_back(temp1);
    }
    for(i=0;i<a.size();i++)
    {
        for(j=0;j<a[0].size();j++)
        {
            temp[i][j]=a[i][j]*p;
        }
    }
    return temp;
}

vector< vector<double> > task5::division_scalar(vector< vector<double> > a,double p)
{
    vector< vector<double> > temp;
    int i,j,k;
    for(i=0;i<a.size();i++)
    {
        vector<double> temp1;
        for(j=0;j<a[0].size();j++)
        {
            temp1.push_back(0);
        }
        temp.push_back(temp1);
    }
    for(i=0;i<a.size();i++)
    {
        for(j=0;j<a[0].size();j++)
        {
            temp[i][j]=a[i][j]/p;
        }
    }
    return temp;
}

vector< vector<double> > task5::subtract_scalar(vector< vector<double> > a,double p)
{
    vector< vector<double> > temp;
    int i,j,k;
    for(i=0;i<a.size();i++)
    {
        vector<double> temp1;
        for(j=0;j<a[0].size();j++)
        {
            temp1.push_back(0);
        }
        temp.push_back(temp1);
    }
    for(i=0;i<a.size();i++)
    {
        for(j=0;j<a[0].size();j++)
        {
            temp[i][j]=a[i][j]-p;
        }
    }
    return temp;
}

vector< vector<double> > task5::add_scalar(vector< vector<double> > a,double p)
{
    vector< vector<double> > temp;
    int i,j,k;
    for(i=0;i<a.size();i++)
    {
        vector<double> temp1;
        for(j=0;j<a[0].size();j++)
        {
            temp1.push_back(0);
        }
        temp.push_back(temp1);
    }
    for(i=0;i<a.size();i++)
    {
        for(j=0;j<a[0].size();j++)
        {
            temp[i][j]=a[i][j]+p;
        }
    }
    return temp;
}

vector< vector<double> > task5::init(int ax,int ay)
{
    vector< vector<double> > temp;
    int i,j,k;
    for(i=0;i<ax;i++)
    {
        vector<double> temp1;
        for(j=0;j<ay;j++)
        {
            temp1.push_back(0);
        }
        temp.push_back(temp1);
    }
    for(i=0;i<ax;i++)
    {
        for(j=0;j<ay;j++)
        {
            temp[i][j]=rand()%100+1;
        }
    }
    return temp;
}

vector< vector<double> > task5::matrix_subtract(vector< vector<double> >a,vector< vector<double> >b)
{
    vector< vector<double> > temp;
    int i,j,k;
    if(a.size()==b.size() && a[0].size()==b[0].size())
    {
        for(i=0;i<a.size();i++)
        {
            vector<double> temp1;
            for(j=0;j<a[0].size();j++)
            {
                temp1.push_back(0);
            }
            temp.push_back(temp1);
        }
        for(i=0;i<a.size();i++)
        {
            for(j=0;j<a[0].size();j++)
            {
                temp[i][j]=a[i][j]-b[i][j];
            }
        }
    }
    return temp;
}
void task5::copy(vector< vector<double> >& from,vector< vector<double> >& to)
{
    int i,j;
    for(i=0;i<from.size();i++)
    {
        for(j=0;j<from[0].size();j++)
        {
            to[i][j]=from[i][j];
        }
    }
}
// Function PowerIteration (mat – m × m matrix )
// % This function computes u1, u2,...,uk, the first p eigenvectors of mat.
//  const e ← 0.001
//  for i = 1 to p do
//      uˆi ← random
//      uˆi ← uˆi/(||uˆi||)
//      do
//          ui ← uˆi
//          % orthogonalize against previous eigenvectors
//          for j = 1 to i − 1 do
//              ui ← ui − (uTi uj)uj
//          end for
//          uˆi ← Sui
//          uˆi ← uˆi/(||uˆi||)  % normalization
//         while uˆTi ui < 1 − e % halt when direction change is negligible
//          ui ← uˆi
//      end for
// return u1, u2,...,uk
void task5::powerIteration(int p)
{
    int i,j,k;
    Matrix temp(mat.get_row_size(),mat.get_column_size());
    temp.re_size(mat.get_row_size(),mat.get_column_size());
    for(i=0;i<mat.get_row_size();i++)
    {
        vector<double> temp2;
        for(j=0;j<mat.get_column_size();j++)
        {
            temp2.push_back(0);
        }
        temp.get_matrix().push_back(temp2);
    }    
    vector< vector<double> >temp1,temp3;  
    const double E=0.001;
    for(i=0;i<p;i++)
    {
        double y=0,p=0;
        temp1=init(mat.get_row_size(),1);//ui
        temp3=init(mat.get_row_size(),1);//uic
        double nor=norm(temp3);
        temp3=division_scalar(temp3,nor);
        do{
            copy
        (temp3,temp1);
            y=p;
            p=0;
            for(j=0;j<=i-1;j++)
            {
                temp1=matrix_subtract(temp1,multiply_scalar(transpose(temp.get_row_i(j)),matrix_multiply(transpose(temp1),transpose(temp.get_row_i(j)))[0][0]));
            }
            temp3=matrix_multiply(mat.get_matrix(),temp1);
            nor=norm(temp3);
            p=nor;
            temp3=division_scalar(temp3,nor);
        }while(fabs(p-y)>0.0001);
        value.push_back(nor);
        for(k=0;k<temp3.size();k++)
        {
            temp.set_value(i,k,temp3[k][0]);
        }
    }
    vectors=temp;
}
void task5::output_to_csv(const string filename)
{
    ofstream file(filename);

    file<<mat.get_row_size()<<" "<<mat.get_column_size()<<endl;
    for(int i=0;i<vectors.get_row_size();i++)
    {
        for(int j=0;j<vectors.get_column_size();j++)
        {
            file<<vectors.get_matrix()[i][j]<<";";
        }
        file<<"value = "<<value[i]<<endl;
    }
}




