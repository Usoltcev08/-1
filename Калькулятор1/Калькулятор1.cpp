// Калькулятор1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream.h>
#include <windows.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
double binpow(double, int);
double koren(double, int);
double fact(int);
double ln(double);
double cos(double);
double sin(double);
double tg(double);
char bufRus[256];
char* Rus(const char* text)
{
    CharToOem(text, bufRus);
    return bufRus;
}
//-----------------------------------------------------------------------------------------------------------------------
int main()
{
    cout << '\t' << '\t' << '\t' << Rus("Инженерный калькулятор\n");
    cout << Rus("Данный калькулятор предназначен для вычисления косинуса, синуса, тангенса,\n");
    cout << Rus("натурального логарифма, факториала введенного числа, а так же для вычисления\n");
    cout << Rus("корня введенной степени данного числа и введенной степени этого числа\n");
    cout << '\n' << '\t' << '\t' << '\t' << Rus("Правила работы с калькулятором:\n");
    cout << Rus("Для вычислений сначала введите символ, отвечающий за операцию, которую вы\n");
    cout << Rus("хотите провести, а затем вводите пару чисел, над которыми будет производится\nоперация\n");
    cout << Rus("Символы, отвечающие за операции над числами:\n");
    cout << Rus("* - произведение\n/ - частное\n+ - сумма\n- - разность\ns - sin\nc - cos\nt - tg\n");
    cout << Rus("l - ln\nf - факториал\nk - корень n-ной степени\nb - число во введенной степени\n");
    cout << Rus("Если вы все внимательно прочли и запомнили нажмите Y для продолжения работы\nс программой. ");
    cout << Rus("Для последующего отображения справки нажмимайте h, для выхода\nиз программы нажимайте E\n");
    char q;
    while (q != 'y')
    {
        cout << Rus("нажмите Y\n");
        cin >> q;
    }
    system("cls");
    double a;
    double b;
    cout << Rus("Введите символ операции\n");
    char z; //symvol, otvechayuschiy za operaciyu () 
    cin >> z;// vvod symvola 
    while (z != 'e')
    {
        switch (z)    //vychislenie
        {
        case '+':
            cout << Rus("Введите первое число\n");
            cin >> a;
            cout << Rus("\nВведите второе число\n");
            cin >> b;
            cout << a << "+" << b << "=" << a + b << Rus("\nВведите следующий знак (e - выход)\n");
            break;
        case '-':
            cout << Rus("Введите первое число\n");
            cin >> a;
            cout << Rus("\nВведите второе число\n");
            cin >> b;
            cout << a << "-" << b << "=" << a - b << Rus("\nВведите следующий знак (e - выход)\n");
            break;
        case '*':
            cout << Rus("Введите первое число\n");
            cin >> a;
            cout << Rus("\nВведите второе число\n");
            cin >> b;
            cout << a << "x" << b << "=" << a * b << Rus("\nВведите следующий знак (e - выход)\n");
            break;
        case '/':
            cout << Rus("Введите первое число\n");
            cin >> a;
            cout << Rus("\nВведите второе число\n");
            cin >> b;
            cout << a << "/" << b << "=" << a / b << Rus("\nВведите следующий знак (e - выход)\n");
            break;
        case 's':
            cout << Rus("Введите угол в градусах (только>0)\n");
            cin >> a;
            if (a < 0)
                cout << Rus("Следуйте инструкции!\n");
            else
                cout << "sin(" << a << ")=" << sin(a) << Rus("\nВведите следующий знак (e - выход)\n");
            break;
        case 'c':
            cout << Rus("Введите угол в градусах (только>0)\n");
            cin >> a;
            if (a < 0)
                cout << Rus("Следуйте инструкции!\n");
            else
                cout << "cos(" << a << ")=" << cos(a) << Rus("\nВведите следующий знак (e - выход)\n");
            break;
        case 't':
            cout << Rus("Введите угол в градусах (только>0)\n");
            cin >> a;
            if (a < 0)
                cout << Rus("Следуйте инструкции!\n");
            else
            {
                if (cos(a) == 0)
                    cout << Rus("Тангенса введенного угла не существует\n");
                else
                    cout << "tg(" << a << ")=" << tg(a) << Rus("\nВведите следующий знак (e - выход)\n");
            }
            break;
        case 'l':
            cout << Rus("Введите число (только>0)\n");
            cin >> a;
            if (a < 0)
                cout << Rus("Следуйте инструкции!\n");
            else
                cout << "ln(" << a << ")=" << ln(a) << Rus("\nВведите следующий знак (e - выход)\n");
            break;
        case 'f':
            cout << Rus("Введите число (только>0 и меньше 170)\n");
            cin >> a;
            if ((a < 0) || (a > 170))
                cout << Rus("Следуйте инструкции!\n");
            else
                cout << a << "!=" << fact(a) << Rus("\nВведите следующий знак (e - выход)\n");
            break;
        case 'k':
            cout << Rus("Введите основание корня\n");
            cin >> a;
            cout << Rus("Введите показатель корня(только целое число не меньше 0)\n");
            cin >> b;
            if (b < 0)
                cout << Rus("Следуйте инструкции!\n");
            else
            {
                cout << Rus("корень из ") << a << " = " << koren(a, b);
                cout << Rus("\nВведите следующий знак (e - выход)\n");
            }
            break;
        case 'b':
            cout << Rus("Введите число\n");
            cin >> a;
            cout << Rus("\nВведите степень\n");
            cin >> b;
            cout << a << "^" << b << "=" << binpow(a, b) << Rus("\nВведите следующий знак (e - выход)\n");
            break;
        default:
            cout << "luchshe by vy posmotreli pravila raboty s programmoy\n";
            return 0;
        }
        cin >> z;
    }
    return 0;
}
//----------------------------------------------------------------------------------------------------------------------
double binpow(double a, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 1)
        return binpow(a, n - 1) * a;
    else {
        double b = binpow(a, n / 2);
        return b * b;
    }
}
//----------------------------------------------------------------------------------------------------------------------
double koren(double chislo, int pokazatel)
{
    double a = 0;
    double y = 0;
    while (a < chislo)
    {
        a = 1;
        y = y + 0.000001;                   //pogreshnost'
        a = binpow(y, pokazatel);
    }
    return y;
}
//----------------------------------------------------------------------------------------------------------------------
double fact(int x)                         //ne bolshe 170
{
    if (x == 1)
        return 1;
    else
        return x * fact(x - 1);
}
//----------------------------------------------------------------------------------------------------------------------
double ln(double x)
{
    double sum = 0.0, f = (x - 1) / (x + 1);
    double i = 1;
    do
    {
        sum += f / i;
        f *= ((x - 1) * (x - 1)) / ((x + 1) * (x + 1));
        i += 2.0;
    } while ((f > 0.000001) || (-f > 0.000001));
    return 2.0 * sum;
}
//----------------------------------------------------------------------------------------------------------------------
double cos(double a)
{
    const double pi = 3.1415926535898;
    if (a >= 90)
    {
        return (-sin(a - 90));
    }
    else
    {
        a = a * pi / 180;
        double stx = a * a;  //{x в степени}
        int fakt = 2;  //{значение факториала в знаменателе}
        double cost = 1;  //{первый элемент в разложении}
        int i = 2;  //{счётчик}
        int z = -1;  //{знак элемента}
        while (stx / fakt > 0.000001) //{до тех пор, пока элемент в разложении не меньше точности}
        {
            cost = cost + z * stx / fakt;
            i += 2;
            stx = stx * a * a;
            fakt = fakt * (i - 1) * i;
            z = z * (-1);  //{смена знака}
        }
        return cost;
    }
}
//----------------------------------------------------------------------------------------------------------------------
double sin(double a)
{
    const double pi = 3.1415926535898;
    if (a >= 90)
    {
        return (cos(a - 90));
    }
    else
    {
        a = a * pi / 180;
        double stx = a * a * a;  //{x в степени}
        int fakt = 6;  //{значение факториала в знаменателе}
        double cost = a;  //{первый элемент в разложении}
        int i = 3;  //{счётчик}
        int z = -1;  //{знак элемента}
        while (stx / fakt > 0.000001) //{до тех пор, пока элемент в разложении не меньше точности}
        {
            cost = cost + z * stx / fakt;
            i += 2;
            stx = stx * a * a;
            fakt = fakt * (i - 1) * i;
            z = z * (-1);  //{смена знака}
        }
        return cost;
    }
}
//----------------------------------------------------------------------------------------------------------------------
double  tg(double a)
{
    double b = cos(a);
    return (sin(a)) / (cos(a));
}
