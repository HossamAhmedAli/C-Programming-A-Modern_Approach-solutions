    #include <stdio.h>
    typedef unsigned short uint16;
    typedef short sint16;
    uint16 GCD(sint16,sint16);
    int main()
    {
        uint16 Num1;
        uint16 Num2;
        uint16 GCD_rec;
        printf("Enter a fraction:");
        scanf("%hd/%hd", &Num1, &Num2);
        GCD_rec=GCD(Num1,Num2);
        printf("In lowest terms: %hd/%hd",Num1/GCD_rec, Num2/GCD_rec );

        return 0;
    }
    uint16 GCD(sint16 num_1,sint16 num_2)
    {
        uint16 ret_GCD=1;
        uint16 i;
        for( i=1; i<= num_1 && i<=num_2; i++)
        {
            if( (num_1%i == 0) && (num_2%i == 0)) ret_GCD=i;
        }
        return ret_GCD;
    }
