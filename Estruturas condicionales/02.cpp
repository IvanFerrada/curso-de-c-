//  la sentencia switch 

#include <iostream>

using namespace std;


main (){
    int nm1;

    cout<<"ingrese un digito entre 1 y 5";cin>>nm1;

    switch (nm1){
        case 1:cout<<"Es el numero 1"; break;
        case 2:cout<<"Es el numero 2"; break;
        case 3:cout<<"Es el numero 3"; break;
        case 4:cout<<"Es el numero 4"; break;
        case 5:cout<<"Es el numero 5"; break;
        default: cout<<"No estas en el rando del 1 a 5";
    }
   





    return 0;
}