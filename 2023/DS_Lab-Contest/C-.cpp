#include <iostream>

int main()
{
    int i, j;
    std::cin >> i >> j;

    int maxLen = 0;

    for(int n=i;n<=j;n++)
    {
        int l = 1;
        int num = n;

        while(num != 1)
        {
            if(num%2 == 0)
            {
                num /= 2;
            }
            else
            {
                num = (3*num)+1;
            }

            l++;
        }

        if(l>maxLen)
        {
            maxLen = l;
        }
    }

    std::cout << i << " " << j << " " << maxLen << "\n";
    
    return 0;
}
