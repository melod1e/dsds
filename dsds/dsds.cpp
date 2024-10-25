#include <iostream>
#include <string>
#include <cctype>

using namespace std;

bool validinvalid(const string& phone) 
{
    if (phone.length() != 10)
    {
        return 0;
    }

    for (char ch : phone)
    {
        if (!isdigit(ch)) 
        {
            return 0;
        }
    }

    return 1;
}

int main()
{

    locale::global(locale(""));
    string phonenumberzv;
   
   /* 
    string str = "123456789";
    int sum = 0;
    for (char ch : str) 
    {
        if (isdigit(ch)) 
        {
            sum += ch - '0';
        }
    }
    cout << "сумма: " << sum << endl;
    */

   /*
    int arr[] = {1, 2, -3, 4, -5};
    int brr = sizeof(arr) / sizeof(arr[0]); 
    int sum = 0;

    for (int i = 0; i < brr; i++)
    {
        if (arr[i] > 0) 
        {
            sum += arr[i];  
        }
    }

    cout << sum << " ишаков" << endl;
    */
   
   /*
   string wtf = "mne len daje pitatsya delat tak, chtob eto rabotalo s ru simvolami";

   for (size_t i = 0; i < wtf.length(); i++) 
   {
       if (i > 0 && wtf[i] == ' ' && isalpha(wtf[i - 1])) 
       {
           wtf[i - 1] = toupper(wtf[i - 1]);  
       }
   }

  
   if (isalpha(wtf[wtf.length() - 1]))
   {
       wtf[wtf.length() - 1] = toupper(wtf[wtf.length() - 1]);
   }

   cout << wtf << endl;
   */

    /*
    int num = 12345;
    int c = 0;

    while (num != 0) 
    {
        int xd = num % 10; 
        // последняя цифра числа
        if (xd % 2 == 0) 
        {   
            c++;
        }
        num /= 10;  
    }

    cout << "всего четных: " << c << endl;
    */

    // последнее задание крайне простенько сделал ибо я не оч умный и оч ленивый

    /*
    cout << "не оч вежливо попрошу вас ввести ваш номер телефона (10 цифр без префикса!!(ибо мне лень)): ";
    cin >> phonenumberzv;

    if (validinvalid(phonenumberzv))
    {
        cout << phonenumberzv << " - крутой номер, правильный, ай субо ай лев ай тигр" << endl;
    }
    else 
    {
        cout << "что из словосочитания ДЕСЯТЬ ЦИФР ((((БЕЗ ПРЕФИКСА!!!!)))) является непонятным? eh? eh? eh?" << endl;
    }
    */

    return 0;
}