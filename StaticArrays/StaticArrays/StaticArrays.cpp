
#include <iostream>

int main()
{
    // ARRAY DE 1 DIMENSION
    //Initialize array - Option 1
    const int NUM_MEASUREMENTS = 3;
    float myArrayFloats[NUM_MEASUREMENTS] = {3.0f,4.6f,5.4f};

    //Initialize array - Option 2

    char myArrayChars[NUM_MEASUREMENTS];
    myArrayChars[0] = 'H';
    myArrayChars[1] = 'L';
    myArrayChars[2] = 'Y';


    // ARRAY 2 DIMENSIONES
    const int NUM_ROW = 4;
    const int NUM_COL = 3;
    
    //Initialize 2D array - Option 1
    double my2DArrayDouble[NUM_ROW][NUM_COL] = {

        {2.0,5.0,6.0},
        {7.0,5.0,3.0},
        {4.0,5.0,6.0},
        {5.0,6.0,7.0}
    };

    //Initialize 2D array - Option 2
    double my2DArray2[NUM_ROW][NUM_COL];

    //ROW 0
    my2DArray2[0][0] = 4.5;
    my2DArray2[0][1] = 4.5;
    my2DArray2[0][2] = 4.5;
    //Row 1
    my2DArray2[1][0] = 4.5;
    my2DArray2[1][1] = 4.5;
    my2DArray2[1][2] = 4.5;

    //Initialize 2D array - Option 3
    for (int i = 0; i < NUM_ROW; i++) {
        for (int j = 0; j < NUM_COL; j++) {
            my2DArray2[i][j] = 2.0;
        }

    }

    //OPTION 4 - NOT RECOMMENDED

    //double my2DArray[NUM_ROW][NUM_COL] = { 4.6,6.7,2.4,4.6,6.7,2.4,4.6,6.7,2.4,4.6,6.7,2.4};
    

    //DINAMIC ARRAYS
    //Memory Leak que hemos alojado elementos en memoria y no los hemos destruido y ya no tenemos forma de destruirlos
    //por lo tanto esta ocupando memoria inutilmente

    int numElement;

    std::cin >> numElement;
    float* myArray = new float[numElement];
    

    for (int i = 0; i < numElement; i++) {
                   
        
        int a = 0;
        int b = i;
        int* myArrayInt = new int[numElement];
        
    }
    /*
    for (int i = 0; i < numElement; i++) {
        // * (@myArray + i)
        std::cout << myArray[i] << std::endl;
    }
    */

    //Dynamic Arrays 2 Dimensiones
    int numRows;
    int numCols;
    std::cin >> numRows;
    std::cin >> numCols;

    //Null pointer por si luego quieres crearlo o no

    int** myMatrix = nullptr;

    //if(gamemode == RANKING_PLAYERS)
    //else //modo de juego
    //crear array
    //if(my2DArray == nullptr) no se ha creado todavia el mapa

    myMatrix = new int*[numCols];
    for (int i = 0; i < numRows; i++) {
        myMatrix[i] = new int[numCols];
    }

    //Read Values
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            myMatrix[i][j] = 8;
        }
    }

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            std::cout << myMatrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    //Destruction of arrays //Mirarlo luego

}

