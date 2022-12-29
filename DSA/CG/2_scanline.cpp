// #include<iostream>
// #include<graphics.h>
// using namespace std;
// class xyz // class declaraction
// {
// public: // access specifier public

// void scanline(int [] ,int [],int);//function declaration
// };

//  void xyz :: scanline(int xx[10],int yy[10],int n)//scanline function defination with xx[10],yy[10]arrays and n
//  { //begin of scanline function
//     int temp,ymax=0,ymin=480,inx[50],y;// variable declaration and initialization used in the function datatype integer
//     float m[50],dx,dy;// variable declaration and initialization used in the function datatype float
//     setcolor(BLUE);//setting the fill color as blue
//    for(int i=0;i<n;i++)//run for loop for n times
//    {  //begin the for loop
//     if(yy[i]>=ymax)//check if the value in the array is greater than or equal to ymax
// 	      ymax=yy[i];//if the condition yeilds to true set ymax=yy[i] i.e current value in array yy
//     if(yy[i]<=ymin)//check if the value in the array is less than or equal to ymin
//        ymin=yy[i];//if the condition yeilds to true set ymin=yy[i] i.e current value in array yy

//      dx = xx[i+1] - xx[i];//set dx as xx[i+1]-xx[i] to get the difference on x cords
//      dy = yy[i+1]-yy[i];//set dy as yy[i+1]-yy[i]

//      if(dy == 0)// check if dx==0
// 	      m[i] = 0;// set m[i]=0
//      if(dy == 0)// check if dy==0
// 	      m[i] =1;// set m[i]=1

//      if(dx!=0 && dy!=0)//if dx and dy are not 0
// 	      m[i]= (float) (dx/dy);// find slope
//   }//end loop

//    for(y=ymax;y>=ymin;y--)// run for where y is in between y min and ymax
//       { // begin for loop
//        int cnt=0; // set count cnt =0
//        for(i=0;i<n;i++)//run for n times
// 	{
// 	  if((yy[i]>y&&yy[i+1]<=y) || ( yy[i]<=y&&yy[i+1]>y))//check values in array yy if in range
// 	    {
// 	      inx[cnt]=(xx[i]+(m[i] * (y-yy[i])));// put the value the inx[cnt] to get points
// 	      cnt++;// increment cnt
// 	    }// end if
// 	 }// end for
// 	for(int k=0;k<cnt-1;k++)// run for cnt times
// 	  {
// 	    for(i=0;i<cnt-1;i++)// run for cnt times
// 	     {
// 	       if(inx[i]>inx[i+1])//check if inx[i] greater than inx[i+1]
// 		{
// 		  temp = inx[i]; //swap values inx[i] and inx[i+1]
// 		  inx[i] = inx[i+1];
// 		  inx[i+1] = temp;
// 		}
// 	     }
// 	 }
// 	 for(i=0;i<cnt-1;i+=2)

// 	  {
// 	     line(inx[i],y,inx[i+1]+1,y);// draw line with the values in array inx for x cords and
// 	     delay(100);
// 	   }
//      }
//  }
//  int main()//entry point of the program
// {// begin of the main function

//  int xx[10],yy[10],n,i=0,x,y,gd=DETECT,gm=0;//variable assignment and declaration
//  xyz s;// object of class xyz
//  cout<<"Enter No. of vertices::";//diplay msg to enter no of vertices
//  cin>>n;// accept the no. of vertices in n
//  for(i=0;i<n;i++)// run the for loop for n no of times
//   { //begin for loop
//    cout<<"\n Enter vertices of poly::";//display msg on the console to enter vertices
//    cin>>xx[i];// accept the x coordinate in array xx[]
//    cin>>yy[i];//accept the y coordinate in array yy[]
//   } // end the for loop

//   xx[i] = xx[0];    // assign the x coordinate as xx[0] i.e value in array with index 0
//   yy[i] = yy[0];     // assign the y coordinate as yy[0] i.e value in array with index 0

//   initgraph(&gd,&gm,NULL); // initialize the graphic using initgraph function
//   for(i=0;i<=n-1;i++)   //run for from 0 to n-1 i.e n times
//    {    // begin for loop
//     delay(200); //delay function to view with 200 milisecond timedifference
//     line(xx[i],yy[i],xx[i+1],yy[i+1]);//builtin line function to draw polygon of user given vertices
//    }    // end for loop
//  s.scanline(xx,yy,n); //call scanline function with 3 parameters
//  getch();// get character from the user
//  closegraph();// close graphics
//  return 0;// return 0 value to the main function
//  }// end of the main function


