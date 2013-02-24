/// @author Alexander Rykovanov 2013
/// @email rykovanov.as@gmail.com
/// @brief Opc Ua Binary DateTime type.
/// @license GNU LGPL
///
/// Distributed under the GNU LGPL License
/// (See accompanying file LICENSE or copy at 
/// http://www.gnu.org/licenses/lgpl.html)
///

#ifndef __OPC_UA_BINARY_DATE_TIME__H__
#define __OPC_UA_BINARY_DATE_TIME__H__

#include <stdint.h>

namespace OpcUa
{
  namespace Binary
  {

    typedef uint64_t DateTime;

    DateTime CurrentDateTime();

    typedef uint64_t Duration; // Time duration in miliseconds.

  } // Binary
} // OpcUa


#endif // __OPC_UA_BINARY_DATE_TIME__H__

