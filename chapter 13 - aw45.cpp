class Circle {
private:
    double radius;

public:
    Circle() {
        radius = 0;
    }

    Circle(double r) {
        radius = r;
    }

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
