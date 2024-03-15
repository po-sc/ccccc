#include <iostream>
#include <math.h>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;
//#define stringize(a) #a

void swaper(string ** a, int r1, int r2)
{
    string* b = a[r1];
    a[r1] = a[r2];
    a[r2] = b;
}

int main()
{
    system("chcp 1251");
    //Алг. Евклида
    /*
    int a, b;
    cout << "Введите a,b: ";
    cin >> a >> b;

    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    cout << a << endl;

    while ((a != 0) and (b != 0))
    {
        if (a > b)
        {
            a = a % b;
        }
        else
        {
            b = b % a;
        }
    }
    cout << a + b << endl;
    */
    //Решето Эратосфена
    //
    //int n;
    //cin >> n;
    //int *a = new int[n + 1];
    //for (int i = 0; i < n + 1; i++)
    //{
    //    a[i] = i;
    //}
  
    //for (int m = 2; m < n + 1; m++)
    //{
    //    if (a[m] != 0)
    //    {
    //        cout << a[m] << endl;
    //        for (int j = m * m; j < n + 1; j += m)
    //        {
    //            //cout << "______"<< m << "______" << endl;
    //            a[j] = 0;
    //           //for (int x = 0; x != n; x+=1)
    //           //{
    //           //    cout << "***" << a[x] << "***" << endl;
    //           //}
    //        }
    //    }
    //}
    //
    //1.28 (Текст >> Массив символов)
    /*
    string s;
    cout << "Введите текст" << endl;
    cin >> s;

    char  *chars = new char[s.length() + 1];
    s.copy(chars, s.length());
    chars[s.length()] = '\0';

    cout << chars << endl;
    */
    //1.21 (Наибольшее кол-во глассных)
    /*
    ofstream filei("text.txt");
    if (filei.is_open())
    {
        filei << "Башкортостан, Отчизна дорогая," << endl;
        filei << "Ты для нас священная земля." << endl;
        filei << "С Урала солнце всходит, озаряя" << endl;
        filei << "Наши горы, реки и поля." << endl;
        filei << "Славься, наш Башкортостан!" << endl;
        filei << "Судьбой народу ты для счастья дан!" << endl;
        filei << "С народом мы едины — и всегда" << endl;
        filei << "Процветай, Башкортостан!" << endl;
    }
    filei.close();

    string line;
    int а = 0, о=0, у=0, ы=0, э=0, я=0, ё=0, ю=0, и=0, е=0;
    ifstream fileo("text.txt");
    if (fileo.is_open())
    {
        
        while (getline(fileo, line))
        {
            
            for (int i = 0; i < line.size(); i++)
            {
                if (line[i] == 'А' or line[i] == 'а')
                {
                    а += 1;
                }
                if (line[i] == 'О' or line[i] == 'о')
                {
                    о += 1;
                }
                if (line[i] == 'У' or line[i] == 'у')
                {
                    у += 1;
                }
                if (line[i] == 'Ы' or line[i] == 'ы')
                {
                    ы += 1;
                }
                if (line[i] == 'Э' or line[i] == 'э')
                {
                    э += 1;
                }
                if (line[i] == 'Я' or line[i] == 'я')
                {
                    я += 1;
                }
                if (line[i] == 'Ё' or line[i] == 'ё')
                {
                    ё += 1;
                }
                if (line[i] == 'Ю' or line[i] == 'ю')
                {
                    ю += 1;
                }
                if (line[i] == 'И' or line[i] == 'и')
                {
                    и += 1;
                }
                if (line[i] == 'Е' or line[i] == 'е')
                {
                    е += 1;
                }
            }
        }
        cout << а << " / " << у << " / " << о << " / " << ы << " / " << и << " / " << э << " / " << я << " / " << ю << " / " << ё << " / " << е << endl;
        int res[10] = {а, у, о, ы, и, э, я, ю, е, ё};
        
        int max = 0;
        for (int i = 0; i < size(res); i++)
        {
            if (res[i] > max)
            {
                max = res[i];
            }
        }
        
        if (а == max)
        {
            cout << "А ";
        }
        if (у == max)
        {
            cout << "У ";
        }
        if (о == max)
        {
            cout << "О ";
        }
        if (ы == max)
        {
            cout << "Ы ";
        }
        if (и == max)
        {
            cout << "И ";
        }
        if (э == max)
        {
            cout << "Э ";
        }
        if (я == max)
        {
            cout << "Я ";
        }
        if (ю == max)
        {
            cout << "Ю ";
        }
        if (ё == max)
        {
            cout << "Ё ";
        }
        if (е == max)
        {
            cout << "Е ";
        }
        
        cout << "встречается " << max << " раз." << endl;
    }
    fileo.close();
    */
    //2.28 (Сумма цифр числа)
    /*
    string str, ch;
    int num, sum = 0;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (not (isdigit(str[i])))
        {
            cout << "ERROR" << endl;
            return 0;
        }
    }


    for (int i = 0; i < str.size(); i++)
    {
        ch = str[i];
        num = stoi(ch);
        sum += num;
    }
    cout << "Result: " << sum << endl;
    */
    //2.61 (Ввести целочисленную матрицу m*n.)
    /*
    int str, stlb;
    cout << "Введите измерения матрицы str, stlb: ";
    cin >> str >> stlb;
    
    int ** arr = new int * [str];
    for (int y = 0; y < str; y++)
    {
        arr[y] = new int[stlb];
    }
    
    
    cout << "Введите значения матрицы: " << endl;
    for (int y = 0; y < str; y++)
    {
        for (int x = 0; x < stlb; x++)
        {
            //cin >> arr[y][x];
            arr[y][x] = rand() % 15 + 1;
        }
    }
    
    cout << endl;

    for (int y = 0; y < str; y++)
    {
        for (int x = 0; x < stlb; x++)
        {
            cout << arr[y][x] << "\t";
        }
        cout << endl;
    }
    
    cout << endl;
    
    for (int y1 = 0; y1 < str; y1++)
    {
        for (int x1 = 0; x1 < stlb; x1++)
        {
            if (arr[y1][x1] == NULL)
            {
                break;
            }

            cout << arr[y1][x1] << " Строка " << y1+1 << " Столбец " << x1+1 << ": ";
            
            for (int y2 = 0; y2 < str; y2++)
            {
                for (int x2 = 0; x2 < stlb; x2++)
                {
                    if ((x1 == x2) and (y1 == y2))
                    {
                        break;
                    }
                    if ((arr[y1][x1] == arr[y2][x2]) and (arr[y2][x2] != NULL))
                    {
                        cout << "Строка " << y2+1 << " Столбец " << x2+1 << " | ";
                        arr[y2][x2] = NULL;
                    }
                }
            }
            cout << endl;
        }
    }

    int count = 0;
    for (int i = 0; i < str; i++)
    {
        for (int j = 0; j < stlb; j++)
        {
            if (arr[i][j] >= 5 && arr[i][j] <= 9)
            {
                count++;
            }
        }
    }

    cout << "Количество элементов в пределе [5,9]: " << count << endl;
    
    for (int i = 0; i < str; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
    */

    //3.28 (Сортировка файла со списком студентов по второму экзамену)
    
    int stud;
    cout << "Введите количество студентяр: ";
    cin >> stud;
    
    string** arr = new string* [stud];
    for (int y = 0; y < stud; y++)
    {
        arr[y] = new string[7];
    }
    


    for (int y = 0; y < stud; y++)
    {
        for (int x = 0; x < 7; x++)
        {
            switch (x)
            {
            case 0:cout << "ФИО " << y+1 << " студента (Без пробелов пожалуйста): ";break;
            case 1:cout << "Номер (Пусть 5 чисел): ";break;
            case 2:cout << "Оценка за первый экзамен (1 - 5): ";break;
            case 3:cout << "Оценка за второй экзамен (1 - 5): ";break;
            case 4:cout << "Оценка за третий экзамен (1 - 5): ";break;
            case 5:cout << "Оценка за четвертый экзамен (1 - 5): ";break;
            case 6:cout << "Оценка за пятый экзамен (1 - 5): ";break;
            }
            //cout << y << x << " ";
            cin >> arr[y][x];
            int temp = 0;
            string tempstr = arr[y][x];
            if (x > 0)
            {
                temp = stoi(arr[y][x]);
            }
            if ((x == 1) and ((tempstr.length()) < 5))
            {
                cout << "Error";
                return 0;
            }
            if ((x >= 2) and ((temp <= 0) or (temp >= 6)))
            {
                cout << "Error";
                return 0;
            }
            cout << endl;
            
            //cin >> arr[y][x];
            //arr[y][x] = rand() % 15 + 1;
        }

    }
    
    for (int y = 0; y < stud; y++)
    {
        for (int x = 0; x < 7; x++)
        {
            cout << arr[y][x] << " ";
        }
        cout << endl;
    }

    cout << endl;

    //Первоначальная запись в пустой файл
    ofstream output;

    output.open("Student.txt");
    if (output.is_open())
    {
        for (int y = 0; y < stud; y++)
        {
            for (int x = 0; x < 7; x++)
            {
                output << arr[y][x] << " ";
            }
            output << endl;
        }
        cout << "Файл записан!" << endl;
        output.close();
    }
    else
    {
        cout << "Файл не был открыт!" << endl;
    }
    for (int i = 0; i < stud; i++)
    {
        delete[]arr[i];
    }
    delete[]arr;
    
    
    //Чтение этого файла (независимая программа)
    ifstream input;

    input.open("Student.txt");
    if (input.is_open())
    {
        string sc,s;
        int strcount = 0;
        
        ifstream counterinput;
        counterinput.open("Student.txt");
        if (counterinput.is_open())
        {
            while (getline(counterinput, sc))
            {
                strcount += 1;
            }
            cout << "Кол-во студентов (строк): " << strcount << endl;
            counterinput.close();
        }
        else
        {
            return 0;
        }

        
        string** arro = new string * [strcount];
        for (int y = 0; y < strcount; y++)
        {
            arro[y] = new string[7];
        }

        //Запись в массив
        string tempst;
        int i = -1;
        int a = -1;

        while (getline(input, tempst))
        {
            i++;
            a = -1;
            stringstream ss(tempst);
            while (getline(ss, tempst, ' '))
            {
                a++;
                arro[i][a] = tempst;
                //cout << "i = " << i << " a = " << a << " tempst = " << tempst << endl;
            }
            //cout << endl;
        }
        
        //cout << endl;

        cout << "Файл cчитан!" << endl;
        for (int y = 0; y < strcount; y++)
        {
            for (int x = 0; x < 7; x++)
            {
                cout << arro[y][x] << " ";
            }
            cout << endl;
        }
        input.close();
        //Сортировка
        
        for (int r = 0; r < strcount - 1; r++)
        {
            // Поиск наибольшего в первом столбце
            string m = arro[r][3];
            int idx = r;
            for (int i = r; i < strcount; i++)
            {
                int mint = stoi(m);
                int xint = stoi(arro[i][3]);
                if (xint > mint)
                {
                    m = arro[i][3];
                    idx = i;
                }
            }
            swaper(arro, r, idx);
        }
        


        cout << "Файл отсортирован!" << endl;

        for (int y = 0; y < strcount; y++)
        {
            for (int x = 0; x < 7; x++)
            {
                cout << arro[y][x] << " ";
            }
            cout << endl;
        }
        
        //Запись сортированного файла
        
        ofstream output;

        output.open("Student.txt");
        if (output.is_open())
        {
            for (int y = 0; y < strcount; y++)
            {
                for (int x = 0; x < 7; x++)
                {
                    output << arro[y][x] << " ";
                }
                output << endl;
            }
            cout << "Файл записан!";
            output.close();
        }
        else
        {
            cout << "Файл не был открыт!" << endl;
        }


        for (int i = 0; i < strcount; i++)
        {
            delete[]arro[i];
        }
        delete[]arro;

        input.close();
    
    }
    else
    {
        cout << "Файл не был открыт!" << endl;
    }
    
    return 0;
}


