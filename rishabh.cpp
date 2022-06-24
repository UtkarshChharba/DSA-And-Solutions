#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int foo(vector<int> time)
{
    int count = 0;
    unordered_map<int, int> our_map;
    for (int i = 0; i < time.size(); i++)
    {
        int x = time[i] % 60;
        our_map[x]++;
        // cout << x << " "<<our_map[x] << endl;
    }
    // cout<<our_map[30]<<endl;
    // cout << endl;
    //  for (int i = 0; i < time.size(); i++)
    //  {
    //      cout << our_map[time[i]%60] << " ";
    //  }
    // cout << our_map.count(40);
    for (int i = 0; i < time.size(); i++)
    {

            // cout<<our_map.count(30)<<endl;
            if (time[i] == 30 || time[i] == 60)
            {
                if (our_map[60 - time[i]] == 1)
                {
                    continue;
                }

                else if (our_map[60 - time[i]] > 1)
                {
                    count += our_map[60 - time[i]] - 1;
                    // cout << count << endl;
                    our_map[60 - time[i]]--;
                    continue;
                }
            }
            else{
        count += our_map[60 - (time[i] % 60)];
        cout<<count<<endl;
        cout<<60 - (time[i] % 60)<<" "<<our_map[60 - (time[i] % 60)]<<endl;
        our_map[(time[i] % 60)]--;
            }
    }

return count;
}
int main()
{

    vector<int> arr(5);
    for (int i = 0; i < 5; i++)
    {
        int x;
        cin >> x;
        arr[i] = x;
    }

    int count = foo(arr);
    cout << count;
}