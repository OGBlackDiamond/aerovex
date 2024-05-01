#define SHAPEABC_H

class ShapeABC {

public:

    ShapeABC();

    coordinates getCoords();

private:

    struct coordinates{
        int x;
        int y;
        int z;
    } coords;



}