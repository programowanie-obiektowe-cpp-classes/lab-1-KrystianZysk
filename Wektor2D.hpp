class Wektor2D
{
    double x = 0.0;
    double y = 0.0;
    public:
    Wektor2D() {}
    ~Wektor2D() {}
    double getX() {return x;}
    double getY() {return y;}
    void setX(double x_) {x = x_;}
    void setY(double y_) {y = y_;}
    Wektor2D(double x_, double y_) {x = x_; y = y_;}
};
Wektor2D operator+(Wektor2D vec1, Wektor2D vec2) {return Wektor2D(vec1.getX() + vec2.getX(), vec1.getY() + vec2.getY());}
double operator*(Wektor2D vec1, Wektor2D vec2) {return (vec1.getX() * vec2.getX()) + (vec1.getY() * vec2.getY());}