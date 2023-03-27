# inclure  " main.h "
# inclure  < stdio.h >

/* *
* principal - vérifiez le code
*
* Retour : toujours 0.
 */
int  principal ( vide )
{
    int n ;

    n = 402 ;
    printf ( " n= %d \n " , n);
    reset_to_98 (&n);
    printf ( " n= %d \n " , n);
    retour ( 0 );
}
