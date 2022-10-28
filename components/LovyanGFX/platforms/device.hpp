/*----------------------------------------------------------------------------/
  Lovyan GFX - Graphics library for embedded devices.

Original Source:
 https://github.com/lovyan03/LovyanGFX/

Licence:
 [FreeBSD](https://github.com/lovyan03/LovyanGFX/blob/master/license.txt)

Author:
 [lovyan03](https://twitter.com/lovyan03)

Contributors:
 [ciniml](https://github.com/ciniml)
 [mongonta0716](https://github.com/mongonta0716)
 [tobozo](https://github.com/tobozo)
/----------------------------------------------------------------------------*/
#pragma once

#if defined (ESP_PLATFORM)

 #include <sdkconfig.h>

 #include "esp32/Light_PWM.hpp"
 #include "esp32/Bus_SPI.hpp"
 #include "esp32/Bus_I2C.hpp"

 #if defined (CONFIG_IDF_TARGET_ESP32C3)

  #include "esp32c3/Bus_Parallel8.hpp"

 #elif defined (CONFIG_IDF_TARGET_ESP32S2)

  #include "esp32s2/Bus_Parallel8.hpp"
  #include "esp32s2/Bus_Parallel16.hpp"

 #elif defined (CONFIG_IDF_TARGET_ESP32S3)

  #include "esp32s3/Bus_Parallel8.hpp"
  #include "esp32s3/Bus_Parallel16.hpp"

 #else

  #include "esp32/Bus_Parallel8.hpp"
  #include "esp32/Panel_CVBS.hpp"

 #endif

#elif defined (ESP8266)

#include "esp8266/Bus_SPI.hpp"
#include "esp8266/Bus_I2C.hpp"

#endif

