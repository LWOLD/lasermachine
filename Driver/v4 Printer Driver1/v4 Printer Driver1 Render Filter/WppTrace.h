//
// File Name:
//
//    WppTrace.h
//
// Abstract:
//
//    WPP tracing definitions.
//

#pragma once



#define WPP_CONTROL_GUIDS WPP_DEFINE_CONTROL_GUID(                                       \
                                v4PrinterDriver1RenderFilter,                              \
                                (b1471bd0,710e,4b45,9637,5f82ea12b99c),                  \
                                WPP_DEFINE_BIT(RENDERFILTER_TRACE_ERROR)                 \
                                WPP_DEFINE_BIT(RENDERFILTER_TRACE_WARNING)               \
                                WPP_DEFINE_BIT(RENDERFILTER_TRACE_INFO)                  \
                                WPP_DEFINE_BIT(RENDERFILTER_TRACE_VERBOSE)               \
                                )


