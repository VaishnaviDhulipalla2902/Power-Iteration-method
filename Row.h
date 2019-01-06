#ifndef Row_H_
#define Row_H_
#include <vector>
#include <string>   
#include <iostream>
#include <sstream>
using namespace std;

class Row
{
    public:
        string const& operator[](size_t index) const
        {
            return m_data[index];
        }
        size_t size() const
        {
            return m_data.size();
        }
        void readNextRow(istream& str);
        vector<string> get_vector()
        {
            return m_data;
        }
        vector<string> get_vector() const
        {
            return m_data;
        }
        friend istream& operator>>(istream& str, Row& data);
    private:
        vector<string> m_data;
};

#endif