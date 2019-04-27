/* Part of Cosmos by OpenGenus Foundation */
#include "radix_sort.hpp"
#include <cmath>

void radix_sort(std::vector<int> &data)
{
    using namespace std;
    vector<int> tmp[10]; //store 0~9;
    int max_data = *(max(std::begin(data), std::end(data)));

    int n = 1;
    while (n <= max_data)
    {
        for (auto v : data)
        {
            int lsd = (v / n) % 10;
            tmp[lsd].emplace_back(v);
        }

        int k = 0;
        for (auto &v: tmp)   //vector
        {
            if (v.size() <= 0)
                continue;

            for (auto num: v)
                data[k++] = num;
            v.clear();
        }
        n *= 10;
    }
}