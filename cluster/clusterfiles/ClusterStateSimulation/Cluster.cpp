/*
 *  Cluster.cpp
 *  ClusterStateSimulation
 *
 *  Created by Josh waddington on 22/08/2012.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#include "Cluster.h"
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;





//Public

Cluster::Cluster(){

	for (int i =0; i<N; i++) {
		
		a[i].set_position(i);
		
	}
	
	b.resize(N);

}



void Cluster::count_entanglements(){
	
	int j,k,cluster_count=0;
	int previousqbit = 2*N;
	
	
	
	for (int i =0; i<N; i++) {					// note i is postion and j is qbit ref
		j=0;
		k=0;
		while (a[j].position_value() != i) {j++;}    /// these two lines of code find the qbit that is in postition i
		
		while (a[j].entanglement_value(k) != 1 && k < N ) {k++;}/*   This line increments k until it has found an entanglement for qbit j
																	It leaves the loop when it has either found an entanglement or if k has become greater than
																	the total number of qbits.
																*/ 
																			
		
		
		
		if( k == N ) { cluster_count++;}					/* This line counts a cluster for every time k has looped through with out finding a entanglement
															 aka a single single unentangled qubit*/
		
		if (k == previousqbit) {
			
			cout << " previous Qbit" << endl;				/* This section counts a cluster for every time k has reached the last qbit in the entangled chain,
															 The second while loop is to fix the issue caused when k reaches the previous qbit before it reaches 
															 the next entangled qbit*/
			
			k++;
			
		while (a[j].entanglement_value(k) != 1 && k < N ) {k++;}	
			
			if( k == N ) { cluster_count++;}}
			 
		
		
		
		previousqbit = j;       // sets variable " prevoiusqbit" equal to the qbit currently being addressed.
		}
	
	
		
		
		cout << "no. of entanglements: " << cluster_count << endl;
	
	
	
	
	
	
}

void Cluster::order_entanglements(){

	int j,k,bcount=0;
	int previousqbit = 2*N;
	
	
	
	for (int i =0; i<N; i++) {					// note i is postion and j is qbit ref
		j=0;
		k=0;
		while (a[j].position_value() != i) {j++;}    /// these two lines of code find the qbit that is in postition i
		
		while (a[j].entanglement_value(k) != 1 && k < N ) {k++;}
		
		
		
		
		
		
		if( k == N ) { if(i != 0){bcount++;}}
		
		if (k == previousqbit) {
			
			cout << " previous Qbit" << endl;
			
			k++;
			
			while (a[j].entanglement_value(k) != 1 && k < N ) {k++;}	
			
			if( k == N ) { bcount++;}
		}
		
		
		
		b.at(bcount).add_qbit(j);
		

		
		
		previousqbit = j;
	}
	
	//testing printout statement  
	
	
	for (int z =0; z<N; z++){
	
		cout << "lenght of b[" << z << "] is: " <<b[z].get_length() << endl;
	
		cout << "member qbits of cluster b[" << z << "] :  " << endl;
		
		for( int x = 0; x<N; x++){ cout << "member " << x << ":" << b[z].memberqbit_entanglementvalue(x)  << endl; }
		}


}




void Cluster::sort_entanglements(){

	
	
	
	
		
	
	
	
	
	
}







// there is a probability Ps of each fusion operation being successful
// If it is successfull each qbit entanglement array needs changing
// If successfull the lenght of each qbit chain needs updating.
void Cluster::TypeIfusion(int qbit, int targetqbit){
	
	double randomgen,randomno;
	
	randomgen = (int)((rand()%10001));
	randomno = randomgen/10000.0;

	
	cout << " randno " << randomno;
	
	if ( randomno > Ps){
	
	if(a[qbit].TypeIfusion(targetqbit)== 1){
		a[targetqbit].TypeIfusion(qbit);}
	}

}
	

void Cluster::print(){
	
	for (int i=0;i<N;i++)
	{
		for (int j=0;j<N;j++)
		{
			if (j==0){ cout << "Qbit " << (i) <<"       ";}
			
			if (i == j){
				cout <<"x"<< " " ;}
			else{cout <<a[i].entanglement_value(j)<< " " ;}
			
		}
		cout << "" << endl;
	}
	
	
	
	
	cout << endl << endl << endl;
	
	
}	


