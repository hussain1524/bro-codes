#include <stdio.h>
int main (){
	int space = 0, assigned =0, accept = 0, reject = 0;
	int zoneA = 0, zoneB = 0, zoneC = 0, cars = 0, bikes = 0, vans = 0, no, i;
	char category, permit, type, emergency;
	printf("Enter the no of vehicles : ");
	scanf("%d", &no);   // taking the number of the vehicle 
	for (i=1; i<=no; i++){  //main for loop starts 
		
	///USER INPUT SECTION 	STARTS

		//1st do while loop 
		//function : Taking input in char datatype and saving it in a char variable type ,
		//it is checking whether the user typed correct info or not and if they typed wrong the loop will execute again 
		//the main info it is taking from the user is about the vehicle type i.e bikes or van 

		do{
		printf("\n1. Cars(C)\n2. Bikes(B)\n3. Vans(V)\nEnter the vehicle type : ");
		scanf(" %c", &type);
             if (type!= 'C' && type!='V' && type !='B'){
             	printf("Invalid type, you are requested to enter the information again!");
			 }
	}while(type!= 'C' && type!='V' && type !='B');
	   
	  
	    //2nd do while loop 
		//funtion : taking the input in char saving it in a variable  char category 
		//it is checking whether the user typed correct info or not and if they typed wrong the loop will execute again 
		//it is taking info from the user about the category of the vhiecle i.e is it for students or faculty or visistors 

	   do{
		printf("\n1. Faculty(F)\n2. Students(S)\n3. Visitors/Guests(G)\nEnter the user category : ");
		scanf(" %c", &category);
             if (category!= 'F' && category!='S' && category !='G'){
             	printf("Invalid category, you are requested to enter the information again!");
			 }
	}while(category!= 'F' && category!='S' && category !='G');
	

	   //3rd do while loop
	   //function : taking the input in char saving it in a variable char permit 
	   //it is checking whether the user typed correct info or not and if they typed wrong the loop will execute again 
	   //it is taking info from the user about their parking  permit validity 
	    do{
		printf("\nDo the vehicle has a valid parking permit (Y/N) ? ");
		scanf(" %c", &permit);
             if (permit != 'Y' && permit != 'N'){
             	printf("Invalid perimt, you are requested to enter the information again!");
			 }
	}while(permit != 'Y' && permit != 'N');
	    



	   //a code block to check if the non permit  vehicle is an emergency one if yes then it will give access 
	    if (permit = 'N'){           
	    	
	    	do {
	    		printf("Is this an emergency vehicle (Y/N) : ");
	    		scanf(" %c", &emergency);
	    		if (emergency != 'Y' && emergency != 'N'){
	    		printf("Invalid emergency permit, you are requested to enter the information again!");

				}
			} while(emergency != 'Y' && emergency != 'N');
		} else {
			
			emergency ='N';	
		}
		
		//////////INPUT SECTION ENDS
		
		

		///an if statement to allocate 2x space for van 
		
	    if (type = 'V'){
	    	space =2;
		} else {
			space = 1;
		}
		
		
	////////OUTPUT SECTION FOR EACH CATEGORY STARTS HERE 	

	    //faculty
		///this code block accepts the vehicle in the block a if the permit is valid (Y) or the emergency is valid (Y)
		///it will rejects the vehicle if the space in block is full 

	    if (category =='F'){
	    	if (permit == 'Y' || emergency == 'Y'){
	    		if (zoneA + space <= 20 ){
	    			zoneA = zoneA + space;
	    			assigned = 1;
	    			printf("\nVehicles accepted. Assigned to Zone A.\n");
	    			printf("\nRemaining capacity in Zone A is : %d\n", 20 - zoneA);
				} else {
					printf("Vehicle rejected.  No available spaces in Zone A.");
				}
	    		
	    		
			} else {
				printf("Vehicle rejected ,  invalid permit");
			}
		}

	    
	    //student 
        

	   else if (category == 'S'){
	    	if (permit == 'Y' || emergency == 'Y'){
	    		if (zoneB + space <= 40){
	    			zoneB = zoneB + space;
	    			assigned = 1;
	    			printf("Vehicles accepted. Assigned to Zone B.\n");
	    			printf("Remaining capacity in Zone B is : %d\n", 40 - zoneB);
				} else if (type == 'G' &&zoneC + 2 <15){
					      zoneC = zoneC + 2;
					      assigned = 1;
		            printf("Student van redirected to Zone C.\n");
					printf("Vehicles accepted. Assigned to Zone C.\n");
	    			printf("Remaining capacity in Zone C is : %d\n", 15 - zoneC);
			}
				 else {
					printf("Vehicle rejected. No available space in Zone B.");
				}
	    	} else {
	    			printf("Vehicle rejected ,  invalid permit");
			}
			}
		
	    
	    //visitors/ guests
	    
	 else  if (category == 'G'){
	   	  if (permit == 'Y' || emergency == 'Y'){
	   	  	   if (zoneC + space <=15){
	   	  	   	    zoneC = zoneC + space;
	   	  	   	    assigned = 1;
	   	  	   	   	printf("Vehicles accepted. Assigned to Zone C.\n");
	    			printf("Remaining capacity in Zone C is : %d\n", 15 - zoneC);
					} 
					
					else {
					printf("Vehicle rejected. No available space in Zone C.");

					}
			 } else {
			 	printf("Vehicle rejected ,  invalid permit");
			 }
	   } 
	    
	    
	    if (assigned == 1){
	    	accept++;
	    	
	    	if (type == 'C'){
	    		cars++;
			} else if (type == 'V'){
				vans++;
			} else if (type == 'B'){
				bikes++;
			}
		} else {
			reject++;
		}
	
	
      // main for loop  ends here "edited by hussain "
	  
	}
	    
	    
	   // result
	 printf("Total vehicles processed: %d\n", no);
    printf("Total accepted vehicles: %d\n", accept);
    printf("Total rejected vehicles: %d\n", reject);

    printf("\nSuccessfully parked:\n");
    printf("Cars : %d\n", cars);
    printf("Bikes: %d\n", bikes);
    printf("Vans : %d\n", vans);
	    
	 printf("\nZone A (Faculty):\n");
    printf("Occupied: %d\n", zoneA);
    printf("Remaining: %d\n", 20 - zoneA);

    printf("\nZone B (Students):\n");
    printf("Occupied: %d\n", zoneB);
    printf("Remaining: %d\n", 40 - zoneB);

    printf("\nZone C (Visitors):\n");
    printf("Occupied: %d\n", zoneC);
    printf("Remaining: %d\n", 15 - zoneC); 
    
	    
	    
	    
	if (zoneA > zoneB && zoneA > zoneC){
		printf("Zone A has highest occupancy\n");
	} else if (zoneB > zoneA && zoneB > zoneC){
		printf("Zone B has highest occupancy\n");
	} else {
		printf("Zone C has highest occupancy\n");

	}
	  

    if (zoneA == 20 && zoneB == 40 && zoneC == 15)
    {
        printf("The entire campus parking facility is FULL.\n");
    }
    else
    {
        printf("The entire campus parking facility is NOT full.\n");
    }  
	
	
	return 0;
}