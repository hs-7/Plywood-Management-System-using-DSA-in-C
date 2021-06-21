#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>

struct Plywood
{
    int ID,is_code,height,width,thickness,quantity,price;                           
	char Brand[45],Grade[5],Type[15],Mfg_Date[11],Info[100];
    struct Plywood *next;
};
struct Plywood *new_Plywood,*ptr,*start;

struct Plywood *create_ll(struct Plywood *start)
{
    int s_ID,s_is,s_h,s_w,s_tk,s_p,s_q;
	char s_grade[5],s_type[15],s_brand[45],s_date[11],s_Info[100], *p, s[100];

    printf("\n Enter the ID- ");
	fflush(stdin);
		while(fgets(s, sizeof(s), stdin)){ s_ID = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic ID: ");} else break;}
	ptr=start;
		while(ptr!=NULL)
		{
			if(ptr->ID==s_ID)
			{
				printf("Plywood with ID %d already exists!\n", s_ID);
				return start;
			}
			ptr=ptr->next;
		}
	printf(" Enter the Brand- ");
	fflush(stdin);
    scanf("%s",&s_brand);
	printf(" Enter the IS_Code- ");
	fflush(stdin);
		while(fgets(s, sizeof(s), stdin)){ s_is = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic IS_Code: ");} else break;}
	printf(" Enter the Height(ft)- ");
	fflush(stdin);
		while(fgets(s, sizeof(s), stdin)){ s_h = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic Height(ft): ");} else break;}
	printf(" Enter the Width(ft)- ");
	fflush(stdin);
		while(fgets(s, sizeof(s), stdin)){ s_w = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic Width(ft): ");} else break;}
	printf(" Enter the Thickness(mm)- ");
	fflush(stdin);
		while(fgets(s, sizeof(s), stdin)){ s_tk = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic Thickness(mm): ");} else break;}
	printf(" Enter the Grade- ");
	fflush(stdin);
    scanf("%s",&s_grade);
	printf(" Enter the Type- ");
	fflush(stdin);
    scanf("%s",&s_type);
    printf(" Enter the Price- ");
	fflush(stdin);
		while(fgets(s, sizeof(s), stdin)){ s_p = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic Price: ");} else break;}
	printf(" Enter the Quantity- ");
	fflush(stdin);
		while(fgets(s, sizeof(s), stdin)){ s_q = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic Quantity: ");} else break;}
	printf(" Enter the Mfg_Date- ");
	fflush(stdin);
    scanf("%s",&s_date);
	
    while(s_ID!=-1)
    {
		new_Plywood = (struct Plywood*)malloc(sizeof(struct Plywood));
        new_Plywood -> ID = s_ID;
		new_Plywood -> is_code = s_is;
		new_Plywood -> height = s_h;
		new_Plywood -> width = s_w;
		new_Plywood -> thickness = s_tk;
		new_Plywood -> price = s_p;
		new_Plywood -> quantity = s_q;
		strcpy(new_Plywood -> Grade,s_grade);
		strcpy(new_Plywood -> Type,s_type);
		strcpy(new_Plywood -> Brand,s_brand);
		strcpy(new_Plywood -> Mfg_Date,s_date);
		strcpy(new_Plywood -> Info,"");
		
		if(start==NULL)
        {
            new_Plywood -> next = NULL;
            start = new_Plywood;
        }
        else
        {
            ptr = start;
            while(ptr->next!=NULL)
                ptr=ptr->next;
            ptr->next=new_Plywood;
            new_Plywood->next=NULL;
		}
		printf("Plywood with ID %d Added Successfully\n",new_Plywood -> ID);
		printf("\n Enter -1 to end or\n Enter ID to add more- ");
		while(fgets(s, sizeof(s), stdin)){ s_ID = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic ID: ");} else break;}
			while(ptr!=NULL)
			{
				if(ptr->ID==s_ID)
				{
					printf("Plywood with ID %d already exists\n", s_ID);
					return start;
				}
				ptr=ptr->next;
			}
			if(s_ID!=-1)
			{
					printf(" Enter the Brand- ");
					fflush(stdin);
					scanf("%s",&s_brand);
					printf(" Enter the IS_Code- ");
					fflush(stdin);
						while(fgets(s, sizeof(s), stdin)){ s_is = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic IS_Code: ");} else break;}
					printf(" Enter the Height(ft)- ");
					fflush(stdin);
						while(fgets(s, sizeof(s), stdin)){ s_h = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic Height(ft): ");} else break;}
					printf(" Enter the Width(ft)- ");
					fflush(stdin);
						while(fgets(s, sizeof(s), stdin)){ s_w = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic Width(ft): ");} else break;}
					printf(" Enter the Thickness(mm)- : ");
					fflush(stdin);
						while(fgets(s, sizeof(s), stdin)){ s_tk = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic Thickness(mm): ");} else break;}
					printf(" Enter the Price- ");
					fflush(stdin);
						while(fgets(s, sizeof(s), stdin)){ s_p = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic Price: ");} else break;}
					printf(" Enter the Quantity- ");
					fflush(stdin);
						while(fgets(s, sizeof(s), stdin)){ s_q = strtol(s, &p, 10); if(p == s || *p != '\n'){ printf("  Enter Numberic Quantity: ");} else break;}
					printf(" Enter the Grade- ");
					fflush(stdin);
					scanf("%s",&s_grade);
					printf(" Enter the Type- ");
					fflush(stdin);
					scanf("%s",&s_type);
					printf(" Enter the Mfg_Date- ");
					fflush(stdin);
					scanf("%s",&s_date);
			}
	}
    return start;
}


struct Plywood *EnterInfoAboutPlywood(struct Plywood *start)
{
	ptr=start;
	int s_idd,flag=0,c;
	char info[100];
	printf("Enter ID of the plywood you want to Review or include Info- ");
	fflush(stdin);
	scanf("%d", &s_idd);
	
	if(start == NULL)
		printf("\nNo Items or Plywoods Available!\n");
    else
	{
		while(ptr!=NULL)
		{
			if(ptr->ID==s_idd)
			{
				flag=1;
				printf("These are the details of Plywood\n");
				printf("\n--------------------------------");
				printf("\nBrand: %s\nIS Code: %d\nSize: %dFTX%dFT\nThickness: %d MM\nGrade: %s\nType: %s\nAvailable Quantity: %d\nPrice/sheet: %d INR\nMfg Date: %s\n",ptr->Brand,ptr->is_code,ptr->height,ptr->width,ptr->thickness,ptr->Grade,ptr->Type,ptr->quantity,ptr->price,ptr->Mfg_Date);
					if(strcmp(ptr->Info,"")==0)
					{
						printf("Enter review(less than 100 Characters)\n");
						fflush(stdin);
						gets(ptr->Info);
						printf("Review Added Successfully\n");						
					}
					else
					{
						printf("Review Already Available!\nIf you want to Add a Review Enter 1 else Any other number- ");
						fflush(stdin);
						scanf("%d",&c);
					}
						if(c==1)
						{
							printf("Enter review less than 100 Characters\n");
							fflush(stdin);
							gets(info);
							strcat(ptr->Info,"; ");
							strcat(ptr->Info,info);
							printf("Review Added Successfully\n");
						}
			}			
			ptr = ptr->next;
		}
		if(flag==0)
		{
			printf("Product with ID Not Found!\n");
		}
	}
	return start;
}
 
 
struct Plywood *StockOfPlywood(struct Plywood *start)  
{
    ptr = start;
		if(start==NULL)
			printf("No Items or Plywoods Available!\n");
		else
		{
			while(ptr!=NULL)
			{
				printf("----------------------------------------------");
				printf("\n#ID: %d\nBrand: %s\nIS Code: %d\nSize: %dFTX%dFT\nThickness: %d MM\nGrade: %s\nType: %s\nAvailable Quantity: %d\nPrice/sheet: %d INR\nMfg Date: %s\n",ptr->ID,ptr->Brand,ptr->is_code,ptr->height,ptr->width,ptr->thickness,ptr->Grade,ptr->Type,ptr->quantity,ptr->price,ptr->Mfg_Date);
					if(strcmp(ptr->Info,"")!=0)
					{
						printf("Review or Info: %s\n",ptr->Info);
					}
					else
					{
						printf("Review or Info: Not Available\n");
					}    
					ptr = ptr->next;
			}
		}
    return start;
}


struct Plywood *delete_beg(struct Plywood *start)
{
	if(start == NULL)
		printf("No Items or Plywoods Available!");
	else
	{   
		ptr = start;
		start = ptr->next;
		int i = ptr->ID;
		free(ptr);
		printf("Plywood with ID %d is Deleted Successfully\n",i);
	}
    return start;
}


struct Plywood *delete_Plywood(struct Plywood *start)
{
	struct Plywood *preptr;
    int id,flag=0;
		if(start==NULL)
		{
			puts("No Items or Plywoods Available!\n");
		}

    printf("Enter ID of the plywood to be Deleted- ");
    scanf("%d",&id);
    ptr = start;
		
	while(ptr != NULL)
    {
        if(ptr->ID == id)
		{
			flag=1;
				if(ptr == start)
				{	
					start = delete_beg(start);
				}
				else
				{
					preptr->next = ptr->next;
					free(ptr); 
					printf("Plywood with ID %d is Deleted Successfully\n",id);
				}
		}
			preptr = ptr;
			ptr = ptr->next;
    }
	if(flag==0)
	{
		printf("Plywood with ID %d not found!\n",id);
	}
	return start;
}


struct Plywood *UpdatePlywoodDetails(struct Plywood *start)
{
	ptr = start;
	int val, choice, c, flag=0;
    printf("\nEnter the ID of Plywood which has to be Updated- ");
	fflush(stdin);
	scanf("%d",&val);
	
		if(start == NULL)
			printf("No Items or Plywoods Available!\n");
		else
		{	
			while(ptr!=NULL)
			{
				if(ptr->ID == val)
				{
					flag = 1;
						do
						{
							printf("Enter\n1 - Change Quantity\n2 - Change Price\n3 - Change Info\n");
							scanf("%d",&choice);
								if(choice==1)
								{
									int quantity;
									printf("Enter Quantity to be changed- ");
									fflush(stdin);
									scanf("%d",&quantity);
									ptr->quantity = quantity;
									printf("Quantity changed Successfully\n");
								}
								if(choice==2)
								{
									int price;
									printf("Enter Price to be changed- ");
									fflush(stdin);
									scanf("%d",&price);
									ptr->price=price;
									printf("Price changed Successfully\n");
								}
								if(choice==3)
								{
									char Info[100];
									printf("Enter Info to be changed Less than 100 Characters\n");
									fflush(stdin);
									gets(Info);
									strcpy(ptr->Info,Info);
									printf("Info changed Successfully\n");
								}
								if(choice<=0 || choice>3)
								{
									printf("Enter Valid Choice\n");
								}
									printf("Enter 1 to Change other Details Else any other number- ");
									fflush(stdin);
									scanf("%d",&c);
						}while(c==1);
				}
				ptr = ptr->next;
			}
			if(flag==0)
			{
				printf("Product with ID not Found!\n");
			}
		}
	return start;
}


struct Plywood *PurchasePlywood(struct Plywood *start)
{	
	ptr=start;
	int id,c,quantity,flag=0;
	printf("Enter ID to purchase Plywood- ");
    fflush(stdin);
    scanf("%d", &id);
   
		if(start == NULL)
			printf("No Items or Plywoods Available\n");
		else
		{
			while(ptr!=NULL)
			{
				if(ptr -> ID==id)
				{
					flag=1;
					printf("These are the details of Plywood\n");
					printf("\n--------------------------------");
					printf("\n#ID: %d\nBrand: %s\nIS Code: %d\nSize: %dFTX%dFT\nThickness: %d MM\nGrade: %s\nType: %s\nAvailable Quantity: %d\nPrice/sheet: %d INR\nMfg Date: %s\n",ptr->ID,ptr->Brand,ptr->is_code,ptr->height,ptr->width,ptr->thickness,ptr->Grade,ptr->Type,ptr->quantity,ptr->price,ptr->Mfg_Date);
						if(ptr ->Info,""==0)
						{
							printf("Plywood Review/Info: Not Available\n");
						}
						else
						{
							printf("Plywood Review/Info: %s\n",ptr ->Info);
						}
					printf("\n Do you want to purchase %s \n If Yes Enter 1 else any other number- ",ptr ->Brand);
					fflush(stdin);
					scanf("%d",&c);
						if(c==1)
							{
								printf("Enter Quantity to Purchase- ");
								scanf("%d",&quantity);
									if(ptr ->quantity>=quantity)
									{
										printf("Total Price to be paid=%d\n",quantity*ptr->price);
										ptr->quantity-=quantity;
									}
									else
									{
										printf("Please Enter quantity below than Available Quantity\n");
									}
							}				
				}
				ptr=ptr->next;
			}
			if(flag==0)
			{
				printf("Plywood ID Not Found!\n");
			}
		}
	return start;
}


struct Plywood *KnowInfoAboutPlywood(struct Plywood *start)
{
	ptr=start;
	int choice, flag=0;
		if(start == NULL)
			printf(" No Items or Plywoods Available!\n");
		else
		{
			printf("1- Find by ID\n");
			printf("2- Find by Thickness\n");
			printf("3- Back to Menu\n");
			printf(" Enter your choice- ");
			fflush(stdin);
			scanf("%d", &choice);
				if(choice==1)
				{
					int id;
					printf("Enter ID of the Plywood to find details- ");
					fflush(stdin);
					scanf("%d", &id);
					while(ptr!=NULL)
					{
						if(ptr->ID==id)
						{
							flag=1;
							printf("These are the details of Plywood\n");
							printf("--------------------------------");
							printf("\n#ID: %d\nBrand: %s\nIS Code: %d\nSize: %dFTX%dFT\nThickness: %d MM\nGrade: %s\nType: %s\nAvailable Quantity: %d\nPrice/sheet: %d INR\nMfg Date: %s\n",ptr->ID,ptr->Brand,ptr->is_code,ptr->height,ptr->width,ptr->thickness,ptr->Grade,ptr->Type,ptr->quantity,ptr->price,ptr->Mfg_Date);
								if(strcmp(ptr ->Info,"")!=0)
								{
									printf("Review or Info: %s\n\n",ptr ->Info);
								}
								else
								{
									printf("Review or Info: Not Available\n\n");
								}   
						}
						ptr = ptr->next;
					}
						if(flag==0)
						{
							printf("Plywood of ID %d Not Available!\n", id);
						}
				}
				if(choice==2)
				{
					int tk;
					printf("Enter Thickness(mm) of the Plywood to find details- ");
					fflush(stdin);
					scanf("%d", &tk);
					while(ptr!=NULL)
					{
						if(ptr->thickness==tk)
						{
							flag=1;
							printf("These are the details of Plywood\n");
							printf("--------------------------------");
							printf("\n#ID: %d\nBrand: %s\nIS Code: %d\nSize: %dFTX%dFT\nThickness: %d MM\nGrade: %s\nType: %s\nAvailable Quantity: %d\nPrice/sheet: %d INR\nMfg Date: %s\n",ptr->ID,ptr->Brand,ptr->is_code,ptr->height,ptr->width,ptr->thickness,ptr->Grade,ptr->Type,ptr->quantity,ptr->price,ptr->Mfg_Date);
							if(strcmp(ptr ->Info,"")!=0)
							{
								printf("Review or Info: %s\n\n",ptr ->Info);
							}
							else
							{
								printf("Review or Info: Not Available\n\n");
							}   
						}
					ptr = ptr->next;
					}
						if(flag==0)
						{
							printf("Plywood of Thickness %dmm Not Available!\n", tk);
						}
				}
				if(choice==3)
				{
					return start;
				}
				if(choice<=0 || choice>3)
				{
					printf("Enter Valid Choice!\n");
					return start = KnowInfoAboutPlywood(start);
				}
		}
	return start;
}

 
struct Plywood *sort_list(struct Plywood *start)
{
	struct Plywood *ptr1,*ptr2;
    int temp, choice;
	char temp2[100];
    ptr1 = start;
		if(start == NULL)
			printf(" No Items or Plywoods Available!\n");
		else
		{
			printf("Enter\n");
			printf("1- Sort by ID\n");
			printf("2- Sort by Thickness\n");
			printf("3- Back to Menu\n");
			printf(" Enter your choice- ");
			fflush(stdin);
			scanf("%d", &choice);
			
			while(ptr1->next != NULL)
			{
				ptr2 = ptr1->next;
				while(ptr2 != NULL)
				{
					if(choice==1)
					{								
						if(ptr1->ID > ptr2->ID)
						{
							temp = ptr1->ID;
							ptr1->ID = ptr2->ID;
							ptr2->ID = temp;
									
							temp = ptr1->is_code;
							ptr1->is_code = ptr2->is_code;
							ptr2->is_code = temp;
									
							temp = ptr1->height;
							ptr1->height = ptr2->height;
							ptr2->height = temp;
									
							temp = ptr1->width;
							ptr1->width = ptr2->width;
							ptr2->width = temp;

							temp = ptr1->thickness;
							ptr1->thickness = ptr2->thickness;
							ptr2->thickness = temp;
									
							temp = ptr1->price;
							ptr1->price = ptr2->price;
							ptr2->price = temp;
									
							temp = ptr1->quantity;
							ptr1->quantity = ptr2->quantity;
							ptr2->quantity = temp;									

							strcpy(temp2, ptr1->Brand);
							strcpy(ptr1->Brand, ptr2->Brand);
							strcpy(ptr2->Brand, temp2);
									
							strcpy(temp2, ptr1->Mfg_Date);
							strcpy(ptr1->Mfg_Date, ptr2->Mfg_Date);
							strcpy(ptr2->Mfg_Date, temp2);

							strcpy(temp2, ptr1->Grade);
							strcpy(ptr1->Grade, ptr2->Grade);
							strcpy(ptr2->Grade, temp2);

							strcpy(temp2, ptr1->Type);
							strcpy(ptr1->Type, ptr2->Type);
							strcpy(ptr2->Type, temp2);

							strcpy(temp2, ptr1->Info);
							strcpy(ptr1->Info, ptr2->Info);
							strcpy(ptr2->Info, temp2);								
						}
					}
					if(choice==2)
					{
						if(ptr1->thickness > ptr2->thickness)
						{
							temp = ptr1->ID;
							ptr1->ID = ptr2->ID;
							ptr2->ID = temp;
									
							temp = ptr1->is_code;
							ptr1->is_code = ptr2->is_code;
							ptr2->is_code = temp;
									
							temp = ptr1->height;
							ptr1->height = ptr2->height;
							ptr2->height = temp;
									
							temp = ptr1->width;
							ptr1->width = ptr2->width;
							ptr2->width = temp;

							temp = ptr1->thickness;
							ptr1->thickness = ptr2->thickness;
							ptr2->thickness = temp;
									
							temp = ptr1->price;
							ptr1->price = ptr2->price;
							ptr2->price = temp;
									
							temp = ptr1->quantity;
							ptr1->quantity = ptr2->quantity;
							ptr2->quantity = temp;									

							strcpy(temp2, ptr1->Brand);
							strcpy(ptr1->Brand, ptr2->Brand);
							strcpy(ptr2->Brand, temp2);
									
							strcpy(temp2, ptr1->Mfg_Date);
							strcpy(ptr1->Mfg_Date, ptr2->Mfg_Date);
							strcpy(ptr2->Mfg_Date, temp2);

							strcpy(temp2, ptr1->Grade);
							strcpy(ptr1->Grade, ptr2->Grade);
							strcpy(ptr2->Grade, temp2);

							strcpy(temp2, ptr1->Type);
							strcpy(ptr1->Type, ptr2->Type);
							strcpy(ptr2->Type, temp2);

							strcpy(temp2, ptr1->Info);
							strcpy(ptr1->Info, ptr2->Info);
							strcpy(ptr2->Info, temp2);
						}
					}
					ptr2 = ptr2->next;
				}
				ptr1 = ptr1->next;
			}
		}
		if(choice==3)
		{
			return start;
		}
		if(choice<=0 || choice>3)
		{
			printf("Enter valid Choice!\n");
			return start = sort_list(start);
		}
		if(choice==1 || choice==2)
		{
			printf("List of Plywood Data Sorted\n");
		}
    return start;
}


int main()
{
    FILE *Datafile;
    char *filename = "plywooddatabase.dat";							
	Datafile = fopen(filename,"r");
	
	char ch;
	struct Plywood *start = NULL;
	
	if(Datafile)	 
    {
	    start = (struct Plywood *)malloc(sizeof(struct Plywood)); 		
		ptr = start;    												
		while(1)
			{
				new_Plywood = (struct Plywood *)malloc(sizeof(struct Plywood));
				fread(ptr,sizeof(struct Plywood),1,Datafile);
				if(ptr->next == NULL) 
				break;
				ptr->next = new_Plywood;
				ptr = new_Plywood;
			}
	    fclose(Datafile);               							    
	}
	
	do
	{
		fflush(stdin);
        printf("\nWelcome To The Plywood Database");					 
        printf("\n-- -----------------------------");
		printf("\n 1: Purchase a Plywood");
		printf("\n 2: Stock of Plywood in Store");
		printf("\n 3: Add a Plywood");
		printf("\n 4: Enter Information about a Plywood");
		printf("\n 5: Find a Plywood Information");
		printf("\n 6: Update a Plywood");
		printf("\n 7: Delete a Plywood");
		printf("\n 8: Sort Plywood Data");
		printf("\n-- -----------------------------");
		printf("\n Q: Save and quit");
		
		printf("\n\n Enter your choice : ");
        ch = getchar();
	    ch = toupper(ch);

		switch(ch)
		{
            case '1':
				start = PurchasePlywood(start);
                break;
            case '2':
                start = StockOfPlywood(start);
                break;
			case '3':
                start = create_ll(start);
                break;
			case '4':
                start = EnterInfoAboutPlywood(start);
                break;
			case '5':
                start = KnowInfoAboutPlywood(start);
                break;
			case '6':
				start = UpdatePlywoodDetails(start);
				break;
			case '7':
                start = delete_Plywood(start);
                break;
			case '8':
                start = sort_list(start);
                break;
            case 'Q':
                puts("Save and quit\n");
                default:
                break;
		}
	}while(ch != 'Q');
  
    ptr = start;
		if(ptr == NULL)
		return(0);	
				  
    Datafile = fopen(filename,"w");
		if(Datafile == NULL)
			{
				printf("Error writing to %s\n",filename);
				return(1);
			}
		while(ptr != NULL)
		{
			fwrite(ptr,sizeof(struct Plywood),1,Datafile);
			ptr = ptr->next;
		}
    fclose(Datafile);
    return(0);
}