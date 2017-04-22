/*
 *  qbit.h
 *  ClusterStateSimulation
 *
 *  Created by Josh waddington on 21/08/2012.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef QBIT_H
#define QBIT_H
#define N 10

//#include "Cluster.h"

//QBit Class

//each qbit object holds and inturnal 1 dimensional binary array of size N.
//This is to sort information about enetanglments with other qbits

class Qbit {
public:
	Qbit(); // constructor. Set up each qbit postion 
	bool entanglement_value(int j); //returns the 0 for not entnagled and 1 for entangeled. 
	bool TypeIfusion(int x); //performs a type 1 fusion operation on the qubit and modifies its array
	void set_position(int pos);
	int position_value();
private:
	bool entanglements[N];
	int  position; // current postion of the qbit in the cluster 
};
#endif
// add age of qbit