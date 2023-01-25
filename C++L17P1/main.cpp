//
//  main.cpp
//  C++L17P1
//
//  Created by Tadeusz Potoniec on 25/01/2023.
//  Based on https://www.youtube.com/watch?v=ErOzmh3BiXU&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo

#include <iostream>
#include <cmath>

using namespace std;

float x_1, y_1, x_2, y_2, d;

int main()
{
    cout<<"To calculate the counter-rectangle, first give the coordinates of the two points the perpendiculars. Separate the numbers with a space or enter."<<endl;
    cout << "A (x1, y1) = " << endl;
    cin>>x_1>>y_1;
    cout << "B (x2, y2) = " << endl;
    cin>>x_2>>y_2;

    d = sqrt(pow(x_2-x_1,2)+pow(y_2-y_1,2));
    cout<<d<<endl;

    return 0;
}
