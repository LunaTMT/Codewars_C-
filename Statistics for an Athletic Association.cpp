

#include <iostream>
#include <sstream>
#include <vector>
#include <limits>
#include <algorithm>
#include <iomanip>

using namespace std;

class Stat
{
public:
    static string stat(const string &strg);
    static string formatSeconds(const int &seconds);
};

string Stat::stat(const string &str)
{
    istringstream ss(str);
    string token;

    vector<string> times;
    int n = 0;

    while (getline(ss, token, ','))
    {
        times.push_back(token);
        n++;
    }

    vector<int> timesSeconds;
    int maxVal = numeric_limits<int>::min(); // Corrected initialization
    int minVal = numeric_limits<int>::max(); // Corrected initialization
    int total = 0;

    for (const string &str : times)
    {
        istringstream tokenStream(str);
        string hours, minutes, seconds;

        getline(tokenStream, hours, '|');
        getline(tokenStream, minutes, '|');
        getline(tokenStream, seconds, '|');

        int hoursInt = stoi(hours);
        int minutesInt = stoi(minutes);
        int secondsInt = stoi(seconds);

        hoursInt *= 3600;
        minutesInt *= 60;

        int sum = hoursInt + minutesInt + secondsInt;
        timesSeconds.push_back(sum);

        maxVal = max(maxVal, sum);
        minVal = min(minVal, sum);
        total += sum;
    }

    sort(timesSeconds.begin(), timesSeconds.end());

    int range = maxVal - minVal;
    int mean = total / n; // Use n instead of times.size()
    int median;

    if (n % 2 == 1)
    {
        median = timesSeconds[n / 2];
    }
    else
    {
        median = (timesSeconds[n / 2] + timesSeconds[n / 2 - 1]) / 2;
    }

    return "Range: " + Stat::formatSeconds(range) + " Average: " + Stat::formatSeconds(mean) + " Median: " + Stat::formatSeconds(median);
}

string Stat::formatSeconds(const int &seconds)
{
    int hours = seconds / 3600;
    int minutes = (seconds / 60) % 60;
    int secs = seconds % 60;

    ostringstream formattedTime;

    formattedTime << setfill('0') << setw(2) << hours << "|"
                  << setw(2) << minutes << "|"
                  << setw(2) << secs;

    return formattedTime.str();
}



int main() {
    return 0;
}
