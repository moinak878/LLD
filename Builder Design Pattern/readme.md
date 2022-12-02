# Builder Design Pattern

### When to use Builder Design Pattern :-
- Composite objects 
- Different configurations 

### Explanation :-
- you have a mobile phone it can have make , model , os , ram , rom etc
- you cant have so many constructors for every different config
- I may want an Android os mobile but dont specify anything else
- So in this scenario we use Different setters to set each property!
- And use MobilePhoneBuilder to set all these.

### Examples :-
- Java's String builder class which helps us to concatenate strings and builds it 
- URL Builder (protocol , hostname , port , path params , query params)
