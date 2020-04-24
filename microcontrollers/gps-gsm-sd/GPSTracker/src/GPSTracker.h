
//#include <DumskySDClient.h>
#include <DumskyGPSClient.h>
#include <GSMConnect.h>
#include <MQTTClient.h>

class GPSTracker {

public:

    GPSTracker(int gpsScanPeriod);
    void init();
    void readGpsData();
    

private:
    GPSClient gpsClient;
    //Dumsky::SDClient sdClient;

    unsigned long lastGpsScanTime = 0;
    int gpsScanPeriod;

    GpsData prevGpsData;
    unsigned long coordCounter = 0;

    Dumsky::GSMConnect gsmConnect;
    MQTTClient* mqttClient;
};


