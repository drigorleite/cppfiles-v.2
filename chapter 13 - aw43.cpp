class Circle {
private:
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double getRadius() {
        return radius;
    }

    double getArea() {
        return 3.14159 * radius * radius;
    }
};
