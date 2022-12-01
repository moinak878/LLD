#include<iostream>
using namespace std;

// <<interface>> for Button
class ButtonInterface{
    public:
        virtual void onPress()=0;
};
// concrete class for Windows Button
class WinButton:public ButtonInterface{
    public:
        void onPress(){
            cout<<"Windows Button is pressed !"<<endl;
        }
};
// concrete class for MacOs button
class MacButton:public ButtonInterface{
    public:
        void onPress(){
            cout<<"MacOs Button is pressed !"<<endl;
        }
};


// <<interface>> for TextBox
class TextInterface{
    public:
        virtual void onShow()=0;
};
// concrete class for Windows Text
class WinText:public TextInterface{
    public:
        void onShow(){
            cout<<"Windows Text is Shown !"<<endl;
        }
};
// concrete class for MacOs Text
class MacText:public TextInterface{
    public:
        void onShow(){
            cout<<"MacOs Text is Shown !"<<endl;
        }
};



// <<interface>> for GUI
class GUIInterface{
    public:
        virtual ButtonInterface* createButton()=0;
        virtual TextInterface* createText()=0;
};

// concrete class for windows gui
class WinGUI:public GUIInterface{
    public:
        ButtonInterface* createButton(){
            return new WinButton();
        }
        TextInterface* createText(){
            return new WinText();
        }
};

// concrete class for MacOs gui
class MacGUI:public GUIInterface{
    public:
            ButtonInterface* createButton(){
                return new MacButton();
            }
            TextInterface* createText(){
                return new MacText();
            }
};

// Abstract GUI Factory with static member function
class GUIAbstractFactory{
    public:
        static GUIInterface* getGUI(string osType){
            if(osType=="windows")
                return new WinGUI();
            return new MacGUI();
        }
};

int main(){
    string osType;
    cout<<"Enter OS : ";
    cin>>osType;

    GUIInterface* gui = GUIAbstractFactory::getGUI(osType);
    ButtonInterface *button = gui->createButton();
    TextInterface *text = gui->createText();

    button->onPress();
    text->onShow();

    return 0;
}