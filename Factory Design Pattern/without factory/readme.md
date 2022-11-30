# Need for Factory Design Pattern

Now if tomorrow Bus is added to the vehicle list
We need to tell client to #include "bus.hpp"
and modify the if else statements according to the new classes

This is not done, client cant be bothered with so many new changes -
the system should be scalable.

The above statement means to recompile vehicle and generate the vehicle library
and recompile the client as well. The client may not like to recompile again and again

### THIS IS WHERE FACTORY DESIGN PATTERN COMES IN

The Factory Design Pattern will create a Factory(for object creation) and
the client will be exposed to the Factory

Factory will take care of all the creation logic.
