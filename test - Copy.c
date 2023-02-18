#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

struct attrebut
{
    string type;
};
struct allatt
{
    attrebut a1,b2,c3,d4,e5,f6,g7,h8,i9,j10,k11;
};



class Animal{
private:
    int movement, circulatorySystem, digestiveSystem, foodType, environment;
    string movementS, circulatorySystemS, digestiveSystemS, foodTypeS, environmentS;
    string movementArr[9] = {"walk", "run", "creep", "hop", "jump", "fly", "glide", "paddle", "swim"};
    string circulatorySystemArr[2] = {"openCirculatorySystem" ,"closedCirculatorySystem"};
    string digestiveSystemArr[4] = { "monogastric", "avian", "ruminant", "pseudo-ruminant"};
    string foodTypeArr[3] = {"herbivores", "omnivores", "carnivores"};
    string environmentArr[3] = {"land", "sea", "water"};

protected:
    void setAnimalValue(){
        cout<<"\n"<<"what type of movement: (";
        for(int i = 0; i < sizeof(movementArr) / sizeof(string); i++){
            cout<<movementArr[i]<<": "<<i<<", ";
        }
        cout<<"): ";
        cin>>movement;
        cout<<"\n";

        cout<<"\n"<<"what type of circulatory System: (";
        for(int i = 0; i < sizeof(circulatorySystemArr) / sizeof(string); i++){
            cout<<circulatorySystemArr[i]<<": "<<i<<", ";
        }
        cout<<"): ";
        cin>>circulatorySystem;
        cout<<"\n";

        cout<<"\n"<<"what type of digestive System: (";
        for(int i = 0; i < sizeof(digestiveSystemArr) / sizeof(string); i++){
            cout<<digestiveSystemArr[i]<<": "<<i<<", ";
        }
        cout<<"): ";
        cin>>digestiveSystem;
        cout<<"\n";

        cout<<"\n"<<"what type of food the animal eats: (";
        for(int i = 0; i < sizeof(foodTypeArr) / sizeof(string); i++){
            cout<<foodTypeArr[i]<<": "<<i<<", ";
        }
        cout<<"): ";
        cin>>foodType;
        cout<<"\n";

        cout<<"\n"<<"what type of environment the animal lives in: (";
        for(int i = 0; i < sizeof(environmentArr) / sizeof(string); i++){
            cout<<environmentArr[i]<<": "<<i<<", ";
        }
        cout<<"): ";
        cin>>environment;
        cout<<"\n";
    }
    void setAString(string movementSt, string circulatorySystemSt,
                    string digestiveSystemSt, string foodTypeSt, string environmentSt)
    {
        movementS=movementSt;
        circulatorySystemS=circulatorySystemSt;
        digestiveSystemS=digestiveSystemSt;
        foodTypeS=foodTypeSt;
        environmentS=environmentSt;
    }
    string getAString()
    {
        string outputS;
        outputS = "movement: "+movementS+"\n"+
        "circulatorySystem: "+circulatorySystemS+"\n"+
        "digestiveSystem: "+digestiveSystemS+"\n"+
        "food: "+foodTypeS+"\n"+
        "environment: "+environmentS+"\n";
        return outputS;
    }
    string getAnimaldetails(){
        string output;
        output = "movement: "+movementArr[movement]+"\n"+
        "circulatorySystem: "+circulatorySystemArr[circulatorySystem]+"\n"+
        "digestiveSystem: "+digestiveSystemArr[digestiveSystem]+"\n"+
        "food: "+foodTypeArr[foodType]+"\n"+
        "environment: "+environmentArr[environment]+"\n";
        return output;
    }
};

class Vertebrate: public Animal{
private:
    int type, reproduction, respiratorySystem, bodyCovering, bloodType;
    string typeS, reproductionS, respiratorySystemS, bodyCoveringS, bloodTypeS;
    string name;
    string typeArr[5] = {"amphibians", "reptiles", "mammals", "birds", "fish"};
    string reproductionArr[3] = {"ovipositor", "internalFertilization", "viviparous"};
    string respiratorySystemArr[3] = {"gills", "integumentaryExchangeAreas", "lungs"};
    string bodyCoveringArr[4] = {"feathers", "skin", "scales", "fur"};
    string bloodTypeArr[2] = {"warm blood", "cold blood"};

public:
    void setVertebrateValue(){
        cout<<"name of the Vertebrate: ";
        cin>>name;

        cout<<"\n"<<"what type of Vertebrate: (";
        for(int i = 0; i < sizeof(typeArr) / sizeof(string); i++){
            cout<<typeArr[i]<<": "<<i<<", ";
        }
        cout<<"): ";
        cin>>type;
        cout<<"\n";

        cout<<"what type of reproduction: (";
        for(int i = 0; i < sizeof(reproductionArr) / sizeof(string); i++){
            cout<<reproductionArr[i]<<": "<<i<<", ";
        }
        cout<<"): ";
        cin>>reproduction;
        cout<<"\n";

        cout<<"what type of respiratory System: (";
        for(int i = 0; i < sizeof(respiratorySystemArr) / sizeof(string); i++){
            cout<<respiratorySystemArr[i]<<": "<<i<<", ";
        }
        cout<<"): ";
        cin>>respiratorySystem;
        cout<<"\n";

        cout<<"what type of bodyCovering: (";
        for(int i = 0; i < sizeof(bodyCoveringArr) / sizeof(string); i++){
            cout<<bodyCoveringArr[i]<<": "<<i<<", ";
        }
        cout<<"): ";
        cin>>bodyCovering;
        cout<<"\n";

        cout<<"what type of bloodType: (";
        for(int i = 0; i < sizeof(bloodTypeArr) / sizeof(string); i++){
            cout<<bloodTypeArr[i]<<": "<<i<<", ";
        }
        cout<<"): ";
        cin>>bloodType;
        cout<<"\n";

        setAnimalValue();

    }
    string getname(){
        return name;
    }
    void setVString(string nameV, string typeSV, string reproductionSV,
                    string respiratorySystemSV, string bodyCoveringSV, string bloodTypeSV,
                    string movementSt, string circulatorySystemSt,
                    string digestiveSystemSt, string foodTypeSt, string environmentSt)
    {
        name=nameV;
        typeS=typeSV;
        reproductionS=reproductionSV;
        respiratorySystemS=respiratorySystemSV;
        bodyCoveringS=bodyCoveringSV;
        bloodTypeS=bloodTypeSV;
        setAString(movementSt,circulatorySystemSt,digestiveSystemSt,foodTypeSt,environmentSt);
    }

    string getVString()
    {
        string outputV;
        outputV = "name: "+name+"\n"+
        "type: "+typeS+"\n"+
        "reproduction: "+reproductionS+"\n"+
        "respiratorySystem: "+respiratorySystemS+"\n"+
        +"bodyCovering: "+bodyCoveringS+"\n"+
        +"bloodType: "+bloodTypeS+"\n";
        outputV+=getAString();
        return outputV;
    }
    string getVertebrateValue(){
        string output;
        output = "name: "+name+"\n"+
        "typeOfVertebrate: "+typeArr[type]+"\n"+
        "reproduction: "+reproductionArr[reproduction]+"\n"+
        "respiratorySystem: "+respiratorySystemArr[respiratorySystem]+"\n"+
        +"bodyCovering: "+bodyCoveringArr[bodyCovering]+"\n"+
        +"bloodType: "+bloodTypeArr[bloodType]+"\n";
        output = output+getAnimaldetails();

        return output;
    }
};



class node
{
public:
    Vertebrate data;
    node *next;
};

class linked_list
{
private:
    node *head,*tail;
    string output;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    void add_node()
    {
        Vertebrate n;
        n.setVertebrateValue();
        node *tmp = new node;
        tmp->data=n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }

    void add_node_str(allatt data)
    {
        Vertebrate n;
        n.setVString(data.a1.type,data.b2.type,data.c3.type,data.d4.type,data.e5.type,
                             data.f6.type,data.g7.type,data.h8.type,data.i9.type,data.j10.type,data.k11.type);
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if(head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    node* gethead()
    {
        return head;
    }
    void DisplayListV(node *head)
    {
        string out;
        int num = 0;
        node* currNode = head;
        while (currNode != NULL){
            out = currNode->data.getVertebrateValue();
            cout<<out<<endl;
            currNode = currNode->next;
            num++;
        }
        cout << "Number of nodes in the list: " << num << endl;
    }

    void DisplayList(node *head)
    {
        string out;
        int num = 0;
        node* currNode = head;
        while (currNode != NULL){
            out = currNode->data.getVString();
            cout<<out<<endl;
            currNode = currNode->next;
            num++;
        }
        cout << "Number of nodes in the list: " << num << endl;
    }
    string toStringV(node *head){
        string out;
        int num = 0;
        node* currNode = head;
        while (currNode != NULL){
            out += currNode->data.getVertebrateValue();
            out+="\n";
            currNode = currNode->next;
            num++;
        }
        return out;

    }
    string toString(node *head){
        string out;
        int num = 0;
        node* currNode = head;
        while (currNode != NULL){
            out = currNode->data.getVString();
            currNode = currNode->next;
            num++;
        }
        return out;

    }

    void deleteNode(node *head,string name){
        node* prevNode = NULL;
        node* currNode = head;
        while (currNode && currNode->data.getname() != name) {
            prevNode = currNode;
            currNode = currNode->next;
        }
        if (currNode) {
            if (prevNode) {
                prevNode->next = currNode->next;
                delete currNode;
                cout<<"deleted: "<<name<<endl;
            }
            else {
                head = currNode->next;
                delete currNode;
                cout<<"deleted: "<<name<<endl;
            }
        }
    }

    void update(node *head, string name){
        node *currNode = head;
        while(currNode && currNode->data.getname()!=name){
            currNode = currNode->next;
        }
        if(currNode){
            currNode->data.setVertebrateValue();
            cout<<"update successfully"<<endl;
        }
    }

    void showAnimal(string name)
    {
        node *currNode = head;
        while(currNode && currNode->data.getname()!=name){
            currNode = currNode->next;
        }
        if(currNode){
            currNode->data.getVertebrateValue();
        }
    }

};




class File{
private:

public:

    static void creat(string output){
        string fileName;
        cout<<"enter file name: ";
        cin>> fileName;
        ofstream myFile(fileName);
        myFile<<output<<"\n";
        cout<<"save"<<endl;
        myFile.close();
    }
static void overWrite(string output,string path){
        string fileName;
        ofstream myFile(path);
        myFile<<output<<"\n";
        cout<<"save"<<endl;
        myFile.close();
    }
    static void read(string path, linked_list *a){
        string myText,valText="1",helpText,temp;
        allatt al;
        ifstream readFile(path);
        int count1=0;
        while (getline (readFile, helpText)) {
          // Output the text from the file
          myText+=helpText;
          myText+="\n";
          count1++;
        }
        cout<<count1<<endl;
        /*cout<<myText<<endl;*/

        stringstream s(myText);

        // To store individual words
        string word;

        int count = 1;
        while (s >> word)
        {
            count=1;
            do
            {
                if(count%22==0)
                    {
                        al.k11.type=word;
                        a->add_node_str(al);
                    }
                switch(count)
                {
                    case 2:
                        al.a1.type=word;
                        break;

                    case 4:
                        al.b2.type=word;
                        break;

                    case 6:
                        al.c3.type=word;
                        break;

                    case 8:
                        al.d4.type=word;
                        break;

                    case 10:
                        al.e5.type=word;
                        break;

                    case 12:
                        al.f6.type=word;
                        break;

                    case 14:
                        al.g7.type=word;
                        break;

                    case 16:
                        al.h8.type=word;
                        break;

                    case 18:
                        al.i9.type=word;
                        break;

                    case 20:
                        al.j10.type=word;
                        break;

                    case 22:
                        al.k11.type=word;
                        break;
                }
                cout<<count<<endl;
                count++;

            }while(count<=22 && s>>word);
        }
        /*a->DisplayList(a->gethead());*/


    }

};

int main()
{
    int a=0,b=0,c=0,d,e;
    linked_list list;
    string path,name;
    while(true)
    {
        cout<<"to create a file press 1/to read a file press 2/exit 0: "<<endl;
        cin>>a;
        if(a==1)
        {
            while(true)
            {
                cout<<"to add an animal press 1/ to save press 2/exit 0: "<<endl;
                cin>>b;
                if(b==1)
                {
                    list.add_node();
                    list.DisplayListV(list.gethead());
                }
                else if(b==2)
                {
                    File::creat(list.toStringV(list.gethead()));
                    continue;
                }
                else if(b==0)
                {
                    break ;
                }

            }
        }
        if(a==2)
        {
            while(true)
            {
                cout<<"enter file path: "<<endl;
                cin>>path;
                File::read(path, &list);
                list.DisplayList(list.gethead());
                while(true)
                {
                    cout<<"to update an Animal press 1/ to delete an Animal press 2/ to show an animal press 3/ to add an animal press 4/ to save press 5/exit 0: "<<endl;
                    cin>>c;
                    if(c==1)
                    {
                        cout<<"Enter Animal's name to update: "<<endl;
                        cin>>name;
                        list.update(list.gethead(),name);
                    }
                    else if(c==2)
                    {
                        cout<<"Enter Animal's name to delete: "<<endl;
                        cin>>name;
                        list.deleteNode(list.gethead(),name);
                    }
                    else if(c==3)
                    {
                        cout<<"Enter Animal's name to show: "<<endl;
                        cin>>name;
                        list.showAnimal(name);
                    }
                    else if(c==4)
                    {
                        list.add_node();
                        list.DisplayListV(list.gethead());
                    }
                    else if(c==5)
                    {

                        File::overWrite(list.toString(list.gethead()),path);
                    }
                    else if(c==0)
                    {
                        break;
                    }
                }
            }

        }
        if(a==0)
        {
            break;
        }
    }
    /*linked_list a;
    a.add_node();
    a.add_node();
    a.add_node();
    a.DisplayList(a.gethead());
    a.deleteNode(a.gethead(),"bird");
    a.update(a.gethead(),"name");
    a.DisplayList(a.gethead());*/
    /*File::read("test.txt");*/

}
