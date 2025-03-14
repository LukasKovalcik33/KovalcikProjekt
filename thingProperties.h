// Code generated by Arduino IoT Cloud, DO NOT EDIT.

#include <ArduinoIoTCloud.h>
#include <Arduino_ConnectionHandler.h>

const char SSID[]     = SECRET_SSID;    // Network SSID (name)
const char PASS[]     = SECRET_OPTIONAL_PASS;    // Network password (use for WPA, or use as key for WEP)

void onMoistureLimitChange();

float humidity;
float temperature;
int moisture;
int moistureLimit;
bool waterPumpOn;

void initProperties(){

  ArduinoCloud.addProperty(humidity, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(temperature, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(moisture, READ, 10 * SECONDS, NULL);
  ArduinoCloud.addProperty(moistureLimit, READWRITE, ON_CHANGE, onMoistureLimitChange, 1);
  ArduinoCloud.addProperty(waterPumpOn, READ, ON_CHANGE, NULL);

}

WiFiConnectionHandler ArduinoIoTPreferredConnection(SSID, PASS);
