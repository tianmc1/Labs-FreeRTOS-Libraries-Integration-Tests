/*
 * Copyright (C) 2018 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
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
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */

/**
 * @file core_test_pkcs11_config.h
 * @brief Port-specific variables for PKCS11 tests. 
 */
#ifndef _AWS_TEST_PKCS11_CONFIG_H_
#define _AWS_TEST_PKCS11_CONFIG_H_

/**
 * @brief The index of the slot that should be used to open sessions for PKCS #11 tests.
 */
#define PKCS11_TEST_SLOT_NUMBER                 ( 0 )  /* FIXME. */

/*
 * @brief Set to 1 if RSA private keys are supported by the platform.  0 if not.
 */
#define PKCS11_TEST_RSA_KEY_SUPPORT             ( 1 )  /* FIXME. */

/*
 * @brief Set to 1 if elliptic curve private keys are supported by the platform.  0 if not.
 */
#define PKCS11_TEST_EC_KEY_SUPPORT              ( 1 )  /* FIXME. */

/*
 * @brief Set to 1 if importing device private key via C_CreateObject is supported.  0 if not.
 */
#define PKCS11_TEST_IMPORT_PRIVATE_KEY_SUPPORT       ( 0 )  /* FIXME. */

/*
 * @brief Set to 1 if generating a device private-public key pair via C_GenerateKeyPair. 0 if not.
 */
#define PKCS11_TEST_GENERATE_KEYPAIR_SUPPORT    ( 0 )  /* FIXME. */

#define PKCS11_TEST_PREPROVISIONED_SUPPORT      ( 1 )

/**
 * @brief The PKCS #11 label for device private key for test.
 *
 * For devices with on-chip storage, this should match the non-test label.
 * For devices with secure elements or hardware limitations, this may be defined
 * to a different label to preserve AWS IoT credentials for other test suites.
 */
#define PKCS11_TEST_LABEL_DEVICE_PRIVATE_KEY_FOR_TLS       pkcs11configLABEL_DEVICE_PRIVATE_KEY_FOR_TLS

/**
 * @brief The PKCS #11 label for device public key.
 *
 * For devices with on-chip storage, this should match the non-test label.
 * For devices with secure elements or hardware limitations, this may be defined
 * to a different label to preserve AWS IoT credentials for other test suites.
 */
#define PKCS11_TEST_LABEL_DEVICE_PUBLIC_KEY_FOR_TLS        pkcs11configLABEL_DEVICE_PUBLIC_KEY_FOR_TLS

/**
 * @brief The PKCS #11 label for the device certificate.
 *
 * For devices with on-chip storage, this should match the non-test label.
 * For devices with secure elements or hardware limitations, this may be defined
 * to a different label to preserve AWS IoT credentials for other test suites.
 */
#define PKCS11_TEST_LABEL_DEVICE_CERTIFICATE_FOR_TLS       pkcs11configLABEL_DEVICE_CERTIFICATE_FOR_TLS

/**
 * @brief The PKCS #11 label for the object to be used for code verification.
 *
 * Used by over-the-air update code to verify an incoming signed image.
 *
 * For devices with on-chip storage, this should match the non-test label.
 * For devices with secure elements or hardware limitations, this may be defined
 * to a different label to preserve AWS IoT credentials for other test suites.
 */
#define PKCS11_TEST_LABEL_CODE_VERIFICATION_KEY            pkcs11configLABEL_CODE_VERIFICATION_KEY

/**
 * @brief The PKCS #11 label for Just-In-Time-Provisioning.
 *
 * The certificate corresponding to the issuer of the device certificate
 * (pkcs11configLABEL_DEVICE_CERTIFICATE_FOR_TLS) when using the JITR or
 * JITP flow.
 *
 * For devices with on-chip storage, this should match the non-test label.
 * For devices with secure elements or hardware limitations, this may be defined
 * to a different label to preserve AWS IoT credentials for other test suites.
 */
#define PKCS11_TEST_LABEL_JITP_CERTIFICATE                 pkcs11configLABEL_JITP_CERTIFICATE

/**
 * @brief The PKCS #11 label for the AWS Trusted Root Certificate.
 *
 * @see aws_default_root_certificates.h
 */
#define PKCS11_TEST_LABEL_ROOT_CERTIFICATE                 pkcs11configLABEL_ROOT_CERTIFICATE


#endif /* _AWS_TEST_PKCS11_CONFIG_H_ */
