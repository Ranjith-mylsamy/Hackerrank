#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
 class Rectangle
 {
     public:
     int rect_width;
     int rect_height;
     void display()
     {
         cout<<rect_width<<" "<<rect_height<<"\n";
     }
 };
 class RectangleArea : public Rectangle
 {
     public:
     int area;
     void read_input()
     {
         cin>>rect_width;
         cin>>rect_height;
     }
     void display()
     {
         area=rect_width*rect_height;
         cout<<area<<"\n";
     }
 };

int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}