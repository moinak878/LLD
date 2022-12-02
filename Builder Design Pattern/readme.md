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

<img width="847" alt="Screenshot 2022-12-02 at 5 22 01 PM" src="https://user-images.githubusercontent.com/32922277/205286889-c5139243-a061-4f04-b079-2888594931b4.png">
