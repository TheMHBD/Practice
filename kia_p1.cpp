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

num2 += 2;
cout<<"num2: "<< num2 <<'\n';

// if satement
if(num2>=20){
    cout<<"greater than 20";
}
else if(num2<=10){
    cout<<"smaller than 10";
}
else{
    cout<<"between 10 and 20 \n";
}

switch (num2%2)
{
case 1:
    cout<<"num2 is an odd number\n";
    break;
case 0:
    cout<<"num2 is an even number\n";
    break;
default:
    break;
}

string name2 = "Mohammad";

if (!name2.empty()){
    cout<<"hello "<<name2<<'\n';
    cout<< "your name length: "<<name2.length()<<'\n';
    cout<< "your user name is: "<<name2.append("@gmail.com")<<'\n';
    cout<< "your username last charachter: "<<name2.at(name2.length()-1)<<'\n';


}

for(int i=1;i<=10;i=i+1){
    cout<<"i: "<<i<<'\n';
    if (i==5){
        continue;
    }
}


   return 0;
}

