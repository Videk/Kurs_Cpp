#include <iostream>
#include <string>

using namespace std;

int solution(int N);

int main()
{
    cout << solution(7777);
    return 0;
}

int solution(int N)
{
    int max_gap = 0;
    int curr_gap = 0;
    bool counting = false;
    while(N > 0)
    {
        bool last_bit = N & 1;
        //cout << last_bit;
        N = N >> 1;
        if(last_bit && (!counting))
        {
            counting = true;
            continue;
        }
        if(counting && (!last_bit))
        {
            curr_gap++;
            continue;
        }
        if(last_bit && (curr_gap == 0) && counting)
        {
            // Do nothing here
            continue;
        }
        if(last_bit && (curr_gap > 0) && counting)
        {
            if(curr_gap > max_gap)
            {
                max_gap = curr_gap;
            }
            //counting = false;
            curr_gap = 0;
        }
    }
    return max_gap;
}
