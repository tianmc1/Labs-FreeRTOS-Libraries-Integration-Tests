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
 * @file thread_function.h
 * @brief Thread create/wait/Delay function for test application.
 */
#ifndef THREAD_FUNCTION_H
#define THREAD_FUNCTION_H

/**
 * @brief Thread handle data structure definition.
 */
typedef void * ThreadHandle_t;

/**
 * @brief Thread function to be executed in ThreadCreate_t function.
 *
 * @param[in] pParam The pParam parameter passed in ThreadCreate_t function.
 */
typedef void ( * ThreadFunction_t )( void * pParam );

/**
 * @brief Thread create function for test application.
 *
 * @param[in] threadFunc The thread function to be executed in the created thread.
 * @param[in] pParam The pParam parameter passed to the thread function pParam parameter.
 *
 * @return NULL if create thread failed. Otherwise, return the handle of the created thread.
 */
typedef ThreadHandle_t ( * ThreadCreate_t )( ThreadFunction_t threadFunc,
                                             void * pParam );

/**
 * @brief Timed waiting function to wait for the created thread exit.
 *
 * @param[in] threadHandle The handle of the created thread to be waited.
 * @param[in] timeoutMs The timeout value of to wait for the created thread exit.
 *
 * @return 0 if the thread exits within timeoutMs. Other value will be regarded as error.
 */
typedef int ( * ThreadTimedWait_t )( ThreadHandle_t threadHandle,
                                     uint32_t timeoutMs );

/**
 * @brief Delay function to wait for the key generation.
 *
 * @param[in] delayMs Delay in milliseconds.
 */
typedef void (* ThreadDelayFunc_t )( uint32_t delayMs );

#endif /* THREAD_FUNCTION_H */
