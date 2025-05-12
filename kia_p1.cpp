#include <iostream>
#include <ctime>

/*
namespace
*/
// using namespace std;

using std::cout;
using std::string;

namespace first
{
    int x = 1;
}

namespace second
{
    int x = 2;
}

/*
typedef and using
*/

typedef double BIT_32;
using BIT_16 = int;

double surfaceArea(double length, double width);
void minMax(double array[], int size);
int main()
{

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
    const double PI = 3.14; // connot be re-assigned

    /*
    namespace
    */
    int x = 0;
    using namespace second;
    using namespace first;
    cout << "x: " << x << '\n';

    /*
    typedef
    */
    BIT_16 num2 = 12;

    num2 += 2;
    cout << "num2: " << num2 << '\n';

    // if satement
    if (num2 >= 20)
    {
        cout << "greater than 20";
    }
    else if (num2 <= 10)
    {
        cout << "smaller than 10";
    }
    else
    {
        cout << "between 10 and 20 \n";
    }

    switch (num2 % 2)
    {
    case 1:
        cout << "num2 is an odd number\n";
        break;
    case 0:
        cout << "num2 is an even number\n";
        break;
    default:
        break;
    }

    string name2 = "Mohammad";

    if (!name2.empty())
    {
        cout << "hello " << name2 << '\n';
        cout << "your name length: " << name2.length() << '\n';
        cout << "your user name is: " << name2.append("@gmail.com") << '\n';
        cout << "your username last charachter: " << name2.at(name2.length() - 1) << '\n';
    }

    for (int i = 1; i <= 10; i = i + 1)
    {
        cout << "i: " << i << '\n';
        if (i == 5)
        {
            continue;
        }
    }

    srand(time(NULL));
    int randomNumber = rand();
    cout << "randomNumber is: " << randomNumber << '\n';

    // functions
    int legnth = 3.5;
    int width = 4;
    double area = surfaceArea(legnth, width);
    cout << "the area is: " << area << '\n';

    // array
    double numberList[] = {10, 12.5, 15};
    int numListSize = sizeof(numberList) / sizeof(numberList[0]);
    cout << "numListSize is: " << numListSize << '\n';

    for (int i = 0; i < numListSize; i++)
    {
        cout << numberList[i] << '\n';
    }

    // 2d array
    string cars[][3] = {{"samad", "peg", "pride"},
                        {"saina", "rd", "camry"},
                        {"lambo", "maza", "jack"}};

                        
    return 0;
}

double surfaceArea(double length, double width)
{
    double area = length * width;
    return area;
}

void minMax(double array[], int size)
{
    cout << "minmax\n";
}
