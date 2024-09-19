#include <iostream>
#include <chrono>
#include <unistd.h>
using namespace std;

int main() {
    fork();
    cout << "Hello - process_id(pid) = "<< getpid() << endl;

    return 0;
}
