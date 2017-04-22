/*
 *  Cluster.h
 *  ClusterStateSimulation
 *
 *  Created by Josh waddington on 22/08/2012.
 *  Copyright 2012 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef CLUSTER_H
#define CLUSTER_H

#define Ps 0.5
#include "qbit.h"
#include "ClusterCounting.h"
#include <vector>

//Cluster class will hold N qbits, this class will contain the stratergies for fusion
// and hold data on the chain lenghts, info on time steps will also have to be contained

using std::vector;

class Cluster{
public:
	Cluster();
	void Greed();
	void Modesty();	
	void TypeIfusion(int qbit, int targetqbit);
	void print(); // prints out matrice of qbits and entanglements
	void count_entanglements();
	void order_entanglements();
	void sort_entanglements();
private:
	Qbit a[N];
	vector<ClusterCounting> b;
	
	
};
#endif