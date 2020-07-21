// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

/*!
 * @file StampedInt64.h
 * This header file contains the declaration of the described types in the IDL file.
 *
 * This file was generated by the tool gen.
 */

#ifndef _STAMPEDINT64_H_
#define _STAMPEDINT64_H_

// TODO Poner en el contexto.
#include "PerformanceHeader.h"

#include <stdint.h>
#include <array>
#include <string>
#include <vector>
#include <map>
#include <bitset>

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#define eProsima_user_DllExport __declspec( dllexport )
#else
#define eProsima_user_DllExport
#endif
#else
#define eProsima_user_DllExport
#endif

#if defined(_WIN32)
#if defined(EPROSIMA_USER_DLL_EXPORT)
#if defined(StampedInt64_SOURCE)
#define StampedInt64_DllAPI __declspec( dllexport )
#else
#define StampedInt64_DllAPI __declspec( dllimport )
#endif // StampedInt64_SOURCE
#else
#define StampedInt64_DllAPI
#endif
#else
#define StampedInt64_DllAPI
#endif // _WIN32

namespace eprosima
{
    namespace fastcdr
    {
        class Cdr;
    }
}


/*!
 * @brief This class represents the structure StampedInt64 defined by the user in the IDL file.
 * @ingroup STAMPEDINT64
 */
class StampedInt64
{
public:

    /*!
     * @brief Default constructor.
     */
    eProsima_user_DllExport StampedInt64();

    /*!
     * @brief Default destructor.
     */
    eProsima_user_DllExport ~StampedInt64();

    /*!
     * @brief Copy constructor.
     * @param x Reference to the object StampedInt64 that will be copied.
     */
    eProsima_user_DllExport StampedInt64(const StampedInt64 &x);

    /*!
     * @brief Move constructor.
     * @param x Reference to the object StampedInt64 that will be copied.
     */
    eProsima_user_DllExport StampedInt64(StampedInt64 &&x);

    /*!
     * @brief Copy assignment.
     * @param x Reference to the object StampedInt64 that will be copied.
     */
    eProsima_user_DllExport StampedInt64& operator=(const StampedInt64 &x);

    /*!
     * @brief Move assignment.
     * @param x Reference to the object StampedInt64 that will be copied.
     */
    eProsima_user_DllExport StampedInt64& operator=(StampedInt64 &&x);

    /*!
     * @brief This function copies the value in member header
     * @param _header New value to be copied in member header
     */
    eProsima_user_DllExport void header(const PerformanceHeader &_header);

    /*!
     * @brief This function moves the value in member header
     * @param _header New value to be moved in member header
     */
    eProsima_user_DllExport void header(PerformanceHeader &&_header);

    /*!
     * @brief This function returns a constant reference to member header
     * @return Constant reference to member header
     */
    eProsima_user_DllExport const PerformanceHeader& header() const;

    /*!
     * @brief This function returns a reference to member header
     * @return Reference to member header
     */
    eProsima_user_DllExport PerformanceHeader& header();
    /*!
     * @brief This function sets a value in member data
     * @param _data New value for member data
     */
    eProsima_user_DllExport void data(int64_t _data);

    /*!
     * @brief This function returns the value of member data
     * @return Value of member data
     */
    eProsima_user_DllExport int64_t data() const;

    /*!
     * @brief This function returns a reference to member data
     * @return Reference to member data
     */
    eProsima_user_DllExport int64_t& data();


    /*!
     * @brief This function returns the maximum serialized size of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function returns the serialized size of a data depending on the buffer alignment.
     * @param data Data which is calculated its serialized size.
     * @param current_alignment Buffer alignment.
     * @return Serialized size.
     */
    eProsima_user_DllExport static size_t getCdrSerializedSize(const StampedInt64& data, size_t current_alignment = 0);


    /*!
     * @brief This function serializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serialize(eprosima::fastcdr::Cdr &cdr) const;

    /*!
     * @brief This function deserializes an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void deserialize(eprosima::fastcdr::Cdr &cdr);



    /*!
     * @brief This function returns the maximum serialized size of the Key of an object
     * depending on the buffer alignment.
     * @param current_alignment Buffer alignment.
     * @return Maximum serialized size.
     */
    eProsima_user_DllExport static size_t getKeyMaxCdrSerializedSize(size_t current_alignment = 0);

    /*!
     * @brief This function tells you if the Key has been defined for this type
     */
    eProsima_user_DllExport static bool isKeyDefined();

    /*!
     * @brief This function serializes the key members of an object using CDR serialization.
     * @param cdr CDR serialization object.
     */
    eProsima_user_DllExport void serializeKey(eprosima::fastcdr::Cdr &cdr) const;

private:
    PerformanceHeader m_header;
    int64_t m_data;
};

#endif // _STAMPEDINT64_H_