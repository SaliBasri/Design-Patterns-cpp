# Design-Patterns-cpp
This guide contains examples on design patterns implemented in C/C++.

**Disclaimer:** The codebase may include examples/implementations from open sources on the Internet.

---

Currently in this repository: 

| Design Pattern    | Date Added |
| -------- | ------- |
| Adapter Design Pattern  | 24.02.2025    |
| Singleton Design Pattern | 24.02.2025     |
| Template Method Design Pattern    | 25.02.2025    |
| Factory Method Design Pattern    |  25.02.2025  |
| Decorator Design Pattern    | 25.02.2025    |
| Composite Design Pattern    | 25.02.2025    |
| Observer Design Pattern    |     |
| Command Design Pattern    |     |

---

## Adapter Design Pattern

This Design Pattern is used when we have unmatching interfaces. For example when the interface available to the client does not match the interface of a legacy system.

* Define the legacy system interface
* Define the adapter interface (this should support the client interface)
* In the adapter call the legacy system interface method. The adapter is responsible for any conversions necessary to make client call compatible with the legacy interface.

## Singleton Design Pattern
Use this design pattern to enforce that a **single** instance of an object is created at any time.

* Make the constructor private
* Override/delete the copy constructor
* Use the static method getInstance to get the instance of the class (create one if no instance exists)
* Use in getInstance to prevent traces that may lead to multiple instantiations.

## Template Method Design Pattern
Use this design pattern when you have predefined algorithm steps, which may be slightly modified by inherited classes.

* Define the template method inside an abstract
* The abstract class may have base operation methods, which are not subject to modification (same as the template method)
* The abstract class may have pure virtual methods that are required to be implemented by all child classes.
* The abstract class may have hook methods with default implementation (usually empty) which may or may not be used by child classes.
* Client code can call the template method of the concrete classes. (note the use of a pointer to the abstract class, where at the actual address a concrete class resides)

## Factory Method Design Pattern
Use this pattern if your object creation is complex or not specified until runtime.

Also this pattern ensures that you can extend client code capabilities without modifying the client code itself. Check the `Factory Method/main.cpp` for reference.

* Define AbstractProduct
* Define AbstractCreators
* Link each creator with the product. Concrete creator creates concrete product
* The client code depends upon the abstractions (dependency injection)

*NOTE:*  Use Factory Method with caution as it may create unnecessary overhead.

## Decorator Design Pattern
Use this pattern in situations when optional features need to be added to concrete objects, such as GUI elements, customizing your food order etc. Using this pattern allows extensibility without modifying the old code.

* Define component interface
* Define concrete (base) component
* Define decorator interface
    * Inherits compoent interface
    * Has pointer to component interface
    * Only argumented constructor allowed with the component as argument.
* Concrete decorators inherit the decorator interface.
* Stack decorators in client code.

## Composite Design Pattern
Use this design pattern when objects or group of objects have similar functions (respond to the same events the same way). 

Examples of these would be move one file across the desktop or drag and select multiple files (create a group) and then move all of them as a group together. Another useful analogy would be when you have a box which can contain items or other boxes.

* Define common functionalities in an abstract object
* Define leaf / simple object
* Define group / complex object
    * This object contains a list of *abstarct objects*
    