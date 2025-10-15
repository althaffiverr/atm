{
    int choice,depo,with,balance=0,cont,mini[10],i=0;
    for(;;){
        printf("1:deposit\n2:withdraw\n3:balance\n4:mini statement\nplease enter your choice\n");
        scanf("%d",&choice);
        switch (choice){
            case 1:
            printf("enter the amount for deposit\n");
            scanf("%d",&depo);
            balance=balance+depo;
            mini[i]=depo;
            i++;
            printf("the amount has been deposited\n");
            break;
            case 2:
            printf("enter the amount you want to withdraw\n");
            scanf("%d",&with);
            balance=balance-with;
            mini[i]=with;
            i++;
            printf("the amount has been withdrawed\n");
            break;
            case 3:
            printf("your available balance is %d\n",balance);
            break;
            case 4:
            printf("you min satement\n");
            for(i=0;i<10;i++){
                printf("%d",mini[i]);
                printf("\n");
            }
        }
        printf("do you want continue\nif yes press 1\nif not press 2\n");
        scanf("%d",&cont);
        if(cont==2){
            break;
        }
    }
    
}
