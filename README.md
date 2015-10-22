# Home-Automation-using-Android-Application
- A complete automated smart home-automation system was setup at the laboratory where I worked as an intern, efficiently controlling all the electrical appliances. -  Detailed information given on my webpage (URL : www.mosamdabhi.in)

What is Home Automation?
->  Home automation involves introducing a degree of computerized or automatic control to certain electrical and electronics system in a building.
->  The Lighting, controlling of electrical appliances in our home,etc I have implemented a simple home automation system which contains a remote mobile host controller and several client module (home appliances, which are connected to the relays through microcontroller).
->  The client modules communicate with host controller(android device) through a wireless device known as WiFly RN-171 which is a Wi-Fi Module connected with Arduino Uno Microcontroller which is capable to connect to the existing Wi-Fi access ports or , as in our case we have created a personal hotspot through which our android smart phone is connected and accordingly communication is done.

COMPONETNS USED:
     -  Arduino Uno 8-bit Microcontroller
     -  WiFly RN-171 Wi-Fi module
     -  Android Smart Phone
     -  12-V Relays
     -  12-V Lead-acid Battery / 12-V Adaptor AC Bulb for testing purpose
     -  LCD for displaying the commands sent

WiFly Wi-Fi Module RN-171:
->  2.4 GHz IEEE Std. 802.11 b/g Wireless LAN Module
->  Supports Infrastructure(Ad-Hoc) and Soft Access Points Networking Mode
->  Complete on-board TCP/IP Networking Stack
->  Operating Voltage : 3.3-V
->  Easily Interfaced with Arduino Uno Microcontroller where it can become an extension of Arduino by fitting itself above the microcontroller
->  Applications Include:
               - Home Automation
               - Remote Equipment Monitoring
               - Industrial Sensors etc
->  Able to connect to the existing Wi-Fi and host a series of Web Server Pages through which communication is possible from any remote place. An internet/web browser is able to connect to the Wi-Fi shield. Once a connection has been established (when the browser sends its HTTP request), the Wi-Fi shield may then send back HTML code for the browser to display as a webpage

Some Points:
->  We used this Wi-Fi module to initially connect to the existing network of “Spire” and send the communication protocols over that router. So communication was done initially using the existing Wi-Fi network. The required actions of controlling the pins of Microcontroller was accomplished using this mode.
->  But, what we wanted was, how this system can work without the existing networks. So I searched for creating it’s own personal hotspot through which it can act as host/server to different devices. Problem was faced here as the hotspot through Ad-Hoc mode which is generally the procedure for creating the hotspot was not working.
->  Another method of using the hardware connection, by connecting the GPIO9 to 3.3-V, it should have created the hotspot, but that also didn’t worked.
->  So after many attempts, it was found out by me that instead of using the Ad-Hoc mode, I could use Soft Access Point Mode, and thus the personal hotspot was created and smart mobile devices were able to connect to it using the IP: 169.254.1.1, Netmask:255.255.0.0 & Port : 2000
->  After that, the app was such created that it should connect to the required IP and Port and thus the communication can be started.

Implementation of App:

About Initial Test App:
•  This first application was designed in Android Studio to:
    1) Send the message which was going to be displayed in
       Serial Monitor of Arduino and also on LCD which was interfaced with it.
    2) Press the toggle button “LED on/off” to toggle the LED kept on pin 13 of
         Arduino and also display the message accordingly on LCD.
•  This was our first step towards automation. Now we just had to keep the relays attached with the output pins of Microcontroller and respective buttons in Application governing different situations of Light on/off etc.













->   A complete automated smart home-automation system was setup at the laboratory where I worked as an intern, efficiently controlling an LED initially.
->   Thereafter, applied it to actual electrical appliances using electrical relays directly in connection with main switch board.
->   WiFi Module WiFly RN-171 was used working on 802.11 b/g protocol of Wireless Networks.
->   Steps which I took for its' successful implementation are as follows:
1.    Arduino-Uno Microcontroller Setup
2.    WiFi Module Setup
3.    Microcontroller-WiFi Interfacing
4.    Creating hotspot from WiFi Module
5.    Communication with Microcontroller through created network
6.    Creating a Web-Server and Android Application with defined IP Address andPort
7.    Testing on LED and AC Bulb for checking reliability of system through Android Application
8.    Setting up relays with Microcontroller for actual Electrical Systems Actuations
9.    Interfacing the voice-based digit recognition for sending commands through voice instead of buttons. (This part is used from my another project of: "Voice Based Digit Recognition")
 ->  Project led under Professor Prasanta Kumar Ghosh at his laboratory SPIRE.



