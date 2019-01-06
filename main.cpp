#include<iostream>
#include <vector>
#include <string>
#include "task5.h"
#include "Matrix.h"
using namespace std;
int main()
{
    task5 task("input.csv");
    task.powerIteration(5);
    task.output_to_csv("output.csv");
}