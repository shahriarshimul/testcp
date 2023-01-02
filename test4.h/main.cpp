//Write a program to print the area and perimeter of a triangle having sides of 3, 4 and 5 units by creating a class named 'Triangle' with a function to print the area and perimeter.


#include<iostream>
using namespace std;

class Triangle
{

      public:
        void printArea(int s1, int s2, int s3)
        {
            double s=(s1+s2+s3)/2.0;
            cout << s <<endl;
            cout << "Perimeter is = " << (s1+s2+s3) <<endl;
        }
};

        int main()
        {
            Triangle t;
            t.printArea(10,4,5);
            return 0;

        };

