#ifndef _POINT_HPP
#define _POINT_HPP

#include <cmath>

class Point
{
    private:
        int x, y;

    public:
        Point(){x = 0; y = 0;}
        Point(int x, int y){setX(x); setY(y);}

        int getX(){return x;}
        int getY(){return y;}

        void setX(int x){this->x = x;}
        void setY(int y){this->y = y;}

        int distanceTo(Point p)
        {
            return sqrt((x - p.getX()) * (x - p.getX()) + (y - p.getY()) * (y - p.getY()));
        }

};


#endif