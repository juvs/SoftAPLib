#pragma SPARK_NO_PREPROCESSOR

#include "Particle.h"
#include "softap_http.h"

class SoftAPLib {
public:
    static void getPage(const char* url, ResponseCallback* cb, void* cbArg, Reader* body, Writer* result, void* reserved);
};
