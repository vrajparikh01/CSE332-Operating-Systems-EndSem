// Vraj Parikh
// AU1940185
#include <iostream>
#include <thread>
using namespace std;
  

void foo(int Z)
{
    for (int i = 0; i < Z; i++) {
        
       printf("%c" , Alpha);
       Alpha++;
    }
}
  

class thread_obj {
public:
    void operator()(int x)
    {
        for (int i = 0; i < x; i++)
    
    }
};

int Num = 0
int Alpha = 65
int lowerAlpha = 97
int main()
{
    printf("%c" , lowerAlpha);
       lowerAlpha++;
  

    thread th1(foo, 3);
     
    thread th2(thread_obj(), 3);
     
    auto f = [](int x) {
        for (int i = 0; i < x; i++)
        Num ++
        printf("%d" , Num);
    };
    thread th3(f, 3);
    th1.join();
    th2.join();
    th3.join();
  
    return 0;
}
