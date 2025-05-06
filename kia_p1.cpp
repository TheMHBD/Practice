#include<iostream>


/*
namespace
*/
// using namespace std;

using std::cout;
using std::string;

namespace first{
    int x = 1;
}

namespace second{
    int x=2;
}

/*
typedef and using
*/

typedef double BIT_32;
using BIT_16 = int;



int main(){


    // commment
    /*
    this is a
    multi line comment
    */

    /*
    variables
    */
    int num = 0;
    double gpa = 12.5;
    char cuurency = 'A';
    string name = "ahmed";
    cout << name << '\n';

    /*
    const (read only variables)
    */
   const double PI = 3.14; //connot be re-assigned

   /*
   namespace
   */ 
   int x = 0;
   using namespace second;
   using namespace first;
   cout<< "x: "<< x<<'\n';

/*
typedef
*/
BIT_16 num2 = 12;
cout<<"num2: "<< num2 <<'\n';

   return 0;
}