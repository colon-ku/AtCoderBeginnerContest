// Link to the Problem
#include <map>
#include <iostream>
using namespace std;

int main()
{
    map<int, int> dic {
        {1, 2},
        {2, 3},
        {3, 4},
        {4, 5},
        {5, 6}
    };

    dic.erase(begin(dic), next(begin(dic), 3));

    for (auto const& [key, value] : dic)
        printf("(%d,%d)\n", key, value);

    return 0;
}