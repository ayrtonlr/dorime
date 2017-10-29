System description and requirements

    Considering an electronic lock controlled by a computer running a C++ program, users can employ their smartphones to have access to a restricted area (e.g. research laboratories, classrooms, …).

    The word “computer” in this description means both, a “standard computer” (e.g. desktop, notebook), or an embedded system (e.g. Atlys board with Leon3, Raspberry Pi, Arduino, …).

    As shown in the figure, the system has the following components:

        * Smartphone – used to unlock the door (bluetooth connection), and to call someone who is in the room (wi-fi connection).
        * Computer – receives the requests from the smartphone, and takes the proper actions (e.g. unlock the door, send a list of people to the smartphone, …).
        * Electronic lock (maglock) – controlled by the computer.
        * Wi-fi router – used by the smartphone to have access to a webpage.

    The flow of operations is as follows:

        * Using an app in a smartphone, the user chooses between two options: unlock the door (access to the room); or call someone (intercom).
        * In case the user has chosen to “unlock the door”, the request is sent from the smartphone to the computer through a bluetooth connection.
        * If the user is registered in the system, and if the user is allowed to enter the room in that period of the day, the computer unlocks the door, and register the user as “in the room”. Otherwise, the user receives an error message informing the problem (e.g. “User not found”, “Not authorized at this time”, …).
        * In case the user would like to use the “Intercom” facility, the app should start a QR code reader. The smartphone is then used to scan a QR code placed just next to the door (or the user will type a website link), and this will send a request to the computer, through the wi-fi connection. The computer will answer the request, sending to the smartphone the list of people who is in the room, with their contact information. This list will be shown on the smartphone’s screen. The user can choose the most suitable contact option (e.g. SMS, call a phone number, whatsapp, …).
        * When the user exits the room, the app must inform to the system. It can be done automatically, or the user may select an option available in the app.

    The smartphone’s app may be developed in any language.

    The software for the computer must be written in C++.

    There is no need for using a standard computer. A board as, for instance, Atlys/Leon3, or the Raspberry Pi running a C++ program under Linux can be used instead of a standard computer. It might be simpler to use an embedded system board to connect to the electronic lock than with a computer.

    The smartphone must present the following functionalities:

        * A very simple Graphical User Interface (GUI), with two buttons: “Access”; and “Intercom”.
        * A third button can be used by the user to tell the system that he/she is leaving the room.
        * When the “Access” option is chosen:
            * The app should turn the Bluetooth on (in case it was off)
            * The app sends the unlock request to the computer.
            * The app will receive a message from the computer describing the status of the request. Examples of messages to be shown on the smartphone’s screen, include: “Access granted”, “Door unlocked”, “User not found”, “Not authorized at this time”, …
            * After have received the message from the computer, the app must switch the Bluetooth back to off (in case it was off before).
        * When the “Intercom” option is chosen:
            * The app should run the smartphone’s QR code reader, in order to obtain a website link (or allow the user to type a website link).
            * The app will send a request to the computer, in order to receive the list of names and contact information of everyone who is in the room.
            * Other “Intercom” implementations are allowed, but must be authorized by the customer (myself).
       * When the “Exit” option (the third button) is chosen:
            * A request is sent from the app to the computer, telling that the user is leaving the room.

    The computer must present the following functionalities:

        *A registration system, written in C++, to allow the administrator to add, to remove, and to make modifications in the list of people allowed to enter the room. The list must have:
            * The user’s ID.
            * The user’s Name.
            * The user’s contact data (e.g. Phone number)
            * The user’s allowed period (date / time).

        * The registration system should use a data structure (e.g. linked list, …) to manage the users that are in the room.
        * There must be also a file to keep all the users data saved. This file can be as simple as discussed in the classes, or it could be a SQL database, accessed through C++.
        * A module, written in C++, to provide reports regarding the users (e.g. list of users in the room between two dates/times, …).
        * A bluetooth module, written in C++, to establish a connection with the smartphone, in order to receive the requests, and to send the status messages.
        * A module, written in C++, to manage the smartphone requests (e.g. access request, intercom, user leaving the room, …).
        * A module, written in C++, to access the electronic lock. The interface between the electronic lock, and the computer, should be defined by the developer.
        * A module, written in C++, to answer the smartphone requests received through wi-fi. Basically, this module will send to the smartphone a list of people who is in the room, and their contact data. The protocol to be used over wi-fi can be defined by the developer. For instance, the computer may run a web server, and provide a website with the list of people in the room.

    The system may provide other input access methods (e.g. RFID cards), but they are not necessary in this implementation.
    
    The system must be designed for on-line and off-line operation modes. This means that the smartphone should be able to unlock the door, even with no Internet connection (using the Bluetooth interface). The intercom functionality also should work with no Internet connection, through the local network available in the room.
