# Simple Artnet Node
This is a simple artnet node build on an arduino.

Schematics and parts lists shall be added soon.

## Building
Before building, the build should be configured by setting the target platform in the makefile, and the network information in config.h

This has been tested with the arduino 1.0.6 toolchain installed on Ubuntu and Fedora.

```
dnf install arduino

or

apt-get install arduino
```

To build, run

```
make
```

And can then be uploaded to an arduino with

```
make upload
```