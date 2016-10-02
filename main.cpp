#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int counter = 1;

    cout << "Number\t\tTimes 2\n";
    cout << "------\t\t-------\n";

    do
    {
        cout << "  " << counter << "\t\t" << counter * 2 << "\n";
        counter++;
    } while ( counter < 44 );

    // FOR loop too

    cout << "\n\n\n";

    for ( counter = 0; counter < 11; counter++)
    {
        cout << "Counter = " << counter << "and squared is: " << counter * counter << endl;
    }

    return 0;
}
