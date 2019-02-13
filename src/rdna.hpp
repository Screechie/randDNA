#include <random>

using namespace std;

string randDNA(int seed, string base, int seq_length){
	
	string randSeq;
	
	mt19937 eng2(seed);
	uniform_int_distribution<int> unifrm(0, base.size() - 1);
	
	for(int i=0; i < seq_length; i++){
		
		int order = unifrm(eng2);
		
		randSeq += base[order];
	}
	

	return randSeq;

}
