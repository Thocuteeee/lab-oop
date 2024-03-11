#include <iostream>
#include <cmath>
#include <string>
#include "rect.h"
using namespace std;
// Một default constructor với giá trị mặc định của len và wid là 10
Rectangle::Rectangle() : length(10) , width(10) {}
// Một constructor nhận 02 đối số nguyên biểu diễn chiều dài và chiều rộng (lớn hơn hoặc bằng 0 và nhỏ hơn hoặc bằng 20)
Rectangle::Rectangle(int len, int wid) : length(len), width(wid)
{
    if(wid <=  0 && len <= 0 && wid >= 20 && len >= 20)
    {
        len = 10;
        wid = 10;
    }
}
// Các phương thức public để thay đổi chiều dài và chiều rộng (các phương thức “set”)
// chieu dai set
void Rectangle::setLength(int len)
{
    if(len <= 0 && len >= 20)
    {
        len = length;
    }
}
// chieu rong set
void Rectangle::setWidth(int wid)
{
    if(wid <= 0 && wid >= 0)
    {
        wid = width;
    }
}
// Các phương thức public để truy xuất chiều dài và chiều rộng (các phương thức“get”).
// chieu dai get
int Rectangle::getLenght() const
{
    return length;
}
// chieu rong get
int Rectangle::getWidth() const
{
    return width;
}
//Các phương thức public để tính và trả về chu vi, đường chéo (số thực double), và diện tích của hình chữ nhật.
// chu vi
double Rectangle::perimeter() 
{
    return  2 * (length + width);
}
// duong cheo
double Rectangle::diagonal() 
{
    return sqrt(length * length + width * width);
}
// dien tich
double Rectangle::area() const
{
    return length * width;
}
// Một phương thức public để xuất hình chữ nhật ra màn hình theo dạng [ dài x rộng]
void Rectangle::draw(char s) 
{
    for (int i = 0;i < width ;i++)
    {
        for (int j = 0;j < length - 2;j++)
        {
            cout<<s<<" ";
        }
        for (int j = 0; j < width - 2; j++) 
        {
            cout<<" ";
        }
        cout<<s<<endl;
        for (int i = 0; i < width; i++) 
        {
        cout<<s;
    }
    cout << endl;
    }
}
// Một phương thức public để xác định một hình chữ nhật có là hình vuông hay không ?
bool Rectangle::isSquare() 
{
    return length == width;
}
// Một phương thức public để vẽ hình chữ nhật ra màn hình theo một ký tự chỉ định (hình chữ nhật đặc).
void Rectangle::display() 
{
    cout<<"["<<length<<"x"<<width<<"]";
}