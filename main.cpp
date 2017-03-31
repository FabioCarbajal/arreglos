#include <iostream>

using namespace std;

//int main()
//{
//    int arreglo[4];
//    cin >> arreglo[0];
//    cin >> arreglo[1];
//    cin >> arreglo[2];
//    cin >> arreglo[3];
//
//    int a;
//    int b;
//    b=arreglo[0];
//    arreglo[0]=arreglo[3];
//    arreglo[3]=b;
//
//    a=arreglo[1];
//    arreglo[1]=arreglo[2];
//    arreglo[2]=a;
//
//    cout << arreglo[0] << endl;
//    cout << arreglo[1] << endl;
//    cout << arreglo[2] << endl;
//    cout << arreglo[3] << endl;
//
//    return 0;
//}

int main()
{
    int a;
    int temp;
    int c,i;
    int sum=0;
    int tam;
    cout << "Tamaño del arreglo:" << endl;
    cin >> temp;
    int arreglo[temp];
    for(i=0;i<temp;++i)
    {
        cout << "Ingrese los valores: " << endl;
        cin >> arreglo[i];
        sum+=arreglo[i];
    }
    c=--i;

    for(a=0;a<(temp/2);++a)
        {
        tam=arreglo[a];
        arreglo[a]=arreglo[c];
        arreglo[c]= tam;
        --c;
    }

    cout << "El arreglo es: " << endl;
    for(i=0;i<temp;i++)
        {
        cout << arreglo[i] << endl;
    }

    cout << "La suma es: " << sum << endl;

    return 0;

}
