// demonstrating how to
// avoic recurrent memory
// reallocations of vector

#include <iostream>
#include "mailserver.h"

using namespace std;

int main()
{
    MailServer server;
    vector<message> vm; // emails are stored here

    if (server.RushHour())
        vm.reserve(5000);

    while (server.MoreMessages())
    {
        static int count = 0;

        vm.push_back(server.GetNewMsg());

        count++;
        if (count > 5000)
            break;
    }

    system("pause");
}