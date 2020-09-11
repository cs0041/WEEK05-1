#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < 2; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < a; j++)
            {
                for (int k = 0; k < (a - 1) - j; k++)
                {
                    cout << " ";
                }
                for (int k = 0; k < (j * 2) + 1; k++)
                {
                    cout << "*";
                }
                cout << endl;
            }

        }
        else if (i == 1)
        {
            int c = 0;
            for (int j = a; j > 0; j--)
            {
                for (int k = 0; k < c; k++)
                {
                    cout << " ";
                }
                for (int k = 0; k < (j * 2) - 1; k++)
                {
                    cout << "*";
                }
                c++;
                cout << endl;
            }
        }



    }
    return 0;
}
