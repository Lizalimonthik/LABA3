#include <iostream>// ñòàíäàðòíûé áèáëèîòå÷íûé çàãîëîâî÷íûé ôàéë äëÿ ðàáîòû ñ ïîòîêàìè ââîäà-âûâîäà

using namespace std;
 
int main()
{
    setlocale(LC_ALL, "russian");
    
    int *a, max, n, s_max;

    cout<< "Ââåäèòå ðàçìåðíîñòü ìàññèâà: ";
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
    cout<<"\n Ìàêñèìàëüíîå ÷èñëî ðàâíî = "<< max<< endl;
    for (int i = 0; i < n; i++)
        if (a[i] > s_max && a[i] != max)  
           s_max = a[i];
    cout<<"\n Âòîðîå ìàêñèìàëüíîå ÷èñëî = "<< s_max<< endl;*/

    delete []a; // îñâîáîæäàåì ïàìÿòü
    return 0;
}
