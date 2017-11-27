#include "helloworldcontroller.h"

HelloWorldController::HelloWorldController(QObject* parent)
    : HttpRequestHandler(parent) {
    // empty
}

HelloWorldController::~HelloWorldController() {
    // empty
}

void HelloWorldController::service(HttpRequest &request, HttpResponse &response) {

    response.setHeader("Content-Type", "text/html; charset=ISO-8859-1");
    response.write("<html><body>");


    response.write("<p>List of names:");

    QSqlQuery query("SELECT name,email,phone FROM people WHERE password=1");

    while (query.next()) {
            QString name = query.value(0).toString();
            QString email = query.value(1).toString();
            QString phone = query.value(2).toString();
            //qDebug() << name << email << phone;
            response.write("<table border='1' cellspacing='0'>");
            response.write("<tr><td>");
            response.write(name.toLatin1());
            response.write("</td><td>");
            response.write(email.toLatin1());
            response.write("</td><td>");
            response.write(phone.toLatin1());
            response.write("</td></tr>");
            response.write("</table>");
        }

     response.write("</body></header>",true);

}
