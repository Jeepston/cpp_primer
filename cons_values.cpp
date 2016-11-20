#include <iostream>

int main()
{
    //currVal is the number we are counting; we'll read new values into val
    int currVal = 0, val = 0;

    //read first number and ensure that we have data to process
    if (std::cin >> currVal) {
        int cnt = 1; //store the count for the current value we're processing
        while (std::cin >> val) { //read the remaining numbers
            if (val == currVal)
                ++cnt;
            else {
                
                std::cout << currVal << " occurs " << cnt << " times." << std::endl;
                currVal = val;
                cnt = 1;
            }
        } //while
        std::cout << currVal << " occurs " << cnt << " times." << std::endl;
        return 0;
    }
}
