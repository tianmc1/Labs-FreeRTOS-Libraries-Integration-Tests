/*
 * FreeRTOS FreeRTOS LTS Qualification Tests preview
 * Copyright (C) 2022 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

/**
 * @file qualification_test.c
 * @brief Implements the entry function for LTS qualification test.
 */
#include "test_execution_config.h"

#if ( MQTT_TEST_ENABLED == 1 )
    #include "mqtt_test.h"
#endif

#if ( TRANSPORT_INTERFACE_TEST_ENABLED == 1 )
    #include "transport_interface_test.h"
#endif

/*-----------------------------------------------------------*/

void RunQualificationTest( void )
{
    #if ( TRANSPORT_INTERFACE_TEST_ENABLED == 1 )
        RunTransportInterfaceTest();
    #endif

    #if ( MQTT_TEST_ENABLED == 1 )
        RunMqttTest();
    #endif
}

/*-----------------------------------------------------------*/
