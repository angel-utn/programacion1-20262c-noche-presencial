#include <iostream>
#include "rlutil.h"
using namespace std;

int main()
{
    rlutil::setBackgroundColor(rlutil::WHITE);
    rlutil::cls();


    rlutil::setColor(rlutil::WHITE);

    rlutil::locate(10, 5);
    cout << "Hello world!" << endl;

    rlutil::saveDefaultColor();
    rlutil::hidecursor();

    for(int i=0; i<5;i++){

        if(i%2 == 0){
            rlutil::setColor(rlutil::RED);
            rlutil::setBackgroundColor(rlutil::GREEN);
        }
        else{
            rlutil::setColor(rlutil::GREEN);
            rlutil::setBackgroundColor(rlutil::RED);
        }


        rlutil::locate(10, 5);
        cout << " Hola " << endl;

        rlutil::msleep(500);
    }




    rlutil::resetColor();
    rlutil::showcursor();


    int n;
    while(n!= 27){


        n = rlutil::nb_getch();

        rlutil::locate(1, 1);
        cout << "   " << endl;;
        rlutil::locate(1, 1);
        cout << n << endl;;

        rlutil::msleep(500);


    }



    return 0;
}
