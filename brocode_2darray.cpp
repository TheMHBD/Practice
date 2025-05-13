#include<iostream>

using std::cout;
using std::string;

int main(){
   // 2d array
    string cars[2][3] = {{"samad", "peg", "pride"},
                        {"saina", "rd", "camry"}};

/*
cout<<sizeof(cars); // gives us the whole matrix size
cout<<sizeof(cars[0]);// gives us the Row[0] size
cout<<sizeof(cars[0][0]);// gives us the element[0][0] size
*/

int numRows = sizeof(cars)/sizeof(cars[0]);
int numColumns = sizeof(cars[0])/sizeof(cars[0][0]);
//cout<< numRows;
    return 0;
}
   
   
