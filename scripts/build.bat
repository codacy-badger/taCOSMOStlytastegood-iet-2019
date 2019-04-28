cd ..
mkdir cmake-build-debug
cd cmake-build-debug
cmake -DCMAKE_BUILD_TYPE=Debug -G "MinGW Makefiles" ..
mingw32-make
cd ..
cd scripts