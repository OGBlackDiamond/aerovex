#define SHAPEABC_H

class ShapeABC {

private:

    struct coordinates {
        int x;
        int y;
        int z;
    } coords;

    struct color {
        int r;
        int g;
        int b;
    } shapeColor;

public:

    ShapeABC();

    coordinates getCoords();

    color getColor();

    void setCoords(int x, int y, int z);

    void setColor(int r, int g, int b);
};