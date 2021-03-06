// Program: demo2.cpp
// Purpose: Demonstrate use of bmplip for handling
//          bmp colored and grayscale images
//          Program load a gray image and store in another file
// Author:  Mohamed abdelhamid      20170241
//          mohamed hamdy mohamed   20170227
//          mohamed ali farouk      20170249
// Date:    13 Abril 2018
// Version: 2.0

#include <iostream>
#include <algorithm>
#include <fstream>
#include <cstring>
#include <cmath>
#include "bmplib.cpp"
#include "bmplib.h"

using namespace std;

unsigned char image[SIZE][SIZE];
unsigned char image2[SIZE][SIZE];
unsigned char image_1[SIZE][SIZE][3];
unsigned char image_2[SIZE][SIZE][3];


void loadImage();
void loadImage_Bonus();
void loadImage_2();
void saveImage ();
void saveImage_Bonus();

// Abd El Hamed Functios
void Filter_1();
void Filter_1_bonus();
void Filter_4();
void Filter_4_bonus();
void Filter_7();
void Filter_7_bonus();


// Mohamed Hamdy Functions
void Filter_2();
void Filter_2_bonus();
void Filter_5();
void Filter_5_bonus();
void Filter_8();
void Filter_8_bonus();

// Mohamed Ali Functions
void Filter_3();
void Filter_3_bonus();
void Filter_6();
void Filter_6_bonus();
void Filter_9();
void Filter_9_bonus();

///////////////////////////
void Filter_a();
void Filter_b();
void Filter_c();

int main ()
{
    char num;
    cout << "Ahlan ya user ya habibi ?\n1- if you want the Normal Code .\n2- if you want the Bonus code .";
    cout <<"\n>>>";
    cin >> num;
    while ( true )
    {
             if (num == '1' )
        {
            cout << "Ahlan ya user ya habibi ?\nPlease enter file name of the image to process: ";
            loadImage();
            string x ;
            cout << "1- Black and White Image .\n2- Invert Filter\n3- Merge Images .\n4- Flip Image .\n5- Rotate Image .\n6- Darken and Lighten Image ."
                 << "\n7- Detect Image Edges .\n8- Enlarge Image .\n9- Shrink Image .\ns- Save the image to a file .\na- To Filter_a .\nb- To Filter_b .\nc- To Filter _c .\n0- To End .";
            while ( true)
            {
                cout << "\n\nEnter Your Choose Please :";
                cin >> x ;
                if (x == "1")
                {
                    Filter_1();
                    cout <<"Successful process";
                }
                else if ( x == "2")
                {
                    Filter_2();
                    cout <<"Successful process";
                }
                else if ( x == "3")
                {
                    loadImage_2();
                    Filter_3();
                    cout <<"Successful process";
                }
                else if ( x == "4")
                {
                    Filter_4();
                    cout <<"Successful process";
                }
                else if (x == "5")
                {
                    Filter_5();
                    cout <<"Successful process";
                }
                else if (x == "6")
                {
                    Filter_6();
                    cout <<"Successful process";
                }
                else if (x == "7")
                {
                    Filter_7();
                    cout <<"Successful process";
                }
                else if (x == "8")
                {
                    Filter_8();
                    cout <<"Successful process";
                }
                else if (x == "9")
                {
                    Filter_9();
                    cout <<"Successful process";
                }
                else if (x == "s")
                {
                    saveImage();
                    cout <<"Successful process";
                    cout << "\n\nPlease enter file name of the image to process: ";
                    loadImage();
                }
                else if (x == "a")
                {
                    Filter_a();
                    cout <<"Successful process";
                }
                else if (x == "b")
                {
                    Filter_b();
                    cout <<"Successful process";
                }
                else if (x == "c")
                {
                    Filter_c();
                    cout <<"Successful process";

                }
                else if ( x == "0")
                    break;
                else
                    continue;
            }
        }
        else if ( num == '2')
        {
            string x ;
            cout << "1- Black and White Image .\n2- Invert Filter\n3- Merge Images .\n4- Flip Image .\n5- Rotate Image .\n6- Darken and Lighten Image ."
                 << "\n7- Detect Image Edges .\n8- Enlarge Image .\n9- Shrink Image .\n0- To End . ";

            while ( true)
            {
                cout << "\n\n Enter Your Choose Here :";
                cin >> x;
                if (x == "1")
                {
                    char filename[100];
                    cout << "Enter the image name :";
                    cin >> filename;
                    strcat (filename, ".bmp");
                    readRGBBMP(filename,  image_1);

                    Filter_1_bonus();

                    char filename_1[100];
                    cout << "Enter the target image file name: ";
                    cin >> filename_1;
                    strcat (filename_1, ".bmp");
                    writeRGBBMP(filename_1, image_1);

                }
                else if ( x == "2")
                {
                    char filename[100];
                    cout << "Enter the image name :";
                    cin >> filename;
                    strcat (filename, ".bmp");
                    readRGBBMP(filename,  image_1);

                    Filter_2_bonus();

                    char filename_1[100];
                    cout << "Enter the target image file name: ";
                    cin >> filename_1;
                    strcat (filename_1, ".bmp");
                    writeRGBBMP(filename_1, image_1);
                }
                else if ( x == "3")
                {
                    char filename[100];
                    cout << "Enter the image name :";
                    cin >> filename;
                    strcat (filename, ".bmp");
                    readRGBBMP(filename,  image_1);
                    char filename_2[100];
                    cout << "Enter the image name :";
                    cin >> filename_2;
                    strcat (filename_2, ".bmp");
                    readRGBBMP(filename_2,  image_2);

                    Filter_3_bonus();

                    char filename_1[100];
                    cout << "Enter the target image file name: ";
                    cin >> filename_1;
                    strcat (filename_1, ".bmp");
                    writeRGBBMP(filename_1, image_1);

                }
                else if ( x == "4")
                {
                    char filename[100];
                    cout << "Enter the image name :";
                    cin >> filename;
                    strcat (filename, ".bmp");
                    readRGBBMP(filename,  image_1);

                    Filter_4_bonus();

                    char filename_1[100];
                    cout << "Enter the target image file name: ";
                    cin >> filename_1;
                    strcat (filename_1, ".bmp");
                    writeRGBBMP(filename_1, image_2);


                }
                else if ( x == "5")
                {

                    char filename[100];
                    cout << "Enter the image name :";
                    cin >> filename;
                    strcat (filename, ".bmp");
                    readRGBBMP(filename,  image_1);

                    Filter_5_bonus();

                    char filename_1[100];
                    cout << "Enter the target image file name: ";
                    cin >> filename_1;
                    strcat (filename_1, ".bmp");
                    writeRGBBMP(filename_1, image_2);

                }
                else if ( x == "6")
                {

                    char filename[100];
                    cout << "Enter the image name :";
                    cin >> filename;
                    strcat (filename, ".bmp");
                    readRGBBMP(filename,  image_1);

                    Filter_6_bonus();

                    char filename_1[100];
                    cout << "Enter the target image file name: ";
                    cin >> filename_1;
                    strcat (filename_1, ".bmp");
                    writeRGBBMP(filename_1, image_1);

                }
                else if ( x == "7")
                {

                    char filename[100];
                    cout << "Enter the image name :";
                    cin >> filename;
                    strcat (filename, ".bmp");
                    readRGBBMP(filename,  image_1);

                    Filter_7_bonus();

                    char filename_1[100];
                    cout << "Enter the target image file name: ";
                    cin >> filename_1;
                    strcat (filename_1, ".bmp");
                    writeRGBBMP(filename_1, image_2);

                }
                else if ( x == "8")
                {

                    char filename[100];
                    cout << "Enter the image name :";
                    cin >> filename;
                    strcat (filename, ".bmp");
                    readRGBBMP(filename,  image_1);

                    Filter_8_bonus();

                    char filename_1[100];
                    cout << "Enter the target image file name: ";
                    cin >> filename_1;
                    strcat (filename_1, ".bmp");
                    writeRGBBMP(filename_1, image_2);

                }
                else if ( x == "9")
                {

                    char filename[100];
                    cout << "Enter the image name :";
                    cin >> filename;
                    strcat (filename, ".bmp");
                    readRGBBMP(filename,  image_1);

                    Filter_9_bonus();

                    char filename_1[100];
                    cout << "Enter the target image file name: ";
                    cin >> filename_1;
                    strcat (filename_1, ".bmp");
                    writeRGBBMP(filename_1, image_2);
                }
                else if ( x == "0")
                {
                    break;
                }
                else
                    continue;
            }
        }
        else
        {
            cout << ">>>";
            cin >> num;
        }
    }
}



//_________________________________________
void loadImage ()
{
    char imageFileName[100];

    // Get gray scale image file name
    cin >> imageFileName;

    // Add to it .bmp extension and load image
    strcat (imageFileName, ".bmp");
    readGSBMP(imageFileName, image);
    /////////////////////////////////////
}


//_________________________________________
void loadImage_2 ()
{
    char imageFileName2[100];

    // Get gray scale image file name
    cout << "Enter Name Of The second image :";
    cin >> imageFileName2;

    // Add to it .bmp extension and load image
    strcat (imageFileName2, ".bmp");
    readGSBMP(imageFileName2, image2);
    /////////////////////////////////////
}

//______________________________________


//_________________________________________
void saveImage ()
{
    char imageFileName[100];

    // Get gray scale image target file name
    cout << "Enter the target image file name: ";
    cin >> imageFileName;

    // Add to it .bmp extension and load image
    strcat (imageFileName, ".bmp");
    writeGSBMP(imageFileName, image);
}

//_________________________________________


void Filter_1()
{
    int sum = 0, avg;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j< SIZE; j++)
        {
            sum += image[i][j];
        }
    }
    avg = sum/(SIZE*SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j< SIZE; j++)
        {
            if(image[i][j] > avg)
                image[i][j] = 255;
            else
                image[i][j] = 0;
        }
    }
}

//_______________________________________
void Filter_2()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            image[i][j] = 255 - image[i][j];
        }
    }
}


void Filter_3()
{
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j< SIZE; j++)
        {
            image[i][j]=((image[i][j]+32)+(image2[i][j]+32))/2;
        }
    }

}
//_________________________________________
void Filter_4()
{
    cout << " press (h) to flip horizontally , (v) to flip vertically " ;
    string y = "";
    cin.ignore();
    cin >> y ;
    if (y=="v")
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j< SIZE; j++)
            {
                if (i<SIZE/2)
                    image2[i][j]=image[255-i][255-j] ;

                else
                    image2[i][j]=image[255-i][255-j];
            }
        }
    }
    else if (y=="h")
    {
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j< SIZE; j++)
            {
                if (j<SIZE/2)
                    image2[j][i]=image[j][255-i] ;

                else
                    image2[j][i]=image[j][255-i];
            }
        }
    }
    for ( int i = 0 ; i < SIZE ; i++)
    {
        for ( int j = 0 ; j < SIZE ; j++)
        {
            image[i][j] = image2[i][j];
        }
    }
}


//_________________________________________


void Filter_5()
{
    char x ;
    cout << "\n 1- To Rotate image 90 degree .\n 2- To Rotate image 180 degree .\n 3- To Rotate image 270 degree .";
    cout << "\n\n>>>";
    cin >> x ;
    if ( x == '1')
    {
        int x = 0 ;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j< SIZE; j++)
            {
                image2[j][SIZE - i]=image[i][j];
            }
        }
    }
    else if ( x == '2')
    {
        int x = 0 ;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j< SIZE; j++)
            {
                image2[i][j]=image[SIZE - x][SIZE - j];
            }
            x++;
        }
    }

    else if ( x == '3')
    {
        int x = 0;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j< SIZE; j++)
            {
                image2[SIZE - j][i]=image[i][j];
            }
        }

    }

    for ( int i = 0 ; i < SIZE ; i++)
    {
        for ( int j = 0 ; j < SIZE ; j++)
        {
            image[i][j] = image2[i][j];
        }
    }


}

void Filter_6()
{
    char x ;
    cout << "1- If you want Dark Image .\n2- If you want light Image .";
    cout <<"\n>>>";
    cin >> x;
    if ( x == '1')
    {
        for ( int i = 0 ; i < SIZE ; i++)
        {
            for (int j = 0 ; j < SIZE ; j++)
            {
                image2[i][j] = image[i][j] /2;
            }
        }
    }
    else if ( x == '2')
    {

        for ( int i = 0 ; i < SIZE ; i++)
        {
            for (int j = 0 ; j < SIZE ; j++)
            {
                if ((image[i][j] + 50 ) <= 255)
                    image2[i][j] = image[i][j] +(50);
            }

        }

    }
    for ( int i = 0 ; i < SIZE ; i++)
    {
        for ( int j = 0 ; j < SIZE ; j++)
        {
            image[i][j] = image2[i][j];
        }
    }

}

void Filter_7()
{
    int sum = 0, avg;
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j< SIZE; j++)
        {
            sum += image[i][j];
        }
    }
    avg = sum/(SIZE*SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j< SIZE; j++)
        {
            if(image[i][j] > avg)
                image[i][j] = 255;
            else
                image [i][j] = 0;
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j< SIZE; j++)
        {
            if (image[i-1][j] != image[i+1][j] || image[i][j-1] != image[i][j+1] )
                image2[i][j]=0;
            else
                image2[i][j]=255;

        }
    }
    for ( int i = 0 ; i < SIZE ; i++)
    {
        for ( int j = 0 ; j < SIZE ; j++)
        {
            image[i][j] = image2[i][j];
        }
    }
}




void Filter_8()
{
    char x ;
    cout << "1- if you want quarters one .\n2- if you want quarters two .\n3- if you want quarters three .\n4- if you want quarters four .";
    cout << "\n>>>";
    cin >> x ;
    if ( x == '1')
    {
        int rows = 0, cols = 0 ;
        for ( int i = 0 ; i <SIZE ; i+=2)
        {
            for ( int j = 0 ; j< SIZE ; j+=2)
            {
                image2[i][j] =image[rows][cols];
                image2[i+1][j] =image[rows][cols];
                image2[i][j+1] =image[rows][cols];
                image2[i+1][j+1] =image[rows][cols];
                cols++;
            }
            rows++;
            cols=0;
        }
    }
    else if (x == '2')
    {
        int rows = 0, cols = SIZE/2 ;
        for ( int i = 0 ; i <SIZE ; i+=2)
        {
            for ( int j = 0 ; j< SIZE ; j+=2)
            {
                image2[i][j] =image[rows][cols];
                image2[i+1][j] =image[rows][cols];
                image2[i][j+1] =image[rows][cols];
                image2[i+1][j+1] =image[rows][cols];
                cols++;
            }
            rows++;
            cols=SIZE/2;
        }
    }
    else if(x == '3')
    {
        int rows = SIZE/2, cols = 0 ;
        for ( int i = 0 ; i <SIZE ; i+=2)
        {
            for ( int j = 0 ; j< SIZE ; j+=2)
            {
                image2[i][j] =image[rows][cols];
                image2[i+1][j] =image[rows][cols];
                image2[i][j+1] =image[rows][cols];
                image2[i+1][j+1] =image[rows][cols];
                cols++;
            }
            rows++;
            cols=0;
        }
    }
    else if (x == '4')
    {
        int rows = SIZE/2, cols = SIZE/2 ;
        for ( int i = 0 ; i <SIZE ; i+=2)
        {
            for ( int j = 0 ; j< SIZE ; j+=2)
            {
                image2[i][j] =image[rows][cols];
                image2[i+1][j] =image[rows][cols];
                image2[i][j+1] =image[rows][cols];
                image2[i+1][j+1] =image[rows][cols];
                cols++;
            }
            rows++;
            cols=SIZE/2;
        }
    }
    for ( int i = 0 ; i < SIZE ; i++)
    {
        for ( int j = 0 ; j < SIZE ; j++)
        {
            image[i][j] = image2[i][j];
        }
    }
}

void Filter_9()
{
    char x ;
    cout << "1- if you want 1/2 from original image .\n2- if you want 1/3 from original image .\n3- if you want 1/4 from original image .";
    cout <<"\n>>>";
    cin >> x ;
    if ( x == '1')
    {
        for ( int i = 0 ; i < SIZE ; i++)
        {
            for ( int j = 0 ; j < SIZE ; j++)
            {
                image[i/2][j/2]=((image[i][j]+ image[i+1][j]+ image[i][j+1]+ image[i+1][j+1])/4);
                image[i][j]=255;
            }
        }
    }
    else if ( x == '2' )
    {
        for ( int i = 0 ; i < SIZE ; i++)
        {
            for ( int j = 0 ; j < SIZE ; j++)
            {
                image[i/3][j/3]=((image[i][j]+ image[i+1][j]+ image[i][j+1]+ image[i+1][j+1])/4);
                image[i][j]=255;
            }
        }
    }
    else if ( x == '3' )
    {
        for ( int i = 0 ; i < SIZE ; i++)
        {
            for ( int j = 0 ; j < SIZE ; j++)
            {
                image[i/4][j/4]=((image[i][j]+ image[i+1][j]+ image[i][j+1]+ image[i+1][j+1])/4);
                image[i][j]=255;

            }
        }
    }
}

void Filter_a()
{
    char x ;
    cout << "1- Repeat Upper 1/2 from image .\n2- Repeat lower 1/2 from image ."
         << "\n3- Repeat left 1/2 from image .\n4- Repeat Right 1/2 from image ."
         <<"\n>>>";
    cin >> x ;
    if ( x == '1')
    {
        for ( int i = 0 ; i < SIZE / 2 ; i++)
        {
            for ( int j = 0 ; j < SIZE ; j++)
            {
                image2[i][j] = image[i][j];
                image2[SIZE - i][j] = image[i][j];
            }
        }
    }
    else if ( x == '2')
    {
        for ( int i = SIZE / 2 ; i < SIZE ; i++)
        {
            for ( int j = 0 ; j < SIZE ; j++)
            {
                image2[i][j] = image[i][j];
                image2[SIZE - i][j] = image[i][j];
            }
        }
    }
    else if ( x == '3')
    {
        for ( int i = 0 ; i < SIZE ; i++)
        {
            for ( int j = 0 ; j < (SIZE / 2)+1 ; j++)
            {
                image2[i][j] = image[i][j];
                image2[i][SIZE - j] = image[i][j];
            }
        }
    }
    else if ( x == '4')
    {
        for ( int i = 0 ; i < SIZE ; i++)
        {
            for ( int j = SIZE / 2 ; j < SIZE ; j++)
            {
                image2[i][j] = image[i][j];
                image2[i][SIZE - j] = image[i][j];
            }
        }
    }
    for ( int i = 0 ; i < SIZE ; i++)
    {
        for ( int j = 0 ; j < SIZE ; j++)
        {
            image[i][j] = image2[i][j];
        }
    }
}


void Filter_b()
{
    int q, c1, c2, r1, r2, row = 0, col = 0, temp1, temp2;
    for(int n = 1; n <= 4; ++n)
    {
        cin >> q;
        if (q == 1)
        {
            r1 = 0;
            r2 = SIZE/2;
            c1 = 0;
            c2 = SIZE/2;
        }
        else if (q == 2)
        {
            r1 = 0;
            r2 = SIZE/2;
            c1 = SIZE/2;
            c2 = SIZE;
        }
        else if (q == 3)
        {
            r1 = SIZE/2;
            r2 = SIZE;
            c1 = 0;
            c2 = SIZE/2;
        }
        else if (q == 4)
        {
            r1 = SIZE/2;
            r2 = SIZE;
            c1 = SIZE/2;
            c2 = SIZE;

        }
        if (n == 1 || n == 2)
            row = 0;
        else
            row = SIZE/2;
        if (n == 1 || n == 3)
            temp1 = 0;
        else
            temp1 = SIZE/2;
        for (int i = r1; i < r2; i++)
        {
            for (int j = c1; j < c2 ; j++)
            {
                image2[row][col]=image[i][j];
                ++col;

            }
            col = temp1;
            ++row;
        }
    }
    for ( int i = 0 ; i < SIZE ; i++)
    {
        for ( int j = 0 ; j < SIZE ; j++)
        {
            image[i][j] = image2[i][j];
        }
    }
}



void Filter_c()
{
    for ( int i = 0 ; i < SIZE ; i++)
    {
        for ( int j = 0 ; j < SIZE ; j++)
        {
            image2[i][j]=( image[i-1][j-1]+image[i-1][j]+image[i-1][j+1]+image[1][j-1]+image[i][j]+image[i][j+1]+image[i+1][j-1]+image[i+1][j]+image[i+1][j+1])/ 12;
        }
    }
    for ( int i = 0 ; i < SIZE ; i++)
    {
        for ( int j = 0 ; j < SIZE ; j++)
        {
            image[i][j] = image2[i][j];
        }
    }
}

void Filter_1_bonus()
{
    for(int i=0 ; i<SIZE ; i++)
    {
        for(int j=0 ; j<SIZE ; j++)
        {
            if ((image_1[i][j][0]+image_1[i][j][1]+image_1[i][j][2])/ 3 >= 127)
            {
                image_1[i][j][0]=255;
                image_1[i][j][1]=255;
                image_1[i][j][2]=255;
            }
            else
            {
                image_1[i][j][0]=0;
                image_1[i][j][1]=0;
                image_1[i][j][2]=0;
            }
        }
    }z

}
void Filter_2_bonus()
{
    for(int i=0 ; i < SIZE ; i++)
    {
        for(int j=0 ; j < SIZE ; j++)
        {
            image_1[i][j][0] = 255 - image_1[i][j][0];
            image_1[i][j][1] = 255 - image_1[i][j][1];
            image_1[i][j][2] = 255 - image_1[i][j][2];
        }
    }

}
void Filter_3_bonus()
{
    for(int i=0 ; i < SIZE ; i++)
    {
        for(int j=0 ; j < SIZE ; j++)
        {
            image_1[i][j][0] = (image_1[i][j][0] + image_2[i][j][0])/2;
            image_1[i][j][1] = (image_1[i][j][1] + image_2[i][j][1])/2;
            image_1[i][j][2] = (image_1[i][j][2] + image_2[i][j][2])/2;
        }
    }
}

void Filter_4_bonus()
{
    char z ;
    cout << "\n1- To Get Right Inverse Image . \n2- To Get Rotate Image (180 Degree).\n>>>";
    cin >> z ;
    if (z == '1')
    {
        for(int i=0 ; i < SIZE ; i++)
        {
            for(int j=0 ; j < SIZE ; j++)
            {
                image_2[i][j][0] = image_1[i][SIZE - j][0];
                image_2[i][j][1] = image_1[i][SIZE - j][1] ;
                image_2[i][j][2] = image_1[i][SIZE - j][2] ;
            }
        }

    }
    else if ( z == '2')
    {
        int x = 0 ;
        for(int i=0 ; i < SIZE ; i++)
        {
            for(int j=0 ; j < SIZE ; j++)
            {
                image_2[i][j][0] = image_1[SIZE - x][j][0];
                image_2[i][j][1] = image_1[SIZE - x][j][1] ;
                image_2[i][j][2] = image_1[SIZE - x][j][2] ;
            }
            x++;
        }
    }

}

void Filter_5_bonus()
{
    char z ;
    cout << "\n 1- To Rotate image 90 degree .\n 2- To Rotate image 180 degree .\n 3- To Rotate image 270 degree .\n>>>";
    cin >> z ;
    if ( z == '1')
    {
        for(int i=0 ; i < SIZE ; i++)
        {
            for(int j=0 ; j < SIZE ; j++)
            {
                image_2[j][SIZE - i][0] = image_1[i][j][0];
                image_2[j][SIZE - i][1] = image_1[i][j][1];
                image_2[j][SIZE - i][2] = image_1[i][j][2];
            }
        }
    }
    else if ( z == '2')
    {
        int x = 0 ;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j< SIZE; j++)
            {
                image_2[i][j][0]=image_1[SIZE - x][SIZE - j][0];
                image_2[i][j][1]=image_1[SIZE - x][SIZE - j][1];
                image_2[i][j][2]=image_1[SIZE - x][SIZE - j][2];
            }
            x++;
        }
    }

    else if ( z == '3')
    {
        int x = 0;
        for (int i = 0; i < SIZE; i++)
        {
            for (int j = 0; j< SIZE; j++)
            {
                image_2[SIZE - j][i][0]=image_1[i][j][0];
                image_2[SIZE - j][i][1]=image_1[i][j][1];
                image_2[SIZE - j][i][2]=image_1[i][j][2];
            }
        }

    }


}
void Filter_6_bonus()
{
    char z ;
    cout << "1- If you want Dark Image .\n2- If you want light Image .\n>>>";
    cin >> z ;
    if ( z == '1')
    {
        for(int i=0 ; i < SIZE ; i++)
        {
            for(int j=0 ; j < SIZE ; j++)
            {
                image_1[i][j][0] = image_1[i][j][0] /2;
                image_1[i][j][1] = image_1[i][j][1] /2;
                image_1[i][j][2] = image_1[i][j][2]/2;
            }
        }
    }
    else if ( z == '2')
    {
        for(int i=0 ; i < SIZE ; i++)
        {
            for(int j=0 ; j < SIZE ; j++)
            {
                if ( (image_1[i][j][0] + 50 ) && (image_1[i][j][1] + 50) && (image_1[i][j][2] + 50))
                {
                    image_1[i][j][0] = image_1[i][j][0]  + 50 ;
                    image_1[i][j][1] = image_1[i][j][1]  + 50 ;
                    image_1[i][j][2] = image_1[i][j][2]  + 50 ;
                }

            }
        }
    }

}
void Filter_7_bonus()
{
    for ( int i = 0 ; i < SIZE ; i++)
    {
        for (int j = 0 ; j < SIZE ;  j++)
        {
            if ((image_1[i][j][0] && image_1[i][j][1] && image_1[i][j][2])> 128 )
            {
                image_2[i][j][0] = 255;
                image_2[i][j][1] = 255;
                image_2[i][j][2] = 255;
            }
            else
            {
                image_2[i][j][0] = 0;
                image_2[i][j][1] = 0;
                image_2[i][j][2] = 0;
            }

        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j< SIZE; j++)
        {
            if (
                    (image_1[i-1][j][0] != image_1[i+1][j][0] || image_1[i][j-1][0] != image_1[i][j+1][0]) &&
                     (image_1[i-1][j][1] != image_1[i+1][j][1] || image_1[i][j-1][1] != image_1[i][j+1][1]) &&
                    (image_1[i-1][j][2] != image_1[i+1][j][2] || image_1[i][j-1][2] != image_1[i][j+1][2])
                )
                  {
                      image_2[i][j][0]=0;
                      image_2[i][j][1]=0;
                      image_2[i][j][2]=0;
                  }
            else
            {
                image_2[i][j][0]=255;
                image_2[i][j][1]=255;
                image_2[i][j][2]=255;
            }

        }
    }
}
void Filter_8_bonus()
{
    char x ;
    cout << "1- if you want quarters one .\n2- if you want quarters two .\n3- if you want quarters three .\n4- if you want quarters four .";
    cout << "\n>>>";
    cin >> x ;
    if ( x == '1')
    {
        int rows = 0, cols = 0 ;
        for ( int i = 0 ; i <SIZE ; i+=2)
        {
            for ( int j = 0 ; j< SIZE ; j+=2)
            {
                image_2[i][j][0] =image_1[rows][cols][0];
                image_2[i+1][j][0] =image_1[rows][cols][0];
                image_2[i][j+1][0] =image_1[rows][cols][0];
                image_2[i+1][j+1][0] =image_1[rows][cols][0];



                image_2[i][j][1] =image_1[rows][cols][1];
                image_2[i+1][j][1] =image_1[rows][cols][1];
                image_2[i][j+1][1] =image_1[rows][cols][1];
                image_2[i+1][j+1][1] =image_1[rows][cols][1];


                image_2[i][j][2] =image_1[rows][cols][2];
                image_2[i+1][j][2] =image_1[rows][cols][2];
                image_2[i][j+1][2] =image_1[rows][cols][2];
                image_2[i+1][j+1][2] =image_1[rows][cols][2];

                cols++;
            }
            rows++;
            cols=0;
        }
    }
    else if (x == '2')
    {
        int rows = 0, cols = SIZE/2 ;
        for ( int i = 0 ; i <SIZE ; i+=2)
        {
            for ( int j = 0 ; j< SIZE ; j+=2)
            {
                image_2[i][j][0] =image_1[rows][cols][0];
                image_2[i+1][j][0] =image_1[rows][cols][0];
                image_2[i][j+1][0] =image_1[rows][cols][0];
                image_2[i+1][j+1][0] =image_1[rows][cols][0];



                image_2[i][j][1] =image_1[rows][cols][1];
                image_2[i+1][j][1] =image_1[rows][cols][1];
                image_2[i][j+1][1] =image_1[rows][cols][1];
                image_2[i+1][j+1][1] =image_1[rows][cols][1];


                image_2[i][j][2] =image_1[rows][cols][2];
                image_2[i+1][j][2] =image_1[rows][cols][2];
                image_2[i][j+1][2] =image_1[rows][cols][2];
                image_2[i+1][j+1][2] =image_1[rows][cols][2];

                cols++;
            }
            rows++;
            cols=SIZE/2;
        }
    }
    else if(x == '3')
    {
        int rows = SIZE/2, cols = 0 ;
        for ( int i = 0 ; i <SIZE ; i+=2)
        {
            for ( int j = 0 ; j< SIZE ; j+=2)
            {
                image_2[i][j][0] =image_1[rows][cols][0];
                image_2[i+1][j][0] =image_1[rows][cols][0];
                image_2[i][j+1][0] =image_1[rows][cols][0];
                image_2[i+1][j+1][0] =image_1[rows][cols][0];



                image_2[i][j][1] =image_1[rows][cols][1];
                image_2[i+1][j][1] =image_1[rows][cols][1];
                image_2[i][j+1][1] =image_1[rows][cols][1];
                image_2[i+1][j+1][1] =image_1[rows][cols][1];


                image_2[i][j][2] =image_1[rows][cols][2];
                image_2[i+1][j][2] =image_1[rows][cols][2];
                image_2[i][j+1][2] =image_1[rows][cols][2];
                image_2[i+1][j+1][2] =image_1[rows][cols][2];

                cols++;
            }
            rows++;
            cols=0;
        }
    }
    else if (x == '4')
    {
        int rows = SIZE/2, cols = SIZE/2 ;
        for ( int i = 0 ; i <SIZE ; i+=2)
        {
            for ( int j = 0 ; j< SIZE ; j+=2)
            {
                image_2[i][j][0] =image_1[rows][cols][0];
                image_2[i+1][j][0] =image_1[rows][cols][0];
                image_2[i][j+1][0] =image_1[rows][cols][0];
                image_2[i+1][j+1][0] =image_1[rows][cols][0];



                image_2[i][j][1] =image_1[rows][cols][1];
                image_2[i+1][j][1] =image_1[rows][cols][1];
                image_2[i][j+1][1] =image_1[rows][cols][1];
                image_2[i+1][j+1][1] =image_1[rows][cols][1];


                image_2[i][j][2] =image_1[rows][cols][2];
                image_2[i+1][j][2] =image_1[rows][cols][2];
                image_2[i][j+1][2] =image_1[rows][cols][2];
                image_2[i+1][j+1][2] =image_1[rows][cols][2];

                cols++;
            }
            rows++;
            cols=SIZE/2;
        }
    }
}

void Filter_9_bonus()
{
    char x ;
    cout << "1- if you want 1/2 from original image .\n2- if you want 1/3 from original image .\n3- if you want 1/4 from original image .";
    cout <<"\n>>>";
    cin >> x ;
    if ( x == '1')
    {
        for ( int i = 0 ; i < SIZE ; i++)
        {
            for ( int j = 0 ; j < SIZE ; j++)
            {
                image_2[i/2][j/2][0]=((image_1[i][j][0]+ image_1[i+1][j][0]+ image_1[i][j+1][0]+ image_1[i+1][j+1][0])/4);
                image_2[i/2][j/2][1]=((image_1[i][j][1]+ image_1[i+1][j][1]+ image_1[i][j+1][1]+ image_1[i+1][j+1][1])/4);
                image_2[i/2][j/2][2]=((image_1[i][j][2]+ image_1[i+1][j][2]+ image_1[i][j+1][2]+ image_1[i+1][j+1][2])/4);
                image_2[i][j][0]=255;
                image_2[i][j][1]=255;
                image_2[i][j][1]=255;
            }
        }
    }
    else if ( x == '2' )
    {
        for ( int i = 0 ; i < SIZE  ; i++)
        {
            for ( int j = 0 ; j < SIZE ; j++)
            {
                image_2[i/3][j/3][0]=((image_1[i][j][0]+ image_1[i+1][j][0]+ image_1[i][j+1][0]+ image_1[i+1][j+1][0])/4);
                image_2[i/3][j/3][1]=((image_1[i][j][1]+ image_1[i+1][j][1]+ image_1[i][j+1][1]+ image_1[i+1][j+1][1])/4);
                image_2[i/3][j/3][2]=((image_1[i][j][2]+ image_1[i+1][j][2]+ image_1[i][j+1][2]+ image_1[i+1][j+1][2])/4);
                image_2[i][j][0]=255;
                image_2[i][j][1]=255;
                image_2[i][j][1]=255;
            }
        }
    }
    else if ( x == '3' )
    {
        for ( int i = 0 ; i < SIZE ; i++)
        {
            for ( int j = 0 ; j < SIZE ; j++)
            {
                image_2[i/4][j/4][0]=((image_1[i][j][0]+ image_1[i+1][j][0]+ image_1[i][j+1][0]+ image_1[i+1][j+1][0])/4);
                image_2[i/4][j/4][1]=((image_1[i][j][1]+ image_1[i+1][j][1]+ image_1[i][j+1][1]+ image_1[i+1][j+1][1])/4);
                image_2[i/4][j/4][2]=((image_1[i][j][2]+ image_1[i+1][j][2]+ image_1[i][j+1][2]+ image_1[i+1][j+1][2])/4);
                image_2[i][j][0]=255;
                image_2[i][j][1]=255;
                image_2[i][j][1]=255;
            }
        }
    }
}
