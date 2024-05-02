#define TEST_H

class Test {

private:
    struct {
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

    struct getCoords();

    void setCoords(struct coords);
};