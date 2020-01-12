cd lib/cobre

git pull

cd ../..
mkdir build

cd build
rm -r *
cmake ..
make
./CobreTest
