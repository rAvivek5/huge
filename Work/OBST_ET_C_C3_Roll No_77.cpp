//Vivek Pundkar
//77
//11910860
#include <bits/stdc++.h>
using namespace std;

long long int getTotalCostOfOptimalBST(int keys[], int freq[], int num_keys)
{
    long long int DP_Table[num_keys][num_keys]{};

    for (int j = 0; j < num_keys; ++j)
    {
        for (int i = j; i >= 0; --i)
        {
            long long int min_total_cost = INT_MAX,
                                    sum_freq = accumulate(freq+i, freq+j+1, 0);

            for (int k = i; k <= j; ++k)
            {
                long long int total_cost = 0,
                                        total_cost_left_subtree = 0,
                                        total_cost_right_subtree = 0;

                if (k > i)
                {
                    total_cost_left_subtree = DP_Table[i][k-1];
                }

                if (k < j)
                {
                    total_cost_right_subtree = DP_Table[k+1][j];
                }

                total_cost = ( total_cost_left_subtree
                                  + total_cost_right_subtree
                                  + sum_freq );

                if (total_cost < min_total_cost)
                    min_total_cost = total_cost;
            }

            DP_Table[i][j] = min_total_cost;
        }
    }

    return DP_Table[0][num_keys-1];
}

int main()
{
    int keys[] = {0, 1, 2, 3, 4, 5, 6};
    int freq[] = {22, 18, 20, 5, 25, 2, 8};
    int num_keys = (sizeof(keys) / sizeof(keys[0]));

    cout<<"Total cost of Optimal BST:"
            <<getTotalCostOfOptimalBST(keys, freq, num_keys)<<endl;

    return 0;
}
