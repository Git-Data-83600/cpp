#include<iostream>
using namespace std;
class box
{
   private:
        int length;
        int width;
        int height;
    
   public:
        box()
        {
            this->length=1;
            this->height=1;
            this->width=1;                

        }
        box(int length,int width,int height)
        {
            this->length=length;
            this->height=width;
            this->width=height;

        }
        box(int value)
        {
            this->length=value;
            this->height=value;
            this->width=value;
        }
        int volume()
        {

          return length*width*height;

        }
        ~box()
        {
           cout<<endl;
           cout<<"destructor called"<<endl;

        }


};
int main()
{
    int choice;
    do
    {
        cout<<"0 : exit  1 : volume with default values  2 : volume with same value  3: volume with user defined values"<<endl;
        cout<<"enter choice : ";
        cin>>choice;


        switch (choice)
        {

        case 0:
            cout<<"thanks for using"<<endl;
            break;

        case 1:
            cout<<"result of volume of box with default values :";
            {
               box b;

               cout<<"volume is : "<<b.volume()<<endl;

            }
            break;

        case 2:
            
            cout<<"volume with same value of length,width and height : "<<endl;
           
            {
               int l;
               cout<<"enter the same value for all length,width and height"<<endl;
               cin>>l;

               box b(l);
               cout<<"volume is : "<<b.volume()<<endl;

            }
            break;

        case 3:
         
           
            {
              int l,w,h;
              cout<<"enter value for length,width and height : "<<endl;
              cin>>l>>w>>h;

               box b(l,w,h);
               cout<<"volume is : "<<b.volume()<<endl;

            }//destructor will be called here as object goes out of scope here--> thus we can create  NEW object
            break;


        
        default:
            cout<<"enter a valid choice"<<endl;
            break;
        }

    } while (choice!=0);
    

    return 0;
}