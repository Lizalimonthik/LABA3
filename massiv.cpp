#include <iostream>// стандартный библиотечный заголовочный файл для работы с потоками ввода-вывода

using namespace std;
 
int main()
{
    setlocale(LC_ALL, "russian");
    
    int *a, max, n, s_max;

    cout<< "Введите размерность массива: ";
     cin>> n;

    a = new int[n];

    for (int i = 0; i < n; i++)
    {
        a[i] = i+1;
        std::cout<< a[i]<< " ";
    }

    /*max = s_max = a[0];
    for (int i = 0; i < n; i++)
        if (a[i] > max)
            max = a[i];
    cout<<"\n Максимальное число равно = "<< max<< endl;
    for (int i = 0; i < n; i++)
        if (a[i] > s_max && a[i] != max)  
           s_max = a[i];
    cout<<"\n Второе максимальное число = "<< s_max<< endl;*/

    delete []a; // освобождаем память
    return 0;
}