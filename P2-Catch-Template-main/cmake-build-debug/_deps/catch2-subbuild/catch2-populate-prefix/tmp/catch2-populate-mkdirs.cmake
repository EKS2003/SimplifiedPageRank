# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/DSA/Project2FinalVersion/P2-Catch-Template-main/cmake-build-debug/_deps/catch2-src"
  "C:/DSA/Project2FinalVersion/P2-Catch-Template-main/cmake-build-debug/_deps/catch2-build"
  "C:/DSA/Project2FinalVersion/P2-Catch-Template-main/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix"
  "C:/DSA/Project2FinalVersion/P2-Catch-Template-main/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix/tmp"
  "C:/DSA/Project2FinalVersion/P2-Catch-Template-main/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
  "C:/DSA/Project2FinalVersion/P2-Catch-Template-main/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix/src"
  "C:/DSA/Project2FinalVersion/P2-Catch-Template-main/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/DSA/Project2FinalVersion/P2-Catch-Template-main/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "C:/DSA/Project2FinalVersion/P2-Catch-Template-main/cmake-build-debug/_deps/catch2-subbuild/catch2-populate-prefix/src/catch2-populate-stamp${cfgdir}") # cfgdir has leading slash
endif()
