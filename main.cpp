#include <Windows.h>

#include "Circle.h"
#include "Rectangle.h"

int main() {

    Shape* shape[2];
   
   
    for (int i = 0; i < 2; ++i)
    {
        if (i < 1)
        {
            shape[i] = new Rectangl;
        }
        else
        {
            shape[i] = new Circle;
        }
    }

    for (int i = 0; i < 2; ++i)
    {        
        if (i < 1)
        {
            shape[i]->Size();
        }
        else
        {
            shape[i]->Size();
        }
    }

    for (int i = 0; i < 2; ++i)
    {
        if (i < 1)
        {
            shape[i]->Draw();
        }
        else
        {
            shape[i]->Draw();
        }

        delete shape[i];
    }


    return 0;
}