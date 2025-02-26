# Design-Patterns-cpp
This guide contains examples on design patterns implemented in C/C++.

**Disclaimer:** The codebase may include examples/implementations from open sources on the Internet.

---

Currently in this repository: 

| Design Pattern    | Date Added |
| -------- | ------- |
| [Adapter Design Pattern](#1)  | 24.02.2025    |
| [Singleton Design Pattern](#2)| 24.02.2025     |
| [Template Method Design Pattern](#3)    | 25.02.2025    |
| [Factory Method Design Pattern](#4)    |  25.02.2025  |
| [Decorator Design Pattern](#5)    | 25.02.2025    |
| [Composite Design Pattern](#6)    | 25.02.2025    |
| [Observer Design Pattern](#7)    |  26.02.2025   |
| [Command Design Pattern](#8)    | 26.02.2025    |

---

## Adapter Design Pattern <a id="1"></a>

This Design Pattern is used when we have unmatching interfaces. For example when the interface available to the client does not match the interface of a legacy system.

* Define the legacy system interface
* Define the adapter interface (this should support the client interface)
* In the adapter call the legacy system interface method. The adapter is responsible for any conversions necessary to make client call compatible with the legacy interface.

## Singleton Design Pattern <a id="2"></a>
Use this design pattern to enforce that a **single** instance of an object is created at any time.

* Make the constructor private
* Override/delete the copy constructor
* Use the static method getInstance to get the instance of the class (create one if no instance exists)
* Use in getInstance to prevent traces that may lead to multiple instantiations.

## Template Method Design Pattern <a id="3"></a>
Use this design pattern when you have predefined algorithm steps, which may be slightly modified by inherited classes.

* Define the template method inside an abstract
* The abstract class may have base operation methods, which are not subject to modification (same as the template method)
* The abstract class may have pure virtual methods that are required to be implemented by all child classes.
* The abstract class may have hook methods with default implementation (usually empty) which may or may not be used by child classes.
* Client code can call the template method of the concrete classes. (note the use of a pointer to the abstract class, where at the actual address a concrete class resides)

## Factory Method Design Pattern <a id="4"></a>
Use this pattern if your object creation is complex or not specified until runtime.

Also this pattern ensures that you can extend client code capabilities without modifying the client code itself. Check the `Factory Method/main.cpp` for reference.

* Define AbstractProduct
* Define AbstractCreators
* Link each creator with the product. Concrete creator creates concrete product
* The client code depends upon the abstractions (dependency injection)

*NOTE:*  Use Factory Method with caution as it may create unnecessary overhead.

## Decorator Design Pattern <a id="5"></a>
Use this pattern in situations when optional features need to be added to concrete objects, such as GUI elements, customizing your food order etc. Using this pattern allows extensibility without modifying the old code.

* Define component interface
* Define concrete (base) component
* Define decorator interface
    * Inherits compoent interface
    * Has pointer to component interface
    * Only argumented constructor allowed with the component as argument.
* Concrete decorators inherit the decorator interface.
* Stack decorators in client code.

## Composite Design Pattern <a id="6"></a>
Use this design pattern when objects or group of objects have similar functions (respond to the same events the same way). 

Examples of these would be move one file across the desktop or drag and select multiple files (create a group) and then move all of them as a group together. Another useful analogy would be when you have a box which can contain items or other boxes.

* Define common functionalities in an abstract object
* Define leaf / simple object
* Define group / complex object
    * This object contains a list of *abstarct objects*


## Observer Design Pattern <a id="7"></a>
Use this design pattern if you need to design reactive behavior. For example when some observer objects need to react to state changes of a subject.

* Define Observer interface. Define a public `notify()` methods for subjects to call upon changes of subject state.
* Implement concrete observers. (e.g. What will the observer do when notified?)
* Define Observable interface.
    * Maintain a list of all observers attached to the observable
    * Upon call from subject notify all observers.
* Subjects inheriting the Observable can now add, remove and notify observers. 
    * Good practice is to call for notify observers everytime the state of the subject changes.

## Command Design Pattern <a id="8"></a>
This command pattern is used to decouple sender and receiver of requests. This design can be used to 
parameterize objects, issue commands predefiend commands, schedule and support undo/redo facility. 

An example of how undo operation is implemented is provided in `Command/Undo using Command Pattern`.

* Define command interface
* Define concrete commands, encapsulating an action that needs to be performed
* Define receiver. Responsible for the actual work.
* Invoker (remote controller analogy). It has reference to commands and is responsible for executing the commands.