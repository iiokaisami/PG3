#include <Windows.h>

#include "Teacher.h"
#include "Student.h"

int main() {

    Human* human[3];
   
    printf("先生が教室に入ってきた\nまずは挨拶\n\n");
    for (int i = 0; i < 3; ++i)
    {

        if (i < 1)
        {
            human[i] = new Teacher;
        }
        else
        {
            human[i] = new Student;
        }
    }

    printf("\n\n授業が始まった!\n\n");
    for (int i = 0; i < 3; ++i)
    {
        
        if (i < 1)
        {
            human[i]->Lesson();
        }
        else
        {
            human[i]->Lesson();
        }
    }


    printf("\n\n授業が終わった...\n\n");
    for (int i = 0; i < 3; ++i)
    {
        
        delete human[i];
    }



    return 0;
}