#include <iostream>
using namespace std;

int main() {
int a = 5, b = 2;
swap(a,b);
cout<<"value of a is: "<<a<<endl;
cout<<"value of b is: "<<b<<endl;
return 0;
}
void swap(int x, int y)
{
    int temp;
    temp = x;
    x= y;
    y = temp;
}

//call by value: create a temporray variable to store the values of x and y as we swap them
