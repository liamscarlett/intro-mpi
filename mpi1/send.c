#include <stdio.h>
#include <mpi.h>
 
int main(int argc, char *argv[]) {
   int          rank,num,tag;
   MPI_Status   status;
 
   MPI_Init(&argc, &argv);
   MPI_Comm_rank(MPI_COMM_WORLD,&rank);
 
   tag=88;
 
   if (rank==0) {
      num=10;
      MPI_Send(&num,1,MPI_INT,1,tag,MPI_COMM_WORLD);
      printf("Process %d sent the number %d\n",rank,num);
   }
 
   if (rank==1) {
      MPI_Recv(&num,1,MPI_INT,0,tag,MPI_COMM_WORLD,&status);
      printf("Process %d received the number %d\n",rank,num);
   }
   
   MPI_Finalize();
   return 0;
}
