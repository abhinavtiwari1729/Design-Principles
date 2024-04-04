#include<iostream>

using namespace std;

class MessageSender{

    public:

    virtual void SendMsg(const string &to , const string &msg) = 0 ;

};
class MailSender : public MessageSender {

    public:
    
    void SendMsg(const string &to , const string &msg) override {

        cout << "sending mail to " << to << ":" << msg << endl;
    }

};


class NotificationService{

    private:
    MessageSender& ms;

    NotificationService(MessageSender &sender) : ms(sender) {}

    void SendNotification(const string & recipient , const string & msg) {
        ms.SendMsg(recipient , msg);
    }

};


// here we changed the dependency of NotificationService class on abstract class instead of concrete class which,
// help in extending functionality of Notifiction service without changing other classes
