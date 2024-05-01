#define TEST_H

class Test {

private:
    struct coord{
        int x;
        int y;
    } coords;

public:
    int x;
    int y;

    Test();

    Test(int, int);

    int getx();

    int gety();

    int add();

    coord getCoords();

    void setCoords(int x, int y);
};