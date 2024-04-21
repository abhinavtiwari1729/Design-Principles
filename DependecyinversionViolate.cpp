#include <iostream>

using namespace std;
class MailSener {
    
    public:

    void SendMail(const string & to , const string &message) {
        cout << "sending a mail " << to << " : "  << message << endl;
    }

}; 



class NotificationService{

    private:
    MailSener ms;

    public:
    NotificationService(MailSener sender) : ms(sender) {

    }

    void SendNotification(const string & recipient , const string & message) {
        ms.SendMail(recipient , message);
    }

};

// here NotificationService class is dependent on comcrete MailSender class which violates Denpendency Inversion Principle. 
