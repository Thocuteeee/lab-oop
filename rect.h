#ifndef RECT_H
#define RECT_H
class Rectangle
{
private:
    int length,width;
public:
    // Một default constructor với giá trị mặc định của len và wid là 10
    Rectangle();
    // Một constructor nhận 02 đối số nguyên biểu diễn chiều dài và chiều rộng (lớn hơn hoặc bằng 0 và nhỏ hơn hoặc bằng 20)
    Rectangle(int len,int wid);
    // Các phương thức public để thay đổi chiều dài và chiều rộng (các phương thức “set”)
    void setLength(int len);
    void setWidth(int wid);
    // Các phương thức public để truy xuất chiều dài và chiều rộng (các phương thức“get”).
    int getLenght() const;
    int getWidth() const;
    //Các phương thức public để tính và trả về chu vi, đường chéo (số thực double), và diện tích của hình chữ nhật.
    // chu vi
    double perimeter();
    // duong cheo
    double diagonal();
    // dien tich
    double area() const;
    //Một phương thức public để xuất hình chữ nhật ra màn hình theo dạng [ dài x rộng].
    void draw(char s);
    // Một phương thức public để xác định một hình chữ nhật có là hình vuông hay không ?
    bool isSquare();
    //Một phương thức public để vẽ hình chữ nhật ra màn hình theo một ký tự chỉ định (hình chữ nhật đặc).
    void display();
};
#endif