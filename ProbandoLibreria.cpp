#include <cstdio>
#include "bitmap_image.hpp"
#include <fstream>
#include <string>


int main()
{
   bitmap_image image("simple.bmp");
   int i=0,c=0, j=0, X=0, Y=0;
   std::string st, add,s;
   if (!image)
   {+
      printf("Error - Failed to open: input.bmp\n");
      return 1;
   }
    std::fstream fs;

   unsigned int total_number_of_pixels = 0;
unsigned int cordenadaX=0;
unsigned int cordenadaY=0;
   const unsigned int height = image.height();
   const unsigned int width  = image.width();
   fs.open ("MazeEntradaSalida.txt", std::fstream::in | std::fstream::out | std::fstream::app);
   fs<<height<<" "<<width<<"\n"<<"\n";
   j=0;
for (std::size_t y = 0; y < height; ++y ){
   /* code */

        for (std::size_t x = 0; x < width; ++x)
      {

         rgb_t colour;
         cordenadaX= x;
         cordenadaY= y;

         image.get_pixel(x, y, colour);
//   printf(" X: %d ", cordenadaX);
  //    printf(" Y : %d\n", cordenadaY);


        if (colour.blue >=+ 111){// lee color blanco ? rojo?
          fs << "p";// acepta que hay color blanco porque contiene todos los colores. negro ausencia de color.
          /* code */
      }else{
        if (x==1 and y==1){
          fs << "e";
        }
        else if (x==510 and y==510/* condition */) {
          /* code */fs << "s";
        }
        else{
          fs << "l";
        }  {

        //   acepta que hay color blanco porque contiene todos los colores. negro ausencia de color.

        }
        /* code */
      }


        //total_number_of_pixels++;

      i++;

      }
      fs<<"\n";

      j++;
  }
   fs.close();

   printf("Done! >= 111: %d\n",total_number_of_pixels);
   printf("%d\n", i );
   printf("%d\n", j );

   return 0;
}
/*

void Derecha(int i , int j , int Wall) {

  for (size_t x = i; x < 512; x++) {
    if (caracter='1') {

      break;
      /* code
    }
     code
  }
}
*/
