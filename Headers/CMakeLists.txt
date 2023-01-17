add_library(Core INTERFACE)
target_compile_features(Core INTERFACE cxx_std_23)
target_sources(Core INTERFACE
        FILE_SET HEADERS
        FILES Core/System.h Core/JSON.h Core/Core.h)
target_precompile_headers(Core INTERFACE Core/Core.h)
target_link_libraries(Core INTERFACE Boost::headers Boost::json)
