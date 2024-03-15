// 2.1
/*
#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
 const float pi = 3.14;
 double R, r, h;
 cout << "Введите значение большего радиуса: "; cin >> R;
 cout << "Введите значение меньшего радиуса: "; cin >> r;
 cout << "Введите значение высоты: "; cin >> h;
 
 if (R >= 0 && r >= 0 && h > 0)
 {
  if (R != r)
  {
   double l = sqrt(pow(h, 2) + pow(R - r, 2));
   double V = (pi * h * (pow(R, 2) + R * r + pow(r, 2))) / 3.;
   double S = pi * (pow(R, 2) + (R + r) * l + pow(r, 2));
   cout << "Объем усеченного конуса: " << V << endl;
   cout << "Площадь поверхности усеченного конуса: " << S << endl;
 
  }
  else if (R == r)
  {
   cout << "Это цилиндр" << endl;
   double V = pi * pow(r, 2) * h;
   double S = (2. * pi * R) * (h + R);
   cout << "Объем цилиндра: " << V << endl;
   cout << "Площадь поверхности цилиндра: " << S << endl;
  }
  else if (r == 0)
  {
   cout << "Конус не является усеченным" << endl;
   double l = sqrt(pow(h, 2) + pow(R, 2));
   double V = (pi * h * (pow(R, 2))) / 3.;
   double S = (pi * R) * (l + R);
   cout << "Объем конуса: " << V << endl;
   cout << "Площадь поверхности конуса: " << S << endl;
  }
  else if (R == 0)
  {
   cout << "Конус не является усеченным" << endl;
   double l = sqrt(pow(h, 2) + pow(r, 2));
   double V = (pi * h * (pow(r, 2))) / 3.;
   double S = (pi * r) * (l + r);
   cout << "Объем конуса: " << V << endl;
   cout << "Площадь поверхности конуса: " << S << endl;
  }
 
 }
 
 else
  cout << "Некорректные данные";
 
 
}
*/
//2.2
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
 
    float x, a, w;
    cout << "Введите данные Х и А" << endl;
    cin >> x >> a;
    if (abs(x)< 1)
    {
        if (abs(x) == 0)
        {
            cout << "ответ-бесконечность" << endl;
        }
        else
        {
            w = a * (log10f(abs(x)));
            cout << w << endl;
        }
    }
    else if (abs(x) >= 1 and (a-(x*x))>=0)
    {
        w = sqrtf(a - (x * x));
        cout << w << endl;
    }
    else {
        cout <<"Ошибка" << endl;
    }
}
*/
//2.3
/*
#include<iostream>
#include<math.h>
using namespace std;
int main()
{

    float x, y, b, z;
    cout << "Введите данные х у b" << endl;
    cin >> x >> y >> b;
    if ((b-x)>=0 and b-y>0)
    {
        z = (logf(b - y)) * (sqrtf(b - x));
        cout << z << endl;
    }
    else
    {
        cout << "Ошибка" << endl;
    }
}
*/
//2.4

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
   
    cout << "Введите число" << endl;
    int N,C,G;
    cin >> N;
    C = N + 9;
    if (N < 1)
    {
        N = 1;
    }
    C = N + 10;
    if (C < 0)
    {
        C = 0;
    }
    for (N; N < C; N = N + 1)
    {
        cout << N << endl;
    }
    return 0;
}

//2.5
/*
#include<iostream>
using namespace std;
int main()
{
   
    float x, y,z;
    x = -4;
    z = 0.5;
    if ((x - 1) != 0)
    {
        for (x; x <= 4;)
        {
            if (x == 0)
            {
                y = 0;
                cout << y << endl;
            }
            else if ((x - 1) == 0)
            {
                cout << "Деление на 0" << endl;
            }
            else
            {
                y = ((x * x) - (2 * x) + 2) / (x - 1);
                cout << y << endl;
            }
            x = x + z;
        }
    }
    else
    {
        cout << "Ошибка" << endl;
    }
}
*/
