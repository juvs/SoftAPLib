/* SofAPLib library by Juvenal Guzman
 */

#include "SofAPLib.h"

/**
 * Constructor.
 */
SofAPLib::SofAPLib()
{
  // be sure not to call anything that requires hardware be initialized here, put those in begin()
}

/**
 * Example method.
 */
void SofAPLib::begin()
{
    // initialize hardware
    Serial.println("called begin");
}

/**
 * Example method.
 */
void SofAPLib::process()
{
    // do something useful
    Serial.println("called process");
    doit();
}

/**
* Example private method
*/
void SofAPLib::doit()
{
    Serial.println("called doit");
}
