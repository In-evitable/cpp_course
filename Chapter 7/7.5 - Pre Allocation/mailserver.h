#include <vector>
using namespace std;

struct message
{
    char text[1000];
}; // representation of an email message

class MailServer
{
public:
    bool RushHour() const;
    bool MoreMessages() const;
    message &GetNewMsg() const;
};