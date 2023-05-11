#include <iostream>
#include <sstream>
#include <cstdlib>
#include <chrono>
#include <thread>

void enviar_mensaje(const std::string& ip, const std::string& topic, const double& num){
    std::ostringstream ss;
    ss << "mosquitto_pub -h " << ip << " -V mqttv311 -t " << topic << " -m " << num << " -d";
    int status = system(ss.str().c_str());
    if (status != 0) {
        std::cerr << "Error executing mosquitto_pub command." << std::endl;
    }
    std::cout << "Sent message " << num << " to topic 'numbers'." << std::endl;
}

void reset(const std::string& ip, const std::string& topic){
    std::ostringstream ss;
    ss << "mosquitto_pub -h " << ip << " -V mqttv311 -t " << topic << " -m reset -d";
    int status = system(ss.str().c_str());
    if (status != 0) {
        std::cerr << "Error executing mosquitto_pub command." << std::endl;
    }
    std::cout << "Sent reset to topic 'numbers'." << std::endl;
}

void on(const std::string& ip, const std::string& topic){
    std::ostringstream ss;
    ss << "mosquitto_pub -h " << ip << " -V mqttv311 -t " << topic << " -m on -d";
    int status = system(ss.str().c_str());
    if (status != 0) {
        std::cerr << "Error executing mosquitto_pub command." << std::endl;
    }
    std::cout << "Sent reset to topic 'numbers'." << std::endl;
}

void off(const std::string& ip, const std::string& topic){
    std::ostringstream ss;
    ss << "mosquitto_pub -h " << ip << " -V mqttv311 -t " << topic << " -m off -d";
    int status = system(ss.str().c_str());
    if (status != 0) {
        std::cerr << "Error executing mosquitto_pub command." << std::endl;
    }
    std::cout << "Sent reset to topic 'numbers'." << std::endl;
}

int main()
{
    std::string ip = "localhost";
    for (int i = 0; i < 100; i++) {
        enviar_mensaje(ip, "alu4", i);
        enviar_mensaje(ip, "alu5", i);
        enviar_mensaje(ip, "alu6", i);
        // Wait for 1 second before sending the next message
        std::this_thread::sleep_for(std::chrono::seconds(1));
        if(i%2 == 0){
            on(ip, "alu1");
            off(ip, "alu2");
            on(ip, "alu3");
        } else {
            off(ip, "alu1");
            on(ip, "alu2");
            off(ip, "alu3");
        }

        enviar_mensaje(ip, "alu7", i);
        enviar_mensaje(ip, "alu8", i);
        enviar_mensaje(ip, "alu9", i);
    }
    return 0;
}
