# Factory Design Pattern

- compile and generate object files
<br/> `g++ -c vehicle.cpp bike.cpp car.cpp`

- Create an archive vehicle_library
<br/> `ar ru vehicle_library.a car.o bike.o`

- compile client and link it with vehicle_library archive
<br/> `g++ -o client client.cpp vehicle_library.a`

- execute client
<br/> `./client`

## References 
https://refactoring.guru/design-patterns/factory-method

