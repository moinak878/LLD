`g++ -c vehicle.cpp bike.cpp car.cpp`

`ar ru vehicle_library.a car.o bike.o`

`g++ -o client client.cpp vehicle_library.a`

`./client`
