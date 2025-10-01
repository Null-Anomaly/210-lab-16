/*Comsc 210 | Lab 14 | Lawrence Bryant
IDE used: Visual Studio Code*/

#include <iostream>
#include <iomanip>
using namespace std;

//The class for Color including Getters and setters for each rgb.
class Color
{
    //Public Getters, Setters, and print
    public:
    int getRed() {return red;}
    int getBlue() {return blue;}
    int getGreen() {return green;}
    void setRed(int r) {red = r;}
    void setBlue(int b) {blue = b;}
    void setGreen(int g) {green = g;}
    void print()
    {
        cout << "Green: " << green << " ";
        cout << "Blue: " << blue << " ";
        cout << "Red: " << red << " ";
        cout << " \n";
    }

    //Defualt constructor
    Color()
    {
        red = 0;
        blue = 0;
        green = 0;
    }

    //Paremeterized constructor
    Color(int r, int b, int g)
    {
        red = r;
        blue = b;
        green = g;
    }

    //Partial constructor
    Color(int b, int g)
    {
        red = 40;
        blue = b;
        green = g;
    }


    //Private values of red, blue, and green
    private:
    int green;
    int red;
    int blue;

};

//Program main
int main()
{
    Color one;//using default constructor
    Color two(100, 150); //using partial constructor
    Color three(30, 10, 233); //using parameterized constructor
    Color four;//using default constructor
    Color five(43,193); //using partial constructor

    //Object one
    one.setBlue(10);
    one.setGreen(29);
    one.setRed(199);

    //object two
    two.setBlue(200);
    two.setGreen(119);
    two.setRed(24);

    //object three
    three.setBlue(43);
    three.setGreen(189);
    three.setRed(203);

    //object four
    four.setBlue(255);
    four.setGreen(249);
    four.setRed(255);

    //object five
    five.setBlue(245);
    five.setGreen(198);
    five.setRed(74);

    //print statements
    one.print();
    two.print();
    three.print();
    four.print();
    five.print();

    return 0;
}