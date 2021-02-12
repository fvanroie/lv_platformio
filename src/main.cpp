/**
  ******************************************************************************
  * @file    main.c
  * @author  Ac6
  * @version V1.0
  * @date    01-December-2013
  * @brief   Default main function.
  ******************************************************************************
*/

#include "winsock2.h"

#include "lvgl.h"
#include "app_hal.h"

#include "debugapi.h"
#include <stdio.h>
#include <iostream>
#include <windows.h>
#include "MQTTClient.h"

#include "MQTTAsync_publish.h"
#include "hasp_mqtt.h"

#include "demo.h"

int WinMain(HINSTANCE hInst, HINSTANCE hPrev, LPSTR lpCmd, int nShow)
{

  MessageBox(NULL, "Hello, Windows!", "Hello", MB_OK);
  printf("hello world 123\n");
  return 0;
}

void setup()
{
  lv_init();

  hal_setup();

  demo_create();

  WinMain(GetModuleHandle(NULL), NULL, NULL, 1);
  //       OutputDebugString("My output string.");
  printf("hello %s\n", "world");
  std::cout << "Hello, world!" << std::endl;

  // LPSTR lpBuff = "Hello Win32 API";
  // DWORD dwSize = 0;
  // WriteConsole(GetStdHandle(STD_OUTPUT_HANDLE), lpBuff, lstrlen(lpBuff), &dwSize, NULL);

  mqtt_test();
  mqtt_start();
  std::cout << "Hellowin for C++";
}

#ifndef ARDUINO_ARCH_STM32F407VGT
int main(void)
{
  setup();
  std::cout << "HSetup OK\n";

  while (1)
  {
    hal_loop();fflush(stdout);
  }
    std::cout << "Hloop OK\n";
}

#else
void loop()
{
  delay(5);
  lv_task_handler();
}

#endif