
#include<stdio.h>
#include <string.h>
struct student
{
    int grade;
    char name[25][25],surname[25][25];
}stu[100],x;

int ascGrade(int num);//fnc prototype-ascending order of grades 
int dscGrade(int num);//fnc prototype--descending order of grades
int ascName(int num);//fnc prototype--ascending order of names
int dscName(int num);//fnc prototype--descending order of names
int ascSurname(int num);//fnc prototype--ascending order of surnames
int dscSurname(int num);//fnc prototype--descending order of surnames

void main()
{
    int i,j,num;
    printf("Please enter the number of students (Max 100): ");
    scanf("%d",&num);
    
    for(i=0;i<num;i++){
    	printf("Enter student First name, Last name and grade of the %d. student: ",i+1);
    	scanf("%s %s %d",&stu[i].name,stu[i].surname,&stu[i].grade);
	}
	
	printf("\n-------------------------------------------------------------------------------\n");
	ascGrade(num);//ascending order of grades--fnc call
	printf("\n-------------------------------------------------------------------------------\n");
	dscGrade(num);//descending order of grades--fnc call
	printf("\n-------------------------------------------------------------------------------\n");
	ascName(num);//ascending order of names--fnc call
	printf("\n-------------------------------------------------------------------------------\n");
	dscName(num);//descending order of names--fnc call
	printf("\n-------------------------------------------------------------------------------\n");
	ascSurname(num);//ascending order of surnames--fnc call
	printf("\n-------------------------------------------------------------------------------\n");
	dscSurname(num);
	printf("\n-------------------------------------------------------------------------------\n");
	
}

int ascGrade(int num){
	//ascending grade order below://
    int i,j;
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-1;j++)
        {
            if(stu[j].grade>stu[j+1].grade)
            {
                x=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=x;
            }
        }
    }
    printf("List of students by Grade in Ascending Order is:\n");
    for(i=0;i<num;i++)
    {
        printf("%d %s %s\n",stu[i].grade,stu[i].name,stu[i].surname);
    }
//ascending grade order ends here*********//
}

int dscGrade(int num){
	//descending grade order below://
    int i,j;
    for(i=0;i<num;i++)
    {
        for(j=0;j<num-1;j++)
        {
            if(stu[j].grade<stu[j+1].grade)
            {
                x=stu[j];
                stu[j]=stu[j+1];
                stu[j+1]=x;
            }
        }
    }    
    printf("List of students by Grade in Descending Order is:\n");
    for(i=0;i<num;i++)
    {
        printf("%d %s %s\n",stu[i].grade,stu[i].name,stu[i].surname);
    }
//descending grade order ends here*********//
}

int ascName(int num){
	//ascending name order below://
	int i,j;
	char temp[25];
	for(i=0; i<num-1;i++){
       for(j=i+1;j<num;j++){
    	if(strcmp(stu[i].name,stu[j].name)<0){
            strcpy(temp,stu[i].name); 
            x=stu[i];
            strcpy(stu[i].name,stu[j].name); 
            stu[i]=stu[j];
            strcpy(stu[j].name,temp); 
            stu[j]=x;
         }
      } 
   }
   printf("List of students by Name in Ascending Order is:\n");
   for(i=0; i< num ; i++){
      printf("%s %s %d\n",stu[i].name,stu[i].surname,stu[i].grade);
	}
//ascending name order ends here*********//
}

int dscName(int num){
	//descending name order below://
	int i,j;
	char temp[25];
	for(i=0; i<num-1;i++){
       for(j=i+1;j<num;j++){
          if(strcmp(stu[i].name,stu[j].name)>0){ 
             strcpy(temp,stu[i].name); 
             x=stu[i];
             strcpy(stu[i].name,stu[j].name); 
             stu[i]=stu[j];
             strcpy(stu[j].name,temp); 
             stu[j]=x;
         } 
      } 
   }
   printf("List of students by Name in Descending Order is:\n");
   for(i=0; i< num ; i++){
      printf("%s %s %d\n",stu[i].name,stu[i].surname,stu[i].grade);
	}
//descending name order ends here*********//
}

int ascSurname(int num){
	//ascending surname order below://
	int i,j;
	char temp[25];
	for(i=0; i<num-1;i++){
       for(j=i+1;j<num;j++){
    	if(strcmp(stu[i].surname,stu[j].surname)<0){
            strcpy(temp,stu[i].name); 
            x=stu[i];
            strcpy(stu[i].surname,stu[j].name); 
            stu[i]=stu[j];
            strcpy(stu[j].surname,temp); 
            stu[j]=x;
			        
         }
      } 
   }
   printf("Ordered List by Last name in Ascending Order is:\n");
   for(i=0; i< num ; i++){
      printf("%s %s %d\n",stu[i].surname,stu[i].name,stu[i].grade);
	}
//ascending surname order ends here*********//
}

int dscSurname(int num){
	//descending surname order below://
	int i,j;
	char temp[25];
	for(i=0; i<num-1;i++){
       for(j=i+1;j<num;j++){
    	if(strcmp(stu[i].surname,stu[j].surname)>0){
            strcpy(temp,stu[i].name); 
            x=stu[i];
            strcpy(stu[i].surname,stu[j].name); 
            stu[i]=stu[j];
            strcpy(stu[j].surname,temp); 
            stu[j]=x;
			        
         }
      } 
   }
   printf("Ordered List by Last name in Descending Order is:\n");
   for(i=0; i< num ; i++){
      printf("%s %s %d\n",stu[i].surname,stu[i].name,stu[i].grade);
	}
//descending surname order ends here*********//
}
