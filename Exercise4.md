What is a precompiled header? Name pros and cons:
  - A static binary file including a stable codebase / library / framework.
  - Good to deploy and ship --> stable consolidated version controller.
  - Bad for user end troubleshooting of compiled libraries.

Describe the layer of abstraction with your own words:
  - Simplified interface to several different libraries and frameworks.
  
Name the SOLID principles and describe them briefly:
  - Single-responsibility - A class shall only have one task
  - Open–closed - Shipped software shall be "open" for extension but "closed" for codebase/sourcecode changes.
  - Liskov substitution - Pointer and references of and to inheritance objects, shall not need to know of the inheritance.
  - Interface segregation - Users shall require the dependancies of APIs they use.
  - Dependency inversion - Users shall depend on our abstraction layer instead of the underlying libraries and frameworks.
