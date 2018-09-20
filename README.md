
# MS5607 Library for Arduino by [**Uravu Labs**](http://www.uravulabs.com/index)


#### About MS5607
- High resolution module
- Low power, 1 μA (standby < 0.15 μA)
- Supply voltage 1.8 to 3.6 V
- Operating range: 10 to 1200 mbar, -40 to +85 °C
- I2C and SPI interface up to 20 MHz

# Content
 Latest Release [![GitHubrelease](https://img.shields.io/badge/release-v1.1-blue.svg)](https://github.com/UravuLabs/MS5607/releases/latest/)
- Installation
  - [Arduino IDE](#arduino-ide)
    - [Using Git repository archive](#using-git-repository-archive)
  - [PlatformIO IDE](#platformio-ide)
    - [Using Git version](#using-git-version)
    - [Using PlatformIO library manager](#using-platformio-library-manager)
- [Documentation](#documentation)
- [Contributing](#contributing)
- [License and credits](#license-and-credits)

# Arduino IDE
#### Using Git repository archive
- Goto repository [MS5607](https://github.com/UravuLabs/MS5607)
- Click on **Clone or Download** link and select **Download ZIP**
- Open Arduino IDE and select **Sketch** ->**Include Library** ->**Add .ZIP library**
- Restart Arduino IDE and Select **File** -> **Examples** -> **MS5607** for demo examples


# PlatformIO IDE
PlatformIO is an open source ecosystem for IoT development with cross platform build system, library manager and full support for Arduino development. It works on the popular host OS: macOS, Windows, Linux 32/64, Linux ARM (like Raspberry Pi, BeagleBone, CubieBoard).

- [What is PlatformIO?](https://docs.platformio.org/en/latest/what-is-platformio.html#)
- [PlatformIO IDE](https://platformio.org/platformio-ide)
- [PlatformIO Core](http://docs.platformio.org/en/latest/core.html?utm_source=github&utm_medium=ms5607) (command line tool)
- [Advanced usage](http://docs.platformio.org/en/latest/platforms/espressif8266.html?utm_source=github&utm_medium=ms5607) - custom settings, Over-the-Air (OTA), staging version
- [Integration with Cloud and Standalone IDEs](http://docs.platformio.org/en/latest/ide.html?utm_source=github&utm_medium=ms5607) - Cloud9, Codeanywhere, Eclipse Che (Codenvy), Atom, CLion, Eclipse, Emacs, NetBeans, Qt Creator, Sublime Text, VIM, Visual Studio, and VSCode
#### Using Git version
- Open **Atom Editor** -> **PlatformIO Home** -> **Libraries** -> **Registry** -> **Install**
- Past link [***https://github.com/UravuLabs/MS5607.git***]()
- Restart Atom Editor and library is ready import in your project

#### Using PlatformIO library manager
-  Open **Atom Editor** -> **PlatformIO Home** -> **Libraries** -> **Registry**
-  Search for MS5607 and click on Install button
-  Restart Atom Editor and library is ready import in your project

# Documentation
- ``` MS5607(void) OR MS5607(short address) : ```

  *Constructor function can take device address as argument if you have connected CBS pin to Low if you have different device address.*
- ``` char begin(void) :```

  *Class member function which reset device and read callibration data from device PROM.*
- ``` char readDigitalValue(void) :```

  *Class member function to read digital values from sensor. Before calling getTemperature() OR getPressure() needs to call this function.*
- ``` float getTemperature(void) :```

  *Class member function return float value of temperature in °C.*
- ``` float getPressure() :```

  *Class member function return float value of pressure in mBar.*
- ``` char setOSR(short OSR_U) :```

  *Class member function to set over sampling ratio (OSR) and select corresponding command for conversion of D1 & D2 with respective conversion delay. Sensor support following OSR -> 256, 512, 1024, 2048, 4096.*
- ``` float getAltitude(void) ```
  *Class member function return float value of height from sea level value*


# Contributing
- If minor bug fixes of code and documentation, please go ahead and submit a pull request.
- Check out the list of issues which are easy to fix.
- Larger changes should generally be discussed by opening an issue first.

# License and Credits

MS5607 library is developed and maintained by the [**Uravu Labs**](http://www.uravulabs.com/index) and licensed under GNU General Public License v2.0.

Arduino IDE is developed and maintained by the Arduino team and it is licensed under GPL.

PlatformIO atom IDE is licensed under Apache 2.0.
