# Strategy Design Pattern

Strategy is a behavioral design pattern that lets you define a family of algorithms, put each of them into a separate class, and make their objects interchangeable.

https://refactoring.guru/design-patterns/strategy

- there are various ways to do something
- make classes for each of the ways(strategies)
- have a context which has-a strategy and does something based on the strategy

## Example :

- parking spot ( car , bike , etc ) - different strategies for different types of vehicles
- but the context( ParkingSpotManager ) will calculate something based on the strategy selected.
- ParkingSpotManager does not need to be unique. It can just call some func of some strategy sent to it.
