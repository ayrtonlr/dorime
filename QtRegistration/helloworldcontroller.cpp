#include "helloworldcontroller.h"
#include <QTime>

HelloWorldController::HelloWorldController(QObject* parent)
    : HttpRequestHandler(parent) {
    // empty
}

HelloWorldController::~HelloWorldController() {
    // empty
}

void HelloWorldController::service(HttpRequest &request, HttpResponse &response) {
    //response.write("Oi xuxu");

    response.setHeader("Content-Type", "text/html; charset=ISO-8859-1");
    response.write("<html><body>");

    response.write("The time is ");
    QString now=QTime::currentTime().toString("HH:mm:ss");
    response.write(now.toLatin1());

    response.write("<p>List of names:");
   /*response.write("<table border='1' cellspacing='0'>");
    for(int i=0; i<list.size(); i++) {
            QString number=QString::number(i);
            QString name=list.at(i);
            response.write("<tr><td>");
            response.write(number.toLatin1());
            response.write("</td><td>");
            response.write(name.toLatin1());
            response.write("</td></tr>");
     }
     response.write("</table>");
     */

     response.write("</body></header>",true);

}
