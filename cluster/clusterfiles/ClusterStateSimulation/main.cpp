#include <iostream>
#include <cmath>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include "Cluster.h"
#include "qbit.h"
#include "Cluster.h"
#include "ClusterCounting.h"

using namespace std;

int main (void) {
    
	int test;
	
	
	Cluster TestCluster ;
	
	TestCluster.print();	

	
	
    
	TestCluster.TypeIfusion(0,1 );
	TestCluster.TypeIfusion(1,2 );
	//TestCluster.TypeIfusion(2, 3);
	//TestCluster.TypeIfusion(3, 4);
	//TestCluster.TypeIfusion(4, 5);
	
	TestCluster.count_entanglements();
	
	TestCluster.order_entanglements();
	
	
	
	
	TestCluster.print();
	
		
		
   return 0;
}
