# Singleton pattern

### This project created for C++ Bootcamp Training in Mitrais.

### Why we using Singleton:
In software engineering, the **singleton pattern** is a design pattern that restricts the instantiation of a class to one object. This is useful when exactly one object is needed to coordinate actions across the system. The concept is sometimes generalized to systems that operate more efficiently when only one object exists, or that restrict the instantiation to a certain number of objects. The term comes from the mathematical concept of a singleton.

There are some who are critical of the singleton pattern and consider it to be an anti-pattern in that it is frequently used in scenarios where it is not beneficial, introduces unnecessary restrictions in situations where a sole instance of a class is not actually required, and introduces global state into an application.

### Keypoits

1. Ensures that only one instance of the C++ class is instantiated
2. Assures that only one object is created and no more
This class provides a way to access its only object which can be accessed directly without need to instantiate the object of the class
**“Ensure a class only has one instance, and provide a global access point to it.”**

### Singleton UML Diagram

![alt text](https://upload.wikimedia.org/wikipedia/commons/d/dc/Singleton_pattern_uml.png)

### Common Uses of Singleton
1. The abstract factory, builder, and prototype patterns can use Singletons in their implementation.
2. Facade objects are often singletons because only one Facade object is required.
3. State objects are often singletons.
4. Singletons are often preferred to global variables because: they do not pollute the global namespace (or, in languages with namespaces, their containing namespace) with unnecessary variables. And they permit lazy allocation and initialization, whereas global variables in many languages will always consume resources.

In real live, the singleton pattern uses for :

1. Database resource connection
2. User data
3. Log feature 
4. etc

### Imlementation
An implementation of the singleton pattern must:

* ensure that only one instance of the singleton class ever exists; and
* provide global access to that instance.

Typically, this is achieved by:

* declaring all constructors of the class to be private; and
* providing a static method that returns a reference to the instance.
The instance is usually stored as a private static variable; the instance is created when the variable is initialized, at some point before the static method is first called.

### Sources:
* https://en.wikipedia.org/wiki/Singleton_pattern