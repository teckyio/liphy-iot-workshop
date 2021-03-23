# Building your first IoT Application

## Agenda & Objective

1. Introduction to IoT applications

2. Quick way to build a cross-platform IoT application

3. LiPHY Quick Start Demo 

4. Learn a bit about React & React Native

## Why do we need a native mobile application?

![IoT icons](iot.png)

![IoT with a phone](iot-with-phone.jpg)

![IoT with a pi](iot-with-pi.jpg)

## Common technologies that IoT native applications use

* Bluetooth (Bluetooth/BLE)
* Local Area Network (Wi-Fi, zeroconf)
* Voices (Microphone)
* Videos (Camera)
* Cloud

## Native App vs Cross-platform App

### Native App 

Pros

* Official support of the above common interfaces 
* Access to all available features
* Native performance

Cons

* Write everything twice
* Learn everything twice
* More costly to maintain (?)

### Cross-platform App

Pros

* Write once
* Less time consuming to build a MVP

Cons

* Performance issues
* May have to rewrite some native only modules
* No stable solution yet 

Available Choices

* 😐 PhoneGap (HTML, CSS, JS)
* 👍🏻 Flutter (Dart)
* 👍🏻👍🏻 React Native (React, CSS, JavaScript)

### Status of Cross-platform App

react-native-ble-manager

[![npm downloads](https://img.shields.io/npm/dm/react-native-ble-manager.svg?style=flat)](https://www.npmjs.com/package/react-native-ble-manager)
[![GitHub issues](https://img.shields.io/github/issues/innoveit/react-native-ble-manager.svg?style=flat)](https://github.com/innoveit/react-native-ble-manager/issues)

react-native-ble-plx

[![npm downloads](https://img.shields.io/npm/dm/react-native-ble-plx.svg?style=flat)](https://www.npmjs.com/package/react-native-ble-plx)
[![GitHub issues](https://img.shields.io/github/issues/Polidea/react-native-ble-plx.svg?style=flat)](https://github.com/Polidea/react-native-ble-plx/issues)

flutter_blue

[![GitHub issues](https://img.shields.io/github/issues/pauldemarco/flutter_blue?style=flat)](https://github.com/pauldemarco/flutter_blue/issues)

flutter_reactive_ble

[![GitHub issues](https://img.shields.io/github/issues/PhilipsHue/flutter_reactive_ble?style=flat)](https://github.com/PhilipsHue/flutter_reactive_ble/issues)
