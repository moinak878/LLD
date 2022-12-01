# Singleton Design Pattern

* <strong>single object</strong> is created for a class.
* Example : A logger system
* We want to log everything to the same logger instead of creating multiple instances of it.

## ThreadSafe Singleton
* normal code may behave erratic if we use multiple threads.
* mutex (<strong>mu</strong>tual <strong>ex</strong>clusion)is thus used.