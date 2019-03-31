#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

int main(void)
{
    int n;
    vector<string> v;
    map<string, int> map_country;
    string country, restLine, output;

    cin >> n;

    while(n--)
    {
        cin >> country;
        getline(cin, restLine);
        if (map_country[country])
            map_country[country]++;
        else
        {
            map_country[country]++;
            v.push_back(country);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        output= v[i];
        cout <<"" << output <<" " << map_country[output] << endl;
    }
    v.clear();
    return 0;
}