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
    const int getRed() {return red;} // Returns the value of red
    const int getBlue() {return blue;} // Returns the value of blue
    const int getGreen() {return green;} // Returns the value of green
    void setRed(int r) {red = r;} // Sets the value of red
    void setBlue(int b) {blue = b;} // Sets the value of blue
    void setGreen(int g) {green = g;} // Sets the value of green

    //Print function to print the values of rgb
    void print()
    {
        cout << "Green: " << green << " ";
        cout << "Blue: " << blue << " ";
        cout << "Red: " << red << " ";
        cout << " \n";
    }

    //Defualt constructor.
    Color()
    {
        red = 0;
        blue = 0;
        green = 0;
    }

    //Paremeterized constructor. Takes in arguments for rgb
    Color(int r, int b, int g)
    {
        red = r;
        blue = b;
        green = g;
    }

    //Partial constructor. Takes in arguments for b and g. Sets r to 40
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

    //object two now using partial constructor

    //object three now using parameterized constructor

    //object four now using default constructor

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