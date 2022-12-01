#Factory Design Pattern

* compile and generate object files 
`g++ -c vehicle.cpp bike.cpp car.cpp`

* Create an archive vehicle_library  
`ar ru vehicle_library.a car.o bike.o`

* compile client and link it with vehicle_library archive 
`g++ -o client client.cpp vehicle_library.a`

* execute client 
`./client`
