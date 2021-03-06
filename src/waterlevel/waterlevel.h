/*
 * Author: Zion Orent <sorent@ics.com>
 * Copyright (c) 2015 Intel Corporation.
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
 * LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 * OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
 * WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */
#pragma once

#include <mraa/gpio.h>

namespace upm {
  /**
   * @brief C++ API for the Water Level Sensor
   *
   * The Water Level Sensor senses the water level.
   * When the level rises, a ball with a magnet floats up and causes a switch to open.
   * When the level falls, the magnet also falls and the switch closes.
   *
   * @defgroup waterlevel libupm-waterlevel
   * @ingroup gpio waterlevel
   */
  /**
   * @library waterlevel
   * @sensor waterlevel
   * @comname waterlevel
   * @type liquid
   * @man seeed
   * @con gpio
   * 
   * @brief UPM module for the Grove Luminance Sensor
   * 
   * @snippet apds9002.cxx Interesting
   */  class WaterLevel {
  public:
    /**
     * Water Level Constructor
     *
     * @param pin digital pin to use
     */
    WaterLevel(int pin);
    /**
     * Water Level Destructor
     */
    ~WaterLevel();
    /**
     * @return bool  returns whether liquid has gone above sensor
     */
     bool isSubmerged();

  private:
        mraa_gpio_context m_gpio;
	};
}
