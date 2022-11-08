#include <iostream>

using namespace std;

int main()
{
    int passengers;
    int waiting;
    int counter = 0;

    cout << "Insert number of passengers waiting in the bus station: ";
    cin >> passengers;

    if (passengers < 50)
    {
        waiting = 50 - passengers;
        cout << waiting;
    }
    else
    {
        while (passengers > 50)
        {
            passengers -= 50;
        }
        waiting = 50 - passengers;
        cout << waiting;
    }

    return 0;
}
