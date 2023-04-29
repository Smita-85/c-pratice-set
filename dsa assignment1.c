/*#include<stdio.h>
int minimum(int[],int);
int main()
{
    int arr[30],size;
    printf("enter size of array:");
    scanf("%d",&size);
    minimum(arr,size);
    return 0;
}
int minimum(int arr[],int size)
{
    int i,min=arr[0];
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    printf("minimum element:%d",min);
}*/
/*#include<stdio.h>
int merge(int[],int[],int[],int,int);
int main()
{
    int arr1[30],arr2[30],arr3[30],n1,n2;
    printf("enter size of first array:");
    scanf("%d",&n1);
    printf("enter size of second array:");
    scanf("%d",&n2);
    merge(arr1,arr2,arr3,n1,n2);
    return 0;
}
int merge(int arr1[],int arr2[],int arr3[],int n1,int n2)
{
    int i,j;
    printf("enter first array elements:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter second array elements:");
    for(j=0;j<n2;j++)
    {
        scanf("%d",&arr2[j]);
    }
    for(i=0;i<n1;i++)
    {
        arr3[i]=arr1[i];
    }
    for(i=n1,j=0;j<n2;j++,i++)
    {
        arr3[i]=arr2[j];
    }
    for(i=0;i<n1+n2;i++)
    {
        printf("%d\t",arr3[i]);
    }
}*/
/*#include<stdio.h>
int delete(int[],int,int,int);
int main()
{
    int arr[30],size,posn,item;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter the position where you want to insert:");
    scanf("%d",&posn);
    printf("enter item u want to insert:");
    scanf("%d",&item);
    delete(arr,size,posn,item);
    return 0;
}
int delete(int arr[],int size,int posn,int item)
{
    int i;
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=size;i>=posn;i--)
    {
       arr[i]=arr[i-1];
    }
    arr[posn-1]=item;
    size++;
    printf("new array:");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
}*/
/*#include<stdio.h>
int main()
{
    int arr[30],size,i;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]*10);
    }
    return 0;

}*/
/*#include<stdio.h>
int main()
{
    int arr[30],n,i;
    printf("enter no of students:");
    scanf("%d",&n);
    printf("enter cgpa of students:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>9)
        {
            printf("%d\t",arr[i]);
        }
    }
    return 0;
}*/


/*SORTING USING FUNCTION*/

/*#include<Stdio.h>
int sorting(int[],int);
int main()
{
    int arr[30],m;
    printf("enter size of array:");
    scanf("%d",&m);
    sorting(arr,m);
    return 0;
}
int sorting(int arr[],int m)
{
    int i,j,temp;  
    printf("enter the array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(arr[i]>arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        printf("%d\t",arr[i]);
    }
    return 0;
}*/


/*INSERTION USING FUNCTION*/

/*#include<stdio.h>
int insertion(int[],int);
int main()
{
    int arr[30],m;
    printf("enter size of array:");
    scanf("%d",&m);
    insertion(arr,m);
    return 0;
}
int insertion(int arr[],int m)
{
    int i,j,posn,x;
    printf("enter the array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the element you want to insert:");
    scanf("%d",&x);
    printf("enter the position where you want to insert:");
    scanf("%d",&posn);
    for(i=m;i>=posn;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[posn-1]=x;
    m++;
    for(i=0;i<m;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}*/


/*MERGING OF TWO ARRAY IN A SINGLE ARRAY*/
/*#include<stdio.h>
int array(int[],int[],int[],int,int);
int main()
{
    int arr1[30], arr2[30],arr3[30],m,n;
    printf("enter size of first array:");
    scanf("%d",&m);
    printf("enter size of second array:");
    scanf("%d",&n);
    array(arr1,arr2,arr3,m,n);
    return 0;
}
int array(int arr1[],int arr2[],int arr3[],int m,int n)
{
    int i,j,k=0;
    printf("enter first array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter second array:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr2[i]);
    }
    for(i=0;i<m;i++,k++)
    {
        arr3[k]=arr1[i];
    }
    for(j=0;j<n;j++,k++)
    {
       arr3[k]=arr2[j];
    }
    printf("merged array:");
    for(i=0;i<k;i++)
    {
        printf("%d",arr3[i]);
    }
}*/


/*updation of an element*/
/*#include<stdio.h>
int update(int [],int);
int main()
{
    int arr[30],m;
    printf("enter the size of array:");
    scanf("%d",&m);
    update(arr,m);
    return 0;
}
int update(int arr[],int m)
{
    int i,posn,x;
    printf("enter the array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the position where you want to update:");
    scanf("%d",&posn);
    printf("enter the update value:");
    scanf("%d",&x);
    arr[posn-1]=x;
    for(i=0;i<m;i++)
    {
        printf("%d",arr[i]);
    }

}*/


/*TRANSPOSE OF A MATRIX*/
/*#include<stdio.h>
int transpose(int[20][20],int,int,int[20][20]);
int main()
{
    int arr[20][20],m,n,trans[20][20];
    printf("enter no. of rows:");
    scanf("%d",&m);
    printf("enter no.of columns:");
    scanf("%d",&n);
    transpose(arr,m,n,trans);
    return 0;
}
int transpose(int arr[20][20],int m,int n,int trans[20][20])
{
    int i,j;
    printf("enter the matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
        trans[j][i]=arr[i][j];
        }
    }
    printf("tranpose matrix:");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }
}*/
/*#include<stdio.h>
#include<stdlib.h>
int main() {

    int n,sum=0;
    scanf("%d",&n);
    int i;
    int *array=(int *)malloc(n*sizeof(int));
    printf("enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+array[i];
    }
    printf("sum is:%d",sum);
    free(array);
    return 0;
}*/
/*#include<stdio.h>
int array(int[],int[],int[],int,int);
int main()
{
    int arr1[30], arr2[30],arr3[30],m,n;
    printf("enter size of first array:");
    scanf("%d",&m);
    printf("enter size of second array:");
    scanf("%d",&n);
    array(arr1,arr2,arr3,m,n);
    return 0;
}
int array(int arr1[],int arr2[],int arr3[],int m,int n)
{
    int i,j,k=0;
    printf("enter first array:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("enter second array:");
    for(i=0;i<n;i++)
    {
      scanf("%d",&arr2[i]);
    }
    for(i=0;i<m;i++,k++)
    {
        arr3[k]=arr1[i];
    }
    for(j=0;j<n;j++,k++)
    {
       arr3[k]=arr2[j];
    } 
    printf("merged array:");
    for(i=0;i<k;i++)
    {
        printf("%d\t",arr3[i]);
    }
}*/
/*#include<stdio.h>
int main()
{
    int arr[30],size,i,j,temp,min;
    printf("enter the size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
            if(min!=i)
            {
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
            }

        
    }
    printf("sorted array:");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}*/


/*binary search program using function*/
/*#include<stdio.h>
int binary(int[],int,int);
int main()
{
    int arr[30],size,item;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element you want to search:");
    scanf("%d",&item);
    binary(arr,size,item);
    return 0;
}
int binary(int arr[],int size,int item)
{
    int i,flag;
    int start=0;
    int end=size-1;
    for(i=0;i<size;i++)
    {
        int mid=start+end/2;
        if(item>arr[mid])
        {
            start=mid+1;
        }
        else if(arr[mid]==item)
            {
                printf("element is present at %d position",mid);
                break;
            }
            else
            {
                end=mid-1;
            }
        
         flag=0;
    }
    if(flag==0)
    {
        printf("element not found");
    }
    return 0;
}*/
/*#include<stdio.h>
int selection_sort(int[],int);
int main()
{
    int arr[30],size;
    printf("enter array size:");
    scanf("%d",&size);
    selection_sort(arr,size);
    return 0;
}
int selection_sort(int arr[],int size)
{
    int i,j,min;
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size-1;i++)
    {
        min=i;
        for(j=i+1;j<size;j++)
        {
           if(arr[j]<arr[min])
           {
            min=j;
           }
        }
        if(min!=i)
        {
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
    }
    printf("sorted array:");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}*/
/*#include<stdio.h>
int insert(int[],int);
int delete(int[],int);
int display(int[],int);
int main()
{
    int arr[30],size,i;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int var;
    printf("enter a character:");
    scanf("%d",&var);
    switch(var)
    {
        case 1:display(arr,size);
             break;
        case 2:insert(arr,size);  
             break;
        case 3:delete(arr,size);
             break;       
    }
    return 0;
}
int display(int arr[],int size)
{
    int i;
    printf("Array is:");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    insert(arr,size);
}
int insert(int arr[],int size)
{
    int item,posn,i;
    printf("enter element you want to insert:");
    scanf("%d",&item);
    printf("enter the position where you want to insert:");
    scanf("%d",&posn);
    for(i=size;i>=posn;i--)
    {
      arr[i]=arr[i-1];
    }
    size++;
    arr[posn-1]=item;
    printf("inserted array:");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    delete(arr,size);
}
int delete(int arr[],int size)
{
    int posn,i;
    printf("enter the position where you want to delete:");
    scanf("%d",&posn);
    for(i=posn;i<size;i++)
    {
        arr[i-1]=arr[i];
    }
    size--;
    printf("deleted array:");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
}*/
/*#include<stdio.h>
int binary(int[],int,int);
int main()
{
    int arr[30],size,item;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element you want to search:");
    scanf("%d",&item);
binary(arr,size,item);  
    return 0;
}
int binary(int arr[],int size,int item)
{
    int i,flag;
    int start=0;
    int end=size-1;
    for(i=0;i<size;i++)
    {
        int mid=start+end/2;
        if(item>arr[mid])
        {
            start=mid+1;
        }
        else if(arr[mid]==item)
            {
                printf("element found at %d position",mid);
                break;
            }
            else
            {
                end=mid-1;
            }
        
         flag=0;
    }
    if(flag==0)
    {
        printf("element not found");
    }
}*/
/* INSERTION SORT*/
/*#include<Stdio.h>
int main()
{
    int arr[30],size,i,j,temp;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<size;i++)
    {
      temp=arr[i];
      j=i-1;
      while(j>=0 && arr[j]>temp)
      {
        arr[j+1]=arr[j];
      }
      arr[j+1]=temp;
    }
    printf("sorted array:");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;
}*/
/*#include<stdio.h>
void rectangle(int *,int *);
int main()
{
    int length,breadth,a,*ptr,*qtr;
    ptr=&length;
    qtr=&breadth;
    printf("enter length and breadth of rectangle:");
    scanf("%d%d",ptr,qtr);
    rectangle(ptr,qtr);
    return 0;
}
void rectangle(int *ptr,int  *qtr)
{
   int area,perimetre;
   area=(*ptr)*(*qtr);
   perimetre=2*(*ptr+*qtr);
   printf("area is:%d",area);
   printf("perimetre is:%d",perimetre);
    
}*/
/*#include<stdio.h>
int fact(int);
int main()
{
    int num;
    printf("enter a no:");
    scanf("%d",&num);
    fact(num);
    return 0;

}
int fact(int num)
{
    int fact=1,*ptr;
    ptr=&fact;
    int i;
    for(i=1;i<=num;i++)
    {
        *ptr=*ptr*i;
    }
    printf("factorial is:%d",*ptr);
}*/
/*CONVERSION OF A SPARSE MATRIX INTO TRIPLET MATRIX*/
/*#include<Stdio.h>
int main()
{
    int sparse[30][30],row,col,triplet[30][30],temp=1,i,j,count=0;
    printf("enter total no of rows and columns:");
    scanf("%d%d",&row,&col);
    printf("enter sparse matrix elements:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&sparse[i][j]);
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(sparse[i][j]!=0)
            {
               count++;
            }
        }
    }
    triplet[temp][0]=row;
    triplet[temp][1]=col;
    triplet[temp][2]=count;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(sparse[i][j]!=0)
            {
                triplet[temp][0]=i;
                triplet[temp][1]=j;
                triplet[temp][2]=sparse[i][j];
                temp++;
            }
        }
    }
    printf("triplet form:\n");
    for(i=0;i<count+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",triplet[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

/*CONVERSION OF A SPARSE MATRIX INTO TRIPLET FORM USING POINTER*/
/*#include<stdio.h>
int trip(int[][],int,int,int[][]);
int main()
{
    int row,col,sparse[30][30],triplet[20][20];
    printf("enter total no of rows and columns:");
    scanf("%d%d",&row,&col);
    trip(sparse,row,col,triplet);
    return 0;
}
int trip(int sparse[][],int row,int col,int triplet[][])
{
    int *ptr,i,j,temp=1,count=0;
    ptr=sparse;
    printf("enter sparse matrix elements:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",(ptr+i));
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(*ptr!=0)
            {
                count++;

            }
        }
    }


}*/
/*#include<stdio.h>
#include<math.h>
int main()
{
    int n2,n1,i;
    printf("enter one number:");
    scanf("%d%d",&n1,&n2);
    for(i=n1;i<=n2;i++)
    {
        if(i>=1 && i<=9)
        {
           switch(i) 
           {
            case 1:printf("one\n");
                  break;
            case 2:printf("two\n");
                  break;
            case 3:printf("three\n");
                  break;
            case 4:printf("four\n");
                  break;
            case 5:printf("five\n");
                  break;
            case 6:printf("six\n");
                  break;
            case 7:printf("seven\n");
                  break;
            case 8:printf("eight");
                  break;
            case 9:printf("nine");
                  break;
           }
        }
        else if (i%2==0)
        {
            printf("even\n");
        }
        else 
        {
            printf("odd\n");
        }
    }
    return 0;
}*/
/*#include<stdio.h>
void input(int[],int);
void display(int[],int);
int class_max(int[],int);
int class_min(int[],int);
int class_sum(int[],int);
int class_avg(int[],int,int);
int main()
{
    int arr[50],size;
    printf("enter size of array:");
    scanf("%d",&size);
    input(arr,size);
    printf("\nmaximum:%d",class_max(arr,size));
    printf("\nminimum:%d",class_min(arr,size));
    printf("\nsum is:%d",class_sum(arr,size));
    printf("\naverage is:%d",class_avg(arr,size,class_sum(arr,size)));
    return 0;
}
void input(int arr[],int size)
{
    int i;
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    display(arr,size);
}
void display(int arr[],int size)
{
    int i;
    printf("\narray is:");
    for(i=0;i<size;i++)
    {
        printf("%d\t",arr[i]);
    }
    class_max(arr,size);
}
int class_max(int arr[],int size)
{
    int max=0,i;
    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
    class_min(arr,size);
}
int class_min(int arr[],int size)
{
    int min=arr[0],i;
    for(i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
    class_sum(arr,size);
}

int class_sum(int arr[],int size)
{
    int i,sum=0;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
    class_avg(arr,size,sum);
}
int class_avg(int arr[],int size,int sum)
{
    int average;
    average=sum/size;
    return average;
}*/
/*#include<stdio.h>
int binary(int [],int,int);
int main()
{
    int arr[30],size,item,i;
    printf("enter size of array:");
    scanf("%d",&size);
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter element you want to search:");
    scanf("%d",&item);
    binary(arr,size,item);
    return 0;
}
int binary(int arr[],int size,int item)
{
    int start=0,i;
    int end=size-1;
    while(start<=end)
    {
       int mid=start+end/2;
       if(arr[mid]==item)
       {
        printf("element exist at posn %d",mid);
        break;
       }
       if(item>arr[mid])
       {
        start=mid+1;
       }
       else{
        end=mid-1;
        i=0;
       }
    }
    if(i==0)
    {
        printf("element not found");
    }
}*/
/*#include<stdio.h>
#define size 5
int push();
int pop();
int display();
int peak();
int isfull();
int isempty();
int stack[size],top=-1;
int main()
{
    push(2);
    push(3);
    push(4);
    push(9);
    pop();
   printf("element at the top of the stack:\n",peak());
   printf("stack elements:\n",display());
   printf("stack full:",isfull()?"true":"false");
   printf("stack empty:",isempty()?"true":"false");
    return 0;
}
int push(int data )
{
    if(!isfull())
    {
        top=top+1;
        stack[top]=data;
    }
    else{
        printf("stack overflow");
    }
}
int pop()
{
    int data;
    if(!isempty())
    {
        data=stack[top];
        top=top-1; 
        return data;
    }
    else{
        printf("stack underflow");
    }
}
int peak()
{
    return stack[top];
}
int isfull()
{
    if(top==size)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int display()
{
    int i;
    for(i=top;i>=0;i--)
    {
    return stack[i];
    }
}*/
/*sum of elements of an array*/
/*#include<stdio.h>
void sum(int[],int);
int main()
{
    int arr[30],size;
    printf("enter the size of array:");
    scanf("%d",&size);
    sum(arr,size);
    return 0;
}
void sum(int arr[],int size)
{
    int *ptr,i,sum=0;
    ptr=arr;
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<size;i++)
    {
        sum=sum+*(ptr+i);
    }
    printf("sum is:%d",sum);
}*/
/*sort the elements of an array using pointer*/
/*#include<stdio.h>
void sorting(int[],int);
int main()
{
    int arr[30],size;
    printf("enter array size:");
    scanf("%d",&size);
    sorting(arr,size);
     return 0;
}
void sorting(int arr[],int size)
{
    int i,j,*ptr,temp;
    ptr=arr;
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
           
            if(*(ptr+i)>*(ptr+j))
            {
          temp=*(ptr+i);
          *(ptr+i)=*(ptr+j);
          *(ptr+j)=temp;
            }
        }
    }
    printf("sorted array:");
    for(i=0;i<size;i++)
    {
        printf("%d",*(ptr+i));
    }

}*/
/*#include<stdio.h>
void array(int[],int);
int main()
{
    int arr[30],size;
    printf("enter size of array:");
    scanf("%d",&size);
    array(arr,size);
    return 0;
}
void array(int arr[],int size)
{
    int *ptr,i;
    ptr=arr;
    printf("enter array elements:");
    for(i=0;i<size;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("array is:");
    for(i=0;i<size;i++)
    {
        printf("%d",*(ptr+i));
    }
    printf("adress is:");
    for(i=0;i<size;i++)
    {
        printf("%d\t",(int)(ptr+i));
    }

}*/
/*#include<stdio.h>
#include<stdlib.h>
#define max 5 
void push();
void pop();
void display();
int isempty();
int isfull();

struct stack
{
    int sta[max];
    int top;
} s;
int main()
{
    int ch;
    s.top=-1;
    while(1)
    {
        printf("enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:push();
                  break;
            case 2:pop();
                  break;
            case 3:isempty();
                   break;
            case 4:isfull();
                   break;
            case 5:display();
                   break;
            case 6:exit(0);
            default:
                   printf("wrong choice");                                
        }
    }
    return 0;
}
void push()
{
    int data;
    if(s.top==max-1)
    {
        printf("stack overflow");
    }
    else{
        printf("enter data:");
        scanf("%d",&data);
         s.top++;
         s.sta[s.top]=data;
         printf("pushed element:%d",data);
    }
}
void pop()
{
    int x;
    if(s.top==-1)
    {
        printf("stack underflow");
    }
    else{
        s.sta[s.top]=x;
        s.top--;
    }
    printf("popped element:%d",x)
}
int isempty()
{
    if(s.top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isfull()
{
    if(s.top==max-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void display()
{
    if(isempty()==1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("elements are:");
        for(int i=s.top;i>=0;i--)
        {
            printf("%d",s.sta[i]);
        }
    }
}*/

//QUEUE OPERATIONS//

/*#include<stdio.h>
#include<stdlib.h>
#define max 5
void enqueue();
void dequeue();
void display();
int que[max],front=-1,rear=-1;
int main()
{
    int ch;
    int option=1;
    while(option)
    {
        printf("enter choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
               enqueue();
               break;
            case 2:
               dequeue();
               break;
            case 3:
              display();
              break;
            default:
              printf("wrong choice"); 
        }
        printf("enter whether you want to continue or not(1/0):");
        scanf("%d",&option);
    }
    return 0;
}
void enqueue()
{
    int data;
    if(rear==max-1)
    {
        printf("overflow");
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        printf("enter element:");
        scanf("%d",&data);
        rear++;
        que[rear]=data;
    }
}
void dequeue()
{
    int x;
    if(front==-1|| front>rear)
    {
        printf("underflow");
    }
    else
    {
        x=que[front];
        front++;
        printf("dequeued element:%d",x);
        display();
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        printf("queue is empty");
    }
    else
    {
        printf("elements are:\n");
        for(i=front;i<=rear;i++)
        {
            printf("%d\t",que[i]);
        }
    }
}*/
  
  //CONVERSION OF INFIX TO POSTFIX EXPRESSION//

  /*#include<stdio.h>
  #include<stdlib.h>
  #include<ctype.h>
  #include<string.h>
  void push(char);
  char pop();
  int precedance(char);
  int is_operator(char);
  int infix_to_postfix(char[],char[]);
  char stack[100];
  int top=-1;
  int size;
  int main()
  {
    char infix_exp[100],postfix_exp[100];
    printf("enter size of stack:");
    scanf("%d",&size);
    printf("enter infix expression:");
    scanf("%s",infix_exp);
    infix_to_postfix(infix_exp,postfix_exp);
    printf("postfix expression:%s",postfix_exp);
    return 0;
  }
  int infix_to_postfix(char infix_exp[],char postfix_exp[])
  {
    int i,j;
    char item,x;
    push('(');
    strcat(infix_exp,")");
    i=0;
    j=0;
    item=infix_exp[i];
    while(item!='\0')
    {
        if(item=='(')
        {
            push(item);
        }
        else if(isdigit(item)||isalpha(item))
        {
            postfix_exp[j]=item;
            j++;
        }
        else if(is_operator(item)==1)
        {
            x=pop();
            while((is_operator(x)==1) && (precedance(x)>=precedance(item)))
            {
                postfix_exp[j]=x;
                j++;
                x=pop();
            }
            push(x);
            push(item);
        }
        else if(item==')')
        {
            x=pop();
            while(x!='(')
            {
                postfix_exp[j]=x;
                j++;
                x=pop();
            }
        }
        else{
            printf("invalid expression");
            exit(0);
        }
    i++;
    item=infix_exp[i];
    }
    postfix_exp[j]='\0';
  }
  int is_operator(char symbol)
  {
       if(symbol=='+'||symbol=='-'||symbol=='*'||symbol=='/'||symbol=='%'||symbol=='^')
       {
        return 1;
       }
       else 
       {
        return 0;
       }
  }
  int precedance(char symbol)
  {
    if(symbol=='^')
    {
        return 3;
    }
    else if(symbol=='*'||symbol=='/'||symbol=='%')
    {
        return 2;
    }
    else if(symbol=='+'|| symbol=='-')
    {
        return 1;
    }
    else{
        return 0;
    }
  }
  void push(char item)
  {
    if(top==size-1)
    {
        printf("\n stack overflow");
    }
    else{
        top++;
        stack[top]=item;
    }
  }
  char pop()
  {
    char item;
    if(top==-1)
    {
        printf("\n stack underflow");
    }
    else
    {
        item=stack[top];
        top--;
        return(item);
    }
  }*/
    
    //POSTFIX EVALUATION 
 /*#include<stdio.h>
 #include<stdlib.h>
 #include<ctype.h>
 #include<string.h>
 #define max 5
 void sum();
 void diff();
 void multi();
 void power();
 void divi();
 int stack[max];
 int top=-1;
 int main()
 {
    char postfix[30],i=0;
    printf("enter postfix expression:");
    scanf("%s[^\n]",postfix);
    for(i=0;postfix[i]!='\0';i++)
    {
        if(postfix[i]!=' ')
        {
            switch(postfix[i])
            {
                case '+':sum();
                         break;
                case '-':diff();
                         break;
                case '*':multi();
                         break;
                case'/': divi();
                         break;
                case'^':power();
                         break;
                default:
                   top++;
                   stack[top]=postfix[i]-48;        
            }
        }
    }
    printf("\n result is:%d",stack[top]);
    return 0;
 }
 void sum()
 {
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op1+op2;
    stack[top]=res;
 }
 void diff()
 {
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op1-op2;
    stack[top]=res;
 }
 void multi()
 {
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op1*op2;
    stack[top]=res;
 }
 void divi()
 {
    int res,op1,op2;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    res=op1/op2;
    stack[top]=res;
 }
 void power()
 {
    int res=1,op2,op1,i;
    op1=stack[top];
    top--;
    op2=stack[top];
    top--;
    for(i-0;i<op1;i++)
    {
        res=res*op2;
    }
    top++;
    stack[top]=res;
 }*/

  //SPARSE TO TRIPLET FORM

/*#include<stdio.h>
int main()
{
    int sparse[30][30],triplet[30][30],i,j,temp=1,count=0,row,col;
    printf("enter total no of rows and columns:");
    scanf("%d%d",&row,&col);
    printf("enter a sparse matrix:");
    for(i=0;i<row;i++)
    {
       for(j=0;j<col;j++)
       {
        scanf("%d",&sparse[i][j]);
       }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(sparse[i][j]!=0)
            {
                count++;
            }
        }
    }
    triplet[0][0]=row;
    triplet[0][1]=col;
    triplet[0][2]=count;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(sparse[i][j]!=0)
            {
                triplet[temp][0]=i;
                triplet[temp][1]=j;
                triplet[temp][2]=sparse[i][j];
                temp++;
            }
        }
    }
    printf("triplet form:\n");
    for(i=0;i<count+1;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",triplet[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/

     //TRANSPOSE OF A SPARSE MATRIX//
      
      /*#include<stdio.h>
      int main()
      {
        int triplet[30][30],col_major[50][3],row,col,nzero,temp=1,i,j;
        printf("enter total rows and columns:");
        scanf("%d%d",&row,&col);
        printf("enter total no of nonzero values of sparse matrix:");
        scanf("%d",&nzero);
        for(i=0;i<nzero+1;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("enter value:");
                scanf("%d",&triplet[i][j]);
            }
        }
        for(i=0;i<nzero+1;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d",triplet[i][j]);
            }
            printf("\n");
        }
        row=triplet[0][0];
        col=triplet[0][1];
        col_major[0][0]=col;
        col_major[0][2]=nzero;
        for(j=0;j<col;j++)
        {
            for(i=1;i<nzero+1;i++)
            {
                if(triplet[i][1]==j)
                {
                    col_major[temp][0]=j;
                    col_major[temp][1]=triplet[i][0];
                    col_major[temp][2]=triplet[i][2];
                    temp++;
                }
            }
        }
        for(i=0;i<nzero+1;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d\t",col_major[i][j]);
            }
        }
        return 0;


      }*/

       //...QUEUE OPERATIONS USING STRUCTURE...//
       /*#include<stdio.h>
       #define max 5
       void enqueue();
       void dequeue();
       void display();
       int isfull();
       int isempty();
       void peek();
       struct queue
       {
        int queue[max];
        int front;
        int rear;
       }s;
       int main()
       {
          int ch,option=1;
          s.front=-1;
          s.rear=-1;
          while(option)
          {
            printf("enter choice:");
            scanf("%d",&ch);
            switch(ch)
            {
                case 1:
                   enqueue();
                   break;
                case 2:
                   dequeue();
                   break;
                case 3:
                   display();
                   break;
                case 4:
                    peek();
                    break;
                case 5:
                   isfull();
                   printf("queue is full:%s",isfull()?"yes":"no");
                   break;
                case 6:
                   isempty();
                   printf("queue is empty:%s",isempty()?"yes":"no");
                   break;          
                default:
                     printf("wrong choice");      
            }
          printf("\nenter whether you want to continue or not:");
          scanf("%d",&option);
          }
        return 0;
       }
       void enqueue()
       {
        int data;
        if(s.rear==max-1)
        {
            printf(" queue overflow");
        }
        else
        {
            int data;
            printf("\nenter element you want to insert:");
            scanf("%d",&data);
            s.rear++;
            s.queue[s.rear]=data;
            printf("\npushed element:%d",data);
        }
       }
        void dequeue()
        {
            int num;
            if(s.front==-1|| s.front>s.rear)
            {
                printf("queue underflow");
            }
            else{
                s.queue[s.front]=num;
                s.front++;
                printf("\ndeleted element:%d",num);
            }
        }
        void peek()
        {
            printf("\npeek element:%d",s.queue[s.front]);
        }
        int isfull()
        {
            if(s.queue[s.rear]==max-1)
            {
                return 1;
            }
            else{
                return 0;
            }
        }
        int isempty()
        {
            if(s.front==-1||s.front>s.rear)
            {
                return 1;
            }
            else{
                return 0;
            }
        }
        void display()
        {
            int i;
            printf("queue elements:");
            for(i=s.front;i<=s.rear;i++)
            {
                printf("%d\t",s.queue[i]);
            }
        }*/
      
      //...STACK OPERATIONS...//
      /*#include<stdio.h>
      #include<stdlib.h>
      #define max 5
      void push();
      void pop();
      int isempty();
      int isfull();
      void display();
      void peek();
      int stack[max];
      int top=-1;
      int main()
      {
        push(5);
        push(6);
        push(7);
        push(8);
        display();
        pop();
        display();
        peek();
        display();
        return 0;
      }
      void push(int m)
      {
        
        if(top==max-1)
        {
            printf("stack overflow");
        }
        else
        {
            top++;
            stack[top]=m;
        }
        printf("\npushed element to the stack:%d",m);
      }
      void pop()
      {
        int data;
        if(top==-1)
        {
            printf("stack underflow");
        }
        else{
            data=stack[top];
            top--;
        }
        printf("\npopped element from the stack:%d",data);
      }
      int isempty()
      {
        if(top==-1)
        {
            printf("stack underflow");
            return 1;
        }
        else{
            return 0;
        }
      }
      int isfull()
      {
        if(top==max-1)
        {
            printf("stack overflow");
            return 1;
        }
        else
        {
            return 0;
        }
      }
      void display()
      {
        int i;
        printf("\nstack elements:");
        for(i=top;i>=0;i--)
        {
            printf("%d\t",stack[i]);
        }
      }
      void peek()
      {
        if(top==-1)
        {
            printf("stack underflow");
        }
        else
        {
            printf("peek element:%d",stack[top]);
        }
      }*/
      
     /*//CIRCULAR QUEUE OPERATIONS USING STACK//
     #include<stdio.h>
     #include<stdlib.h>
     #define max 5
     void display();
     void delete();
     void insert();
     int queue[max],rear=-1,front=-1;
     int main()
     {
        int choice;
        while(1)
        {
            printf("enter choice:");
            scanf("%d",&choice);
            switch(choice)
            {
                case 1:insert();
                        break;
                case 2:delete();
                        break;
                case 3:display();
                        break;    
                case 4:
                       exit(0);
                default:
                     printf("wrong choice");
            }
        }
        return 0;
     }
     void insert()
     {
        int item;
        if(rear=max-1 && front==0||front==rear+1)
        {
           printf("queue overflow");
        }
        else
        {
            printf("enter value you want to insert:");
            scanf("%d",&item);
            if(rear==-1)
            {
                rear++;
                front++;
            }
            else if(rear==max-1)
            {
                rear=0;
            }
            else
            {
                rear++;
            }
            queue[rear]=item;
        }
        printf("pushed element:%d",item);
     }
     void delete()
     {
        if(front==-1)
        {
           printf("queue underflow");
        }
        else{
            printf("deleted value:%d",queue[front]);
           if(rear==front)
           {
            front=-1;
            rear=-1;
           }
           else if(front==max-1)
           {
            front=0;
           }
           else{
            front++;
           }
        }
     }
        void display()
        {
            int i;
            if(front==-1)
            {
                printf("queue underflow");
            }
            else
            {
                printf("elements are:\n");
                if(front<=rear)
                {
                    for(i=front;i<=rear;i++)
                    {
                        printf("%d\t",queue[i]);
                    }
                }
                else  
                {
                    for(i=front;i<max;i++)
                    {
                        printf("%d\t",queue[i]);
                    }
                    for(i=0;i<=rear;i++)
                    {
                      printf("%d\t",queue[i]);
                    }
                }
            }
        }*/
         ///.....ROCK PAPER OR SCISSOR.....///
         /*import random
user_choice=int(input("enter your choice:Type 0 for rock,1 for paper and 2 for scissor"))
computer_choice=random.randint(0,2)
print("computers choice:")
print(computer_choice)
if(computer_choice==user_choice):
    print("its a draw")
elif(computer_choice>user_choice):
    print("you lose")
elif(user_choice>computer_choice):
    print("you win")
elif(computer_choice==0 and user_choice==2):
    print("you lose")
elif(user_choice==0 and computer_choice==2):
   print("you win")*/
    

        
          

      
        

       

