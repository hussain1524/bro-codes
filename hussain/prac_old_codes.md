

1.



// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>

int main()
{   
    int num;
    const int  wal2 = 0 ;
   printf("Enter your number = \n ");
   scanf("%d",&num);
   if(num%2 == wal2 ){
       printf("The number %d is even",num);
   }else{
       printf("The number %d is odd ",num);
   }

    
    
  return 0 ; 
}










3.A





// Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>
#include <time.h>

void delay(int milliseconds) {
    long pause;
    clock_t now, then;

    pause = milliseconds * (CLOCKS_PER_SEC / 1000);
    now = then = clock();
    while ((now - then) < pause) {
        now = clock();
    }
}
int main()
{  
    int i, start;
   printf("Enter 0  to continue = \n ");
   scanf("%d", &start );
   if( start == 0 ){
       for(i=0;i<=100;i++){
           delay(100); // 1-second delay
        printf("%d \n",i);
        fflush(stdout);
       
       }
   }else{
           printf("Time out! , restart and enter 0");
   }
  return 0 ; 
}







3.B 






    // Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>
#include <time.h>

void delay(int milliseconds) {
    long pause;
    clock_t now, then;

    pause = milliseconds * (CLOCKS_PER_SEC / 1000);
    now = then = clock();
    while ((now - then) < pause) {
        now = clock();
    }
}
int main()
{  
    int i, start;
   printf("Enter 0  to continue = \n ");
   scanf("%d", &start );
   if( start == 0 ){
       for(i=0;i<=100 ;i+=2){
           delay(100); // 1-second delay
        printf("%d \n",i);
        fflush(stdout);
       
       }
   }else{
           printf("Time out! , restart and enter 0");
   }
  return 0 ; 
}











4.




    // Online IDE - Code Editor, Compiler, Interpreter

#include<stdio.h>


int main(){
      int arr[10] ;
      int   Maximum , Minimum , i;
      int Total_Sum = 0; 
      float Average ;
      int count = sizeof(arr)/sizeof(arr[0]);
      for(i = 0; i<=9 ; i++){
          printf(" \n Enter your %d number = ",i);
          scanf("%d",&arr[i]);
      }
      
      for(i=0 ; i<=9 ; i++){
         
          Total_Sum += arr[i];
      }
         
    Average = Total_Sum/count ;
    
    int Max = arr[0];
    
    for(i=1;i<count;i++){
        if(Max<arr[i]){
            Max = arr[i];
        }
    }
    
    int Min = arr[0];
    for(i=1 ;i<count;i++){
        if(Min>arr[i]){
            Min = arr[i];
        }
    }
    
    printf("\n Total Sum = %d ", Total_Sum);
    printf("\nAverage = %f ",Average);
    printf("\nLargest number is =%d",Max);
    printf("\nSmalest number is =%d",Min);
         

    return 0;
}








5.







#include <stdio.h>

int main()
{ 
    int i, a;
    
    printf("Enter number of elements = ");
    scanf("%d", &a);
    
    // Create the array based on user input
    int arr[a];
    
    // 1. FIXED: Change <= to < so we don't go out of bounds
    for(i = 0; i < a; i++){
        // Added +1 to the display so it asks for "value 1" instead of "value 0"
        printf("\nEnter your %d value = ", i + 1); 
        scanf("%d", &arr[i]);
    }
    
    printf("\nOriginal array: ");
    for(i = 0; i < a; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
     
  // Setup both pointers ; Check condition ; Move both pointers
for (int start = 0, end = a - 1; start < end; start++, end--) {
    
    // The 3-step swap remains exactly the same
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
}
    // 2. FIXED: Start at 0 and go up to a-1 (using i < a)
    printf("Reversed array: ");
    for(i = 0; i < a; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");

    return 0;
}







6.




#include <stdio.h>

int main()
{ 
  int i, a;
  printf("\nEnter the number of elements =");
  scanf("%d",&a);
  int arr[a];
  
  for(i=0;i<a;i++){
      printf("\nEnter your %d value =",i+1);
      scanf("%d",&arr[i]);
  }
  int search;
  printf("\nEnter the number to search =");
    scanf("%d",&search);

   for(i=0;i<a;i++){
       if(search==arr[i]){
           printf("Found!");
       }else{
           printf("Not Found!");
       }
       
   }



    return 0;
}
 







7.







#include <stdio.h>
#include <stdint.h>
void print_binary(unsigned int d){
    for(int i=7;i>=0;i--){
         
         int bit = (d >> i) & 1;
         printf("%d",bit);
    }
    printf("\n");
}

unsigned int  set_bit(unsigned char a , int b ){
    
    return a  | (1 << b);
    
}


int main() {
       
    unsigned char d = 0; 
    
    int val;
    printf("Enter the bit you want to set :");
    scanf("%d",&val);
    
    printf("before :");
    print_binary(d);
    
    int final = set_bit(d,val);
    printf("\nAfter :");
    print_binary(final);
    
    
    
    
    
    
    return 0;
}








8.





#include <stdio.h>
#include <stdint.h>
void print_binary(unsigned int d){
    for(int i=7;i>=0;i--){
         
         int bit = (d >> i) & 1;
         printf("%d",bit);
    }
    printf("\n");
}

unsigned int  set_bit(unsigned char a , int b ){
    
    return a  | (1 << b);
    
}

unsigned int Clear_bit(unsigned char a ,int b){
    return a & ~(1 << b );
}

unsigned int toggel_bit(unsigned char a , int b ){
     return a ^(1 << b );
}

unsigned int Check_bit(unsigned char a , int b ){
    return  (a >> b )&1;
}

int main() {
    
    unsigned char d = 0;
    int val = 0;
    int choice = 0;
    int final;
    for(;;){
       
   
    printf("select one numeric value from below menu :\n 1 = Set bit \n 2 = Clear bit \n 3 = Toggle bit \n 4 = Check bit \n 5 = check value\n 6 = Exit \n = ");
    scanf("%d",&choice );
       
       if (choice == 6) {
            printf("Exiting Bit Controller. Goodbye!\n");
            break;
        }
        if (choice >= 1 && choice <= 4) {
            printf("Enter bit position (0-7): ");
            scanf("%d", &val);

            if (val < 0 || val > 7) {
                printf("Error: Invalid position! Please choose between 0 and 7.\n");
                continue;
            } 
        }
        
    
     
    switch(choice){
    case 1:
        
        printf("\nbefore :");
        print_binary(d);
        printf("After :");
        final = set_bit(d,val);
        d = final;
        print_binary(final);
        break;
    
        
        case 2:
    
        printf("\nbefore :");
        print_binary(d);
        printf("After :");
        final = Clear_bit(d,val);
        d = final;
        print_binary(final);
        break;
        
        
        case 3:
        
       
        printf("\nbefore :");
        print_binary(d);
        printf("After :");
        final = toggel_bit(d,val);
        d = final;
        print_binary(final);
        break;
        
        
        case 4:
        
      
        printf("\nbefore :");
        print_binary(d);
        printf("After :");
        final = Check_bit(d,val);
        d = final;
        print_binary(final);
        break;
        
    
        case 5:
        print_binary(final);
        break;
       
       default:
                printf("Invalid menu option! Please select 1 through 6.\n");
                break;
        
        
        
    }
    
    
    }

   
   
    return 0;
}






9.






#include <stdio.h>
#include <stdint.h>


#define PIN_0 (1 << 0) 
#define PIN_1 (1 << 1)
#define PIN_2 (1 << 2)
#define PIN_3 (1 << 3)
#define PIN_4 (1 << 4)
#define PIN_5 (1 << 5)
#define PIN_6 (1 << 6)
#define PIN_7 (1 << 7)

static uint8_t GPIO_Register = 0x00;


void print_binary(uint8_t reg){
    for(int i=7;i>=0;i--){
         
         int bit = (reg >> i) & 1;
         printf("%d",bit);
    }
    printf("\n");
}


void set_bit(uint8_t a){
    
    GPIO_Register  |= a; 
    
}

void Clear_bit(uint8_t a){
    GPIO_Register &= ~a;
}

void toggel_bit(uint8_t a ){
     GPIO_Register ^= a;
}

uint8_t Check_bit(uint8_t a ){
      return (GPIO_Register >> a)& 1;   
}

int main() {
    
    int val = 0;
    int choice = 0;
    int final;
    for(;;){
       
   
    printf("select one numeric value from below menu :\n 1 = Turn pin on \n 2 = Turn pin off \n 3 = Toggle bit \n 4 = Check bit \n 5 = check register \n 6 = Exit \n = ");
    scanf("%d",&choice );
       
       if (choice == 6) {
            printf("Exiting Bit Controller. Goodbye!\n");
            break;
        }
        if (choice >= 1 && choice <= 4) {
            printf("Enter bit position (0-7): ");
            scanf("%d", &val);

            if (val < 0 || val > 7) {
                printf("Error: Invalid position! Please choose between 0 and 7.\n");
                continue;
            } 
        }
        
    uint8_t b = (1 << val);
     
    switch(choice){
    case 1:
         set_bit(b);
        printf("Pin %d set to HIGH (1)\n",val);
        break;
    
        
        case 2:
    
        Clear_bit(b);
        printf("Pin %d set to LOW(0)\n",val);
        break;
        
        
        case 3:
        toggel_bit(b);
        printf("Pin %d state toggled \n",val);
        break;
        
        
        case 4:
        printf("Pin %d current state is : %s (%d)\n",val,Check_bit(val) ? "HIGH":"LOW",Check_bit(val));
        break;
        
    
        case 5:
        print_binary(GPIO_Register);
        break;
       
       default:
                printf("Invalid menu option! Please select 1 through 6.\n");
                break;
        
        
        
    }
    
    
    }

   
   
    return 0;
}













10.








#include <stdio.h>
#include <stdint.h>

void print_array(const int *arr,int size){
    int i;
    for(i=0;i < size;i++){
        printf("%d ",*(arr+i));
    }

    printf("\n");
}

void add_five(int *arr,int size ){
    int i;
    for(i=0;i<size;i++){
        *(arr + i ) += 5;
    }
}






int main(){
    int array[]={10,20,30,40};
    int size;
     size = sizeof(array)/sizeof(array[0]);
    add_five(array,size);
    print_array(array,size);
    
    
    
    
    
    
    
    
    return 0;
}












11.












#include <stdio.h>
#include <stdint.h>


void swap(int *a , int *b ){
    int chng ;
    chng = *a;
    
    *a = *b;
    *b = chng;
    
}
int main(){
    int t = 4;
    int y = 3;
    swap(&t,&y);
    printf("%d , %d",t,y);
    
    
    
    
    
    
    
    return 0;
}











12.











#include <stdio.h>
#include <stdint.h>




int main(){
    int arr[] = {10,20,30,40};
    int size ;
    size = sizeof(arr)/sizeof(arr[0]);
    *(arr + 0 ) += 60;
    *(arr + 3) += 60;
    printf("%d , %d",arr[0],arr[3]);
    
    
    
    
    
    return 0;
}












13.





#include <stdio.h>
#include <stdint.h>

struct Sensor {
    int id;
    int temperature;
    int humidity;
    int status;
};

void print_sensor(const struct Sensor *s) {
    printf("Sensor ID: %d | Temp: %d°C | Humidity: %d%% | Status: %s\n",
           s->id, s->temperature, s->humidity, s->status ? "ACTIVE" : "FAULTY");
}

void update_sensor(struct Sensor *s, int temp, int humid, int stat) {
    s->temperature = temp;
    s->humidity = humid;
    s->status = stat;
}

void check_status(const struct Sensor *s) {
    if (s->status == 1) {
        printf("Sensor %d is working correctly (ACTIVE).\n", s->id);
    } else {
        printf("Sensor %d is FAULTY!\n", s->id);
    }
}


struct Sensor* find_sensor_by_id(struct Sensor system[], int count, int search_id) {
    for (int i = 0; i < count; i++) {
        if (system[i].id == search_id) {
            return &system[i]; // Return pointer to the matching sensor
        }
    }
    return NULL;
}

const struct Sensor* find_hottest_sensor(const struct Sensor sensor[], int count) {
    if (count <= 0) return NULL;

    const struct Sensor *hottest = &sensor[0];

    for (int i = 1; i < count; i++) {
        if (sensor[i].temperature > hottest->temperature) {
            hottest = &sensor[i];
        }
    }

    return hottest;
}

int main() {
    int choice;

    struct Sensor system[4] = {
        { .id = 101, .temperature = 24, .humidity = 45, .status = 1 },
        { .id = 102, .temperature = 31, .humidity = 60, .status = 1 },
        { .id = 103, .temperature = 18, .humidity = 40, .status = 0 }, // Faulty
        { .id = 104, .temperature = 28, .humidity = 55, .status = 1 }
    }; 

    int sensor_count = 4;

    for (;;) {
        printf("\n========= MENU =========");
        printf("\n 1. Print all sensors");
        printf("\n 2. Update sensor by ID");
        printf("\n 3. Check status");
        printf("\n 4. Find hottest sensor");
        printf("\n 5. Exit");
        printf("\n========================");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Exiting the manager. Goodbye!\n");
            break;
        }

        switch (choice) {
            case 1:
                printf("\n=== ALL SENSOR READINGS ===\n");
                for (int i = 0; i < sensor_count; i++) {
                    print_sensor(&system[i]);
                }
                break;

            case 2: {
                int target_id, new_temp, new_hum, new_status;

                printf("\nEnter the Sensor ID to update (e.g., 101-104): ");
                scanf("%d", &target_id);

                // Search for the sensor in the array
                struct Sensor *target = find_sensor_by_id(system, sensor_count, target_id);

                if (target == NULL) {
                    printf("Error: Sensor ID %d not found!\n", target_id);
                } else {
                    printf("Updating Sensor ID %d (Current Temp: %d°C, Hum: %d%%, Status: %s)\n", 
                           target->id, target->temperature, target->humidity, target->status ? "ACTIVE" : "FAULTY");

                    printf("Enter new temperature: ");
                    scanf("%d", &new_temp);

                    printf("Enter new humidity: ");
                    scanf("%d", &new_hum);

                    // Loop to validate status input
                    do {
                        printf("Enter new status (1 for ACTIVE, 0 for FAULTY): ");
                        scanf("%d", &new_status);
                        if (new_status != 0 && new_status != 1) {
                            printf("Invalid input! Status must be 0 or 1.\n");
                        }
                    } while (new_status != 0 && new_status != 1);

                    // Update the struct via pointer
                    update_sensor(target, new_temp, new_hum, new_status);

                    printf("\n-> Sensor updated successfully!\n");
                    print_sensor(target);
                }
                break;
            }

            case 3:
                printf("\n=== CHECKING SENSOR STATUSES ===\n");
                for (int i = 0; i < sensor_count; i++) {
                    check_status(&system[i]);
                }
                break;

            case 4: {
                printf("\n=== HOTTEST SENSOR ===\n");
                const struct Sensor *hottest = find_hottest_sensor(system, sensor_count);
                if (hottest != NULL) {
                    print_sensor(hottest);
                }
                break;
            }

            default:
                printf("Invalid selection! Please choose 1 to 5.\n");
                break;
        }
    }

    return 0;
}











14.




