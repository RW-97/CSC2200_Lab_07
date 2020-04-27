//--------------------------------------------------------------------
//
//  Laboratory 7, Programming Exercise 1                  storesim.cpp
//
//  ** SOLUTION: Store simulation program **
//
//--------------------------------------------------------------------

// Simulates the flow of customers through a line in a store.

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

// Use which ever implementation is currently configured.
#if LAB7_TEST1
#   include "QueueLinked.cpp"
#else
#   include "QueueArray.cpp"
#endif

using namespace std;

/*int main ()
{
#if LAB7_TEST1
    QueueLinked<int> custQ;      // Line (queue) of customers containing the
#else
    QueueArray<int> custQ;       // Line (queue) of customers containing the
#endif 				 //   time that each customer arrived and
                                 //   joined the line
    int simLength,               // Length of simulation (minutes)
        minute,                  // Current minute
        timeArrived,             // Time dequeued customer arrived
        waitTime,                // How long dequeued customer waited
        totalServed = 0,         // Total customers served
        totalWait   = 0,         // Total waiting time
        maxWait     = 0,         // Longest wait
        numArrivals = 0;         // Number of new arrivals

    // Seed the random number generator. Equally instructive to run the
    // simulation with the generator seeded and not seeded.
    srand( time(NULL) );

    cout << endl << "Enter the length of time to run the simulator : ";
    cin >> simLength;

    for ( minute = 0 ; minute < simLength ; minute++ )
    {
        // Dequeue the first customer in line (if any). Increment
        // totalServed, add the time that this customer waited to
        // totalWait, and update maxWait if this customer waited
        // longer than any previous customer.

        if ( !custQ.isEmpty() )
        {
           timeArrived = custQ.dequeue();
           totalServed++;
           waitTime = minute-timeArrived;
           totalWait += waitTime;
           if ( waitTime > maxWait )
              maxWait = waitTime;
        }

        // Determine the number of new customers and add them to
        // the line.

        switch ( rand() % 4 )
        {
          case 0 :
          case 3 : numArrivals = 0; break;
          case 1 : numArrivals = 1; break;
          case 2 : numArrivals = 2;
        }
        for ( int j = 0 ; j < numArrivals ; j++ )
            custQ.enqueue(minute);
    }

    // Print out simulation results
    cout << endl;
    cout << "Customers served : " << totalServed << endl;
    cout << "Average wait     : " << setprecision(2)
         << double(totalWait)/totalServed << endl;
    cout << "Longest wait     : " << maxWait << endl;

    return 0;
}*/
