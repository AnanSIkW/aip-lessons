/*#include <iostream> //Вывести на экран Первую букву имени из символов "*" (звездочка)
#include <cmath>

using namespace std;

int main()
{
std::cout <<"*     *"<< std::endl;
std::cout <<"* * * *"<< std::endl;
std::cout <<"*  *  *"<< std::endl;
std::cout <<"*     *"<< std::endl;
std::cout <<"*     *"<< std::endl;

std::getchar();
std::getchar();
return 0;
}

#include <iostream> //Конус (площадь)
#include <cmath>//>

int main(){
    float l;
    float r;
    float const pi=3.14;
    std::cout <<"Write r:"<< std::endl;
    std::cin >> r;
    std::cout <<"Write l:" << std::endl;
    std::cin >> l;
    std::cout <<"S=" << pi*r*r+pi*r*l<< std::endl;
    std::getchar();
    std::getchar();

}


#include <iostream> //Увеличить 1 число в 2 раза, уменьшить 2 на 3, 3 возвести в квадрат
#include <cmath>//>

int main(){
    int a;
    int b;
    int c;
    std::cout <<"Write a:"<< std::endl;
    std::cin >> a;
    std::cout <<"Write b:"<< std::endl;
    std::cin >> b;
    std::cout <<"Write c:"<< std::endl;
    std::cin >> c;
    std::cout << "Results: "<< a*2+b/3+c*c<<std::endl;

}

#include <iostream> //Вычислите значение выражения 8a
#include <cmath>//>

int main(){
    int a;
    int b;
    int c;
    std::cout <<"Write a: "<< std::endl;
    std::cin >> a;
    std::cout <<"Write b: "<< std::endl;
    std::cin >> b;
    std::cout <<"Results: " << (a+4*b)*(a-3*b)+a*a <<std::endl;
    std::getchar();
    std::getchar();

}
*/
#include <iostream> // Определить наибольшее целое число из 3 значений
int main()
{
    int a, b, c;
    std::cout << "a: ";
    std::cin >> a;
    std::cout << "b: ";
    std::cin >> b;
    std::cout << "c: ";
    std::cin >> c;
    if (b > a) {
            a = b;
        }
        if (c > a) {
            a = c;
        }

        std::cout << "Max: " << a << std::endl;
        return 0;

}
