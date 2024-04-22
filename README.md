# SOLVER
 *The provided C++ program demonstrates the application of Object-Oriented Programming (OOP) concepts in several ways:  

#1. Class Definition:  

 *A class named Utility is defined. This class serves as a blueprint for creating objects that encapsulate functionalities	
  for calculations, area finding, unit conversion, and module finding.  

#2. Encapsulation:  
  
 *The Utility class encapsulates data (member functions) and behavior (member variables, if needed) within itself. 	
  This restricts direct access to internal details, promoting data protection and modularity.  

#3. Member Functions:  

 *The class contains various member functions, each representing a specific utility function	
  (e.g., add, subtract, rectangleArea, convertCelsiusToFahrenheit). These functions define the behavior of the Utility object.  

#4. Public and Private Members:  

 *The member functions are categorized as public and private. Public functions (add, subtract, etc.) are accessible from	
  outside the class, allowing users to interact with the object's functionalities. Private functions (like the helper mod function), 	
  on the other hand, are only accessible within the class, promoting better code organization and data protection.	

#5. Object Creation and Usage:	

 *In the main function, an object of the Utility class named util is created. This object can then be used to call 	
  the various member functions and perform calculations, area finding, etc.  	
  Here's a breakdown of how OOP principles are applied in specific functions:  

 *add, subtract, multiply, divide: These functions demonstrate encapsulation - they encapsulate the logic for performing basic arithmetic operations.  
  rectangleArea, circleArea: These functions showcase encapsulation of area calculation logic for specific shapes.  	
  convertCelsiusToFahrenheit, convertFahrenheitToCelsius: These functions illustrate encapsulation of unit conversion logic for specific temperature units.  
  expMod: This function exemplifies encapsulation of the complex logic for exponential modulo calculation.	

 *By following these OOP principles, the code becomes more organized, maintainable, and reusable. Each utility function is encapsulated within the Utility class,	
  promoting modularity and reducing code duplication  
