// All content Copyright (C) 2018 Genomics plc
#include "io/readfilters/readFilter.hpp"

namespace wecall
{
namespace io
{
    //-----------------------------------------------------------------------------------------

    bool ReadFilter::passesFilter( const Read & theRead ) { return this->passesFilter_impl( theRead ); }

    //-----------------------------------------------------------------------------------------
}
}
