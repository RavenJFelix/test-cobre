cd lib/cobre

git pull

cd ../..
mkdir build

cd build
rm -r *
cmake -DCMAKE_BUILD_TYPE=Debug ..
make
./CobreTest
