#include "util.hpp"

#include "pb_encode.h"
#include "pb_decode.h"

pb_ostream_t ostream;

std::string Base::getName()
{
    return name_;
}