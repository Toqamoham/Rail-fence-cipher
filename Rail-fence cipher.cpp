// FCAI _ Programming1 _ 2022 _ Assignment2.
// Program Name: Rail-fence Cipher.
// Program Description : The program cipher or decipher the text for both key 3 and 4.
// Last Modification Data:25/3/2022.
// Author and ID and Group: Toqa Mohamed Shokry ,   20210099 ,    A.
// Teaching Assistant : .....



# include<iostream>
# include<cstring>
# include<string>
# include <algorithm>
# include <vector>

using namespace std;

string arr1;
char arr2[150];

vector<char>letters1;
vector<char>letters2;
vector<char>letters3;
vector<char>letters4;
vector<char>letters5;
vector<char>key_4;

int option ;
int key ;


void cipher()   //Function to cipher the text for both key 3 and 4.
{

    if(key == 3){

        // A Loop to print the first line and add its letters in vector (letters1).

        for(int i=0 ; i< strlen(arr2) ; i+=4){

            cout << arr2[i] << " . . . ";

            letters1.push_back(arr2[i]);

        }
        cout << "\n. ";

        //  A Loop to print the second  line and add its letters in vector (letters1).

        for(int i=1 ; i< strlen(arr2) ; i+=2){


            cout << arr2[i] << " . " ;

            letters1.push_back(arr2[i]);
        }

        cout << " \n. . ";

        // A Loop to print the third line and add its letters in  vector (letters1).

        for(int i=2 ; i< strlen(arr2) ; i+=4){


            cout << arr2[i] << " . . . ";

            letters1.push_back(arr2[i]);

        }

        cout << endl;

        // A Loop to print the letters inside the vector(letters1) in one line.

        for(int i=0 ; i<letters1.size() ; i++){

            cout << letters1.at(i);
        }

    }

    else if (key == 4)
    {
        //A Loop to print the first line and add its letters in vector (letters1).

        for(int i=0 ; i < strlen(arr2) ; i += 6){

            cout << arr2[i] << " . . . . . ";

            letters1.push_back(arr2[i]);


        }

        cout << "\n. ";

        //A Loop to print the second line and add its letters in vector (letters1).

        for(int i = 1 ; i < strlen(arr2) ; i += 3){

            if (i % 2 == 0){

                cout << arr2[i + 1] << " . ";

                letters1.push_back(arr2[i+1]);

            }

            else{

                cout << arr2[i] << " . . . ";

                letters1.push_back(arr2[i]);

            }


        }

        cout << "\n. . ";

        //A Loop to print the third line and add its letters in vector (letters1).

        for(int i = 2 ; i < strlen(arr2) ; i += 3){

            if (i % 2 == 1)
            {
                cout << arr2[i - 1] << " . . . ";

                letters1.push_back(arr2[i-1]);


            }

            else
            {
                cout << arr2[i] << " . ";

                letters1.push_back(arr2[i]);
            }
        }

        cout << "\n. . . ";

        //A Loop to print the fourth line and add its letters in  vector (letters1).

        for(int i = 3 ; i < strlen(arr2) ; i+=6)
        {

            cout << arr2[i] << " . . . . . ";

            letters1.push_back(arr2[i]);

        }

        cout << endl;

        // A Loop to print letters that are in vector(letters1) in one line.


        for(int i=0 ; i<letters1.size() ; i++){

            cout << letters1.at(i);
        }

    }

}

// Function to decipher the text for key 3.

void decipher_key_3(){

    int counter;
    int limit;

    counter=strlen(arr2);

    limit=0;

    // A Loop to print the first line and add its letters in  vector (letters2).


    for(int i=0 ; counter>0 ; i++){

        cout << arr2[i] << " . . . ";

        counter-=4;

        limit+=1;

        letters2.push_back(arr2[i]);

    }

    cout << "\n. ";

    counter = strlen(arr2);

    //A Loop to print the second line and add its letters in vector (letters3).

    for(int i=limit ; counter>0 ; i++){

        cout << arr2[i] << " . ";

        counter-=2;

        limit+=1;

        letters3.push_back(arr2[i]);

    }


    cout << "\n. . ";

    counter = strlen(arr2);

    // A Loop to print the third line and add its letters in  vector (letters4).

    for(int i=limit ; counter>0 ; i++){

        cout << arr2[i] << " . . . ";

        counter-=4;

        limit+=1;

        letters4.push_back(arr2[i]);

    }

    counter = 0;

    cout << endl;

    // A Loop to print  letters that are in vectors(letters2 , letters3, letters4).

    for(int i=0 ; i < letters2.size() ; i++){

        cout << letters2.at(i) << letters3.at(i+counter) << letters4.at(i) ;


        cout << letters3.at(i+counter+1);

        counter+=1;

    }

}

// function to decipher the text for key4.

void decipher_key_4(){

    int counter;
    int limit = 0;

    counter = strlen(arr2);

    //A Loop to print the first line and add its letters in vector (letters2).


    for(int i=0 ; counter>0 ; i++ ){

        cout << arr2[i] << " . . . . . ";

        letters2.push_back(arr2[i]);

        counter -=6;

        limit++;


    }

    cout << "\n. ";

    counter = strlen(arr2);

    // A Loop to print the second line and add its letters in vector (letters3).

    for(int i=limit ; counter >0 ; i++){

        if(i%2==0){

            cout << arr2[i] << " . ";

            letters3.push_back(arr2[i]);

            counter -=2;

        }

        else{

            cout << arr2[i] << " . . . ";

            letters3.push_back(arr2[i]);

            counter -=4;
        }

        limit++;
    }


    cout << "\n. . ";

    counter = strlen(arr2);

    // A Loop to print the third line and add its letters in vector (letters4).

    for(int i = limit ; counter>0 ; i++){

        if(i%2==1){

            cout << arr2[i] << " . . . ";

            letters4.push_back(arr2[i]);

            counter -=2;
        }

        else{

            cout << arr2[i] << " . ";

            letters4.push_back(arr2[i]);

            counter -=4;
        }

        limit++;
    }

    cout << "\n. . . ";

    counter = strlen(arr2) ;

    // A Loop to print the fourth line and add its letters in vector (letters5).

    for(int i=limit ; counter>0 ; i++){

        cout << arr2[i] << " . . . . . ";

        letters5.push_back(arr2[i]);

        counter-=6;

        limit++;
    }

    cout << "\n";

    counter = 0 ;

    // A Loop to add letters that are in vectors(letters2 , letters3 , letters4 , letters5) in another vector(key_4).

    for(int i=0 ; i < (letters3.size() / 2) ; i++) {

        key_4.push_back(letters2.at(i)); // Add the first letter of vector(letters2) in the vector(key_4).

        key_4.push_back(letters3.at(i + counter)) ;  // Add the first letter of vector(letters3) in the vector(key_4).

        key_4.push_back(letters4.at(i + counter)) ;  // Add the first letter of vector(letters4) in the vector(key_4).

        key_4.push_back(letters5.at(i)) ;  // Add the first letter of vector(letters5) in the vector(key_4).

        key_4.push_back(letters4.at(i + counter + 1)) ;  // Add the second letter of vector(letters2) in the vector(key_4).

        key_4.push_back(letters3.at(i + counter + 1)) ;  // Add the second letter of vector(letters2) in the vector(key_4).

        counter++;
    }
    /* Check that if the previous for loop append all the characters of the text or no .
    if the length of the text and the kay4 are equal so this mean all characters are appended .
    if no so the last 4 characters not appended in the key4 vector . */

    if(key_4.size() != strlen(arr2) ){

        key_4.push_back(letters2.at(letters2.size()-1));

        key_4.push_back(letters3.at(letters3.size()-1));

        key_4.push_back(letters4.at(letters4.size()-1));

        key_4.push_back(letters5.at(letters5.size()-1));
    }


    // A Loop to print letters that are in vector(key_4) in one line.

    for(int i =0 ; i < key_4.size() ; i++){

        cout << key_4.at(i);
    }


}


int main()
{

    cout << "Enter\n1 - to cipher\n2 - to decipher\n3 - to exit" << endl ;  // Notes for users.

    cout << "please enter the string :" << endl;

    getline(cin, arr1);

    arr1.erase(remove(arr1.begin( ) , arr1.end( ) , ' '), arr1.end()) ;  // To remove the spaces from the text.



    for (int i = 0 ; i < arr1.length() ; i++) // To make all letters inside arr1 are lowercase.

        arr2[i] = tolower(arr1[i]) ;


    while(true)
    {
        cout << "please enter your option :" << endl;

        cin >> option;

        if (option == 1 || option == 2 || option == 3)
        {
            break ;
        }

        else
        {

            cout << "please enter the correct option either equal 1 , 2 or 3 :"; // In case that the user entered the wrong option.
        }

    }

    while (true)
    {
        if(option == 1)
        {

            cout << "please enter the key : " << endl;

            cin >> key;

            if (key == 3 || key == 4)
            {

                cipher();

                break;
            }

            else
            {
                cout << "please enter the corrcet key either equal 3 or 4 ." << endl; // In case that the user entered the wrong key.

            }

        }

        else if(option == 2)
        {

            cout << "please enter the key :" << endl;

            cin >> key;

            if(key == 3){

                decipher_key_3();

                break;

            }

            else if(key==4){

                decipher_key_4();

                break;
            }

            else
            {

                cout << "please enter the correct key either equal 3 or 4 :" << endl ; // In case that the user entered the wrong key.

            }

        }

        else if(option == 3)
        {

            exit(1);

        }

    }

    return 0 ;
}