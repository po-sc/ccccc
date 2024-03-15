//4.1
/*
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {

    string a = "/Users/po_scripty/Documents/xcode script/homework/homewotk 4/homewotk 4/4.1.txt";
    ofstream fout;
    ifstream fin;

    fout.open(a);
    cout << "Введите 10 вещественных чисел в строчку через пробел" << endl;
        string b;
        getline (cin, b);
        fout << b;
    fout.close();
    fin.open(a);
    if (!fin.is_open()) {
        cout << "Ошибка" << endl;
    }
    else {
        float S1, S2 = 0;
        while (fin >> S1)
        {
            S2 = S2 + S1;
        }
        fin.close();
        cout << S2 << endl;
    }
    return 0;
}
*/
//4.5 6.5 8.0 7.3 9.0 6.9 2.3 7.1 8.9 56.7
//117.2

//4.2
/*
#include <iostream>
#include <cmath>
using namespace std;


int F(float a) {
    if (a > 0) { cout << "+" << endl; }
    if (a < 0) { cout << "-" << endl; }
    if (a == 0) { cout << 0 << endl; }
    return 0;
}
int main() {
    float x;
    cout << "Введите число:\n";
        cin >> x;
    F(x);
    return 0;
}
*/
//4.3
/*
 #include <iostream>
 #include <cmath>
 #include <limits>

 using namespace std;

 float S = -1;

 void SA() {
     float a, b;
     cout << "Введите длины двух сторон прямоугольника:\n>";
     cin >> a;
     cout << ">";
     cin >> b;
     while(!cin.good() || a <= 0 || b <= 0) {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "Введены некорректные данные." << endl;
         cout << "Введите длины двух сторон прямоугольника:\n> ";
         cin >> a;
         cout << "> ";
         cin >> b;
     }
     S = a * b;
 }

 void TA() {
     float a, h;
     cout << "Введите длину основания треугольника:\n>";
     cin >> a;
     while(!cin.good() || a <= 0) {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "Введены некорректные данные." << endl;
         cout << "Введите длину основания треугольника:\n>";
         cin >> a;
     }

     cout << "Введите высоту треугольника:\n>";
     cin >> h;
     while(!cin.good() || h <= 0) {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "Введены некорректные данные." << endl;
         cout << "Введите высоту треугольника:\n>";
         cin >> h;
     }
     S = 0.5 * a * h;
 }

 void CA() {
     float r;
     cout << "Введите радиус круга:\n>";
     cin >> r;
     while(!cin.good() || r <= 0) {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "Введены некорректные данные." << endl;
         cout << "Введите радиус круга:\n>";
         cin >> r;
     }
     S = 3.14 * pow(r, 2);
 }

 int main() {
     short int variant;

     cout << "Площадь какой фигуры необходимо вычислить?\n1 - Прямоугольник\n2 - Треугольник\n3 - Круг\n> ";
     cin >> variant;
     while(!cin.good() || variant <= 0 || variant > 3) {
         cin.clear();
         cin.ignore(numeric_limits<streamsize>::max(), '\n');
         cout << "Введите корректный вариант." << endl;
         cin >> variant;
     }

     switch(variant) {
         case 1:
             SA();
             break;
         case 2:
             TA();
             break;
         case 3:
             CA();
             break;
     }
     if(S != -1) {
         cout << "Площадь: " << S;
         return 0;
     }
     cout << "Не удалось вычислить площадь." << endl;
     return 1;

 }

 */

//4.4
/*
#include <iostream>
using namespace std;
int b = 1;
int main()
{
 for (int a = 0; a < 6; a++)
 {
 for (int i = 0; i < 8; i++)
 {
 
 cout << "* ";
 if (i == 7)
 {
 if (b % 2 == 0)
 {
 for (int j = 0; j <= 30; j++)
 {
 cout << "-";
 }
 cout << endl;
 b += 1;
 }
 else
 {
 for (int j = 0; j <= 30; j++)
 {
 cout << "-";
 }
 cout << endl;
 b += 1;
 }
 }
 }
 }
 for (int c = 0; c < 6; c++)
 {
 if (b % 2 == 0)
 {
 for (int j = 0; j <= 46; j++)
 {
 cout << "-";
 }
 cout << endl;
 b += 1;
 }
 else
 {
 for (int j = 0; j <= 46; j++)
 {
 cout <<"-";
 }
 cout << endl;
 b += 1;
 }
 }
}
 */
//4.5
/*
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    for (float y = 2; y > -2; y -= 1 / 8.0)
    {
        for (float x = -7; x < 7; x += 1 / 8.0)
        {
            if (x == 0 and y == 2)
                cout  << "^";
            if (x == 0 and y != 0 and y != 2)
                cout << "|";
            if (x == 0 and y == 0)
                cout << "+";
            if (x > 6.8 and y == 0)
                cout << ">";
            if (y == 0 and x < 6.8)
                cout << "-";
            if (x != 0 and y != 0 and fabs(y - sin(x)) > 1 / 20.0)
                cout << " ";
            if (fabs(y - sin(x)) < 1 / 20.0 && x != 0 && y != 0)
                cout << 0;
        }
        cout << "\n";
    }
    return 0;
}
 */
//4.6
/*
int b = 0, x, y, k, z, t, a, d;
#include <iostream>
using namespace std;
int main()
{
    string S;
    string S1;
    string S2;
    cout << "Введите римское число:" << endl;
    cin >> S;
    S2 = S;
    S += "000";
    S1 = S;

    for (int i = 0; i < S.size(); i++)
    {
        switch (S[i])
        {
        case 48: //0
            k = 0;
            break;
        case 73: //1
            k = 1;
            break;
        case 86: //5
            k = 5;
            break;
        case 88: //10
            k = 10;
            break;
        case 76: // 50
            k = 50;
            break;
        case 67: //100
            k = 100;
            break;
        case 68: //500
            k = 500;
            break;
        case 77: //1000
            k = 1000;
            break;
        }

        switch (S[i + 1])
        {
        case 48: //0
            x = 0;
            break;
        case 73: //1
            x = 1;
            break;
        case 86: //5
            x = 5;
            break;
        case 88: //10
            x = 10;
            break;
        case 76: // 50
            x = 50;
            break;
        case 67: //100
            x = 100;
            break;
        case 68: //500
            x = 500;
            break;
        case 77: //1000
            x = 1000;
            break;
        }

        if (k < x)
        {
            b = (k * (-1));
        }
        else
        {
            b = k;
        }
        a += b;
    }

    for (int i = 0; i < S2.size(); i++)
    {
        switch (S[i])
        {
        case 48: //0
            x = 0;
            break;
        case 73: //1
            x = 1;
            break;
        case 86: //5
            x = 5;
            break;
        case 88: //10
            x = 10;
            break;
        case 76: // 50
            x = 50;
            break;
        case 67: //100
            x = 100;
            break;
        case 68: //500
            x = 500;
            break;
        case 77: //1000
            x = 1000;
            break;
        }

        switch (S[i + 1])
        {
        case 48: //0
            y = 0;
            break;
        case 73: //1
            y = 1;
            break;
        case 86: //5
            y = 5;
            break;
        case 88: //10
            y = 10;
            break;
        case 76: // 50
            y = 50;
            break;
        case 67: //100
            y = 100;
            break;
        case 68: //500
            y = 500;
            break;
        case 77: //1000
            y = 1000;
            break;
        }

        switch (S[i + 2])
        {
        case 48: //0
            z = 0;
            break;
        case 73: //1
            z = 1;
            break;
        case 86: //5
            z = 5;
            break;
        case 88: //10
            z = 10;
            break;
        case 76: // 50
            z = 50;
            break;
        case 67: //100
            z = 100;
            break;
        case 68: //500
            z = 500;
            break;
        case 77: //1000
            z = 1000;
            break;
        }
        switch (S[i + 3])
        {
        case 48: //0
            t = 0;
            break;
        case 73: //1
            t = 1;
            break;
        case 86: //5
            t = 5;
            break;
        case 88: //10
            t = 10;
            break;
        case 76: // 50
            t = 50;
            break;
        case 67: //100
            t = 100;
            break;
        case 68: //500
            t = 500;
            break;
        case 77: //1000
            t = 1000;
            break;
        }

        if ((y - x) == x)
        {
            cout << "Ошибка!" << endl;
            return 0;
        }
        if (((x == z) or (y == t)) and ((x != 10) and (t != 10)) and ((x != 0) and (y != 0)) and (((x == 1) and (y != 1) and (z == 1)) or ((x != 1) and (y == 1) and (z != 1))) and (S2.size() >= 3))
        {
            cout << "Ошибка!" << endl;
            return 0;
        }
        if ((x == y) and (y == z) and (z == t))
        {
            cout << "Ошибка!" << endl;
            return 0;
        }
        if (((a - t) > a) and (S2.size() == 4))
        {
            cout << "Ошибка!" << endl;
            return 0;
        }
        if ((x < z and y < z) or ((x < y) and (x < z)))
        {

            cout << "Ошибка!" << endl;
            return 0;
        }
        if ((x == 1) and (y >= 100))
        {
            cout << "Ошибка!" << endl;
            return 0;
        }
    }
    cout << "Арабское написание числа: " << a << endl;
}
 */

//4.7
/*
#include <iostream>
#include <time.h>
    using namespace std;

    void main() {
        setlocale(0, "");
        int m, i, c, S0, S1;
        cout << "Введите m, i, c" << endl;
        cin >> m >> i >> c;
        S0 = time(0);
        for (int j = 0; j < i; j++) {
            S1 = (m * S0 + j) % c;
            cout << S1 << " ";
            S0 = S1;
        }
    }
 */
//4.8
/*
#include <iostream>
using namespace std;
int main()
{
    double A[3][4] = {
    {5.0, 2.0, 0.0, 10.0},
    {3.0, 5.0, 2.0, 5.0},
    {20.0, 0.0, 0.0, 0.0}
    };
    double B[4][2] = {
    {1.2, 0.5},
    {2.8, 0.4},
    {5.0, 1.0},
    {2.0, 1.5}
    };
    double C[3][2] = {
    {0.0, 0.0},
    {0.0, 0.0},
    {0.0, 0.0}
    };
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    double pr1[3] = { C[0][0] ,C[1][0], C[2][0] };


    double m1 = 0, m2 = 0;
    int n1 = 0, n2 = 0;
    for (int i = 0; i < 3; i++)
    {
        if (m1 < pr1[i])
        {
            m1 = pr1[i];
            n1 = i + 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (m1 > pr1[i])
        {
            m2 = pr1[i];
            n2 = i + 1;
        }
    }

    cout << "Больше всего выручил " << n1 << endl;
    cout << "Меньше всего выручил " << n2 << endl;

    double pr2[3] = { C[0][1],C[1][1],C[2][1] };

    m1 = 0, m2 = 0;
    n1 = 0, n2 = 0;
    for (int i = 0; i < 3; i++)
    {
        if (m1 < pr2[i])
        {
            m1 = pr2[i];
            n1 = i + 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (m1 > pr2[i])
        {
            m2 = pr2[i];
            n2 = i + 1;
        }
    }

    cout << "Больше всего комиссионных выручил " << n1 << endl;
    cout << "Меньше всего комиссионных выручил " << n2 << endl;

    cout << "Всего было заработано: " << C[0][0] + C[0][1] + C[1][0] + C[1][1] + C[2][0] + C[2][1] << endl;
    cout << "Всего было полученно комиссионных: " << C[0][1] + C[1][1] + C[2][1] << endl;


}
 */
//4.9

#include <iostream>
using namespace std;
int t[20];
int S;
int n, m, a, b;

char int_vvod(int in)
{
    char out[] =
    {
    '0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'
    };
    return out[in];
}
void ten_base(int in, int base)
{

    if (in < base)
    {
        cout << int_vvod(in);
        return;
    }
    ten_base(in / base, base);
    cout << int_vvod(in % base);
}

int main()
{

    string s;
    int n, m;

    cout << "Из системы n = ";
    cin >> n;
    if ((n < 2) or (n > 16))
    {
        cout << "еррор";
        return 0;
    }
    char cha[17];
    fill(cha, cha + 17, 0);
    cout << cha;

    cout << "Число... " << endl;
    cin >> s;
    const char* str = s.c_str();

    if (n == 2)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
    }
    if (n == 3)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
    }
    if (n == 4)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
    }
    if (n == 5)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
        cha[4] = { '4' };

    }
    if (n == 6)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
        cha[4] = { '4' };
        cha[5] = { '5' };
    }
    if (n == 7)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
        cha[4] = { '4' };
        cha[5] = { '5' };
        cha[6] = { '6' };
    }
    if (n == 8)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
        cha[4] = { '4' };
        cha[5] = { '5' };
        cha[6] = { '6' };
        cha[7] = { '7' };
    }
    if (n == 9)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
        cha[4] = { '4' };
        cha[5] = { '5' };
        cha[6] = { '6' };
        cha[7] = { '7' };
        cha[8] = { '8' };
    }
    if (n == 10)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
        cha[4] = { '4' };
        cha[5] = { '5' };
        cha[6] = { '6' };
        cha[7] = { '7' };
        cha[8] = { '8' };
        cha[9] = { '9' };
    }
    if (n == 11)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
        cha[4] = { '4' };
        cha[5] = { '5' };
        cha[6] = { '6' };
        cha[7] = { '7' };
        cha[8] = { '8' };
        cha[9] = { '9' };
        cha[10] = { 'A' };
    }
    if (n == 12)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
        cha[4] = { '4' };
        cha[5] = { '5' };
        cha[6] = { '6' };
        cha[7] = { '7' };
        cha[8] = { '8' };
        cha[9] = { '9' };
        cha[10] = { 'A' };
        cha[11] = { 'B' };
    }
    if (n == 13)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
        cha[4] = { '4' };
        cha[5] = { '5' };
        cha[6] = { '6' };
        cha[7] = { '7' };
        cha[8] = { '8' };
        cha[9] = { '9' };
        cha[10] = { 'A' };
        cha[11] = { 'B' };
        cha[12] = { 'C' };
    }
    if (n == 14)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
        cha[4] = { '4' };
        cha[5] = { '5' };
        cha[6] = { '6' };
        cha[7] = { '7' };
        cha[8] = { '8' };
        cha[9] = { '9' };
        cha[10] = { 'A' };
        cha[11] = { 'B' };
        cha[12] = { 'C' };
        cha[13] = { 'D' };
    }
    if (n == 15)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
        cha[4] = { '4' };
        cha[5] = { '5' };
        cha[6] = { '6' };
        cha[7] = { '7' };
        cha[8] = { '8' };
        cha[9] = { '9' };
        cha[10] = { 'A' };
        cha[11] = { 'B' };
        cha[12] = { 'C' };
        cha[13] = { 'D' };
        cha[14] = { 'E' };
    }
    if (n == 16)
    {
        cha[0] = { '0' };
        cha[1] = { '1' };
        cha[2] = { '2' };
        cha[3] = { '3' };
        cha[4] = { '4' };
        cha[5] = { '5' };
        cha[6] = { '6' };
        cha[7] = { '7' };
        cha[8] = { '8' };
        cha[9] = { '9' };
        cha[10] = { 'A' };
        cha[11] = { 'B' };
        cha[12] = { 'C' };
        cha[13] = { 'D' };
        cha[14] = { 'E' };
        cha[15] = { 'F' };
    }
    int y = 0;
    for (int i = 0; i < s.length(); i++)
    {
        y = 0;
        for (int z = 0; z < sizeof(cha) - 1; z++)
        {
            if (str[i] != cha[z])
            {
                y += 1;

                if (y > 15)
                {
                    cout << "Недопустимый символ";
                    return 0;
                }


            }
        }

    }



    long int x = strtol(str, NULL, n);


    cout << "В систему m = ";
    cin >> m;
    if ((m < 2) or (m > 16))
    {
        cout << "еррор";
        return 0;
    }
    ten_base(x, m);
}

