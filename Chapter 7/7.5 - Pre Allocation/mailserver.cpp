#include <iostream>
#include "mailserver.h"
using namespace std;

bool MailServer::RushHour() const
{
    bool rush = true;
    return rush;
}

bool MailServer::MoreMessages() const
{
    bool more = true;
    return more;
}

message &MailServer::GetNewMsg() const
{
    static message msg;
    return msg;
}