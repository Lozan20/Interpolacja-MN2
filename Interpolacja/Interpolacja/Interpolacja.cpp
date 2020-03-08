#include <iostream>

double interpolacja(int n, double tab1[], double tab2[], double x) // tab1-x , tab2-y
{
    double war = 0.0;

    for (int i = 0; i < n; i++)
    {
        double p = 1.0;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                p = p * (x - tab1[j]) / (tab1[i] - tab1[j]);
            }
        }
        war = war + tab2[i] * p;
    }
    return war;
}

int main()
{
    double x = 1.0;
    int nodes = 3;
    double tab1[3] = { 0,0.5,1.5 }; //x
    double tab2[3] = { 0,0.707106781,1.224744871 }; //y
    std::cout << interpolacja(nodes, tab1, tab2, x);
}

