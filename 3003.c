#include <stdio.h>
int main () {
    int king=1, queen=1, rook=2, bishop=2, pawn=8, knight=2;
    int d_king, d_queen, d_rook, d_bishop, d_pawn, d_knight;
    scanf("%d %d %d %d %d %d" , &d_king, &d_queen, &d_rook, &d_bishop, &d_knight, &d_pawn);
    printf("%d %d %d %d %d %d", king-d_king, queen-d_queen, rook-d_rook, bishop-d_bishop, knight-d_knight, pawn-d_pawn);
}