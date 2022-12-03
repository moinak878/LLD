package javaCodes.buttons;

public class WindowsButton implements Button{
    public void render(){
        System.out.println("Windows Test Button");
        onClick();
    }
    public void onClick(){
        System.out.println("Click! Button says - 'Hello World!'");
    }

}
