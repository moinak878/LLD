# Decorator Design Pattern
- <strong>Structural Design Pattern</strong>
- used to wrap objects in a decorator 
- result is same object 
- can be re-wrapped multiple times

    Example : Pizza -> Mushroom Pizza -> Extra Cheese Pizza


## Pizza Problem - Builder v/s Decorator

- Builder : Separate the construction of a complex object from its representation so that the same construction process can create different representations.

- Decorator : Attach additional responsibilities to an object dynamically. Decorators provide a flexible alternative to subclassing for extending functionality.

- Cheese is not a type of Pizza , thus cheese(pizza) makes no sense
- use builder here to build part by part. 

- There's no need to add toppings to a Pizza after it has been fully constructed. You don't eat half a pizza and then add another topping to it.

- In other words, the Builder Pattern makes it easy to construct an object which is extensible in independent directions at construction time, while the Decorator Pattern lets you add extensions to functionality to an object after construction time. Using the decorator pattern to construct objects is bad because it leaves the object in an inconsistent (or at least incorrect) state until all the required decorators are in place - similar to the JavaBean problem of using setters to specify optional constructor arguments.
