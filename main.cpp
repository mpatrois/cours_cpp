#include <stdio.h>
#include "Piece.h"
using namespace std;

int main( int argc, const char* argv[] )
{
	printf( "\nHello Worldsd\n\n" );
    Piece p = Piece(1,2);

    printf("%d" ,p.getX() );
    
}
