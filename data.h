//functions - reading data and storing it in data structure.

#ifndef DATA_H
#define DATA_H
#include <iostream>
#include <cstdint>
#include <vector>

class data
{
public:
  //setter functions
   data();
   ~data();
   void set_feature_vector (std::vector<uint8_t> *);
   void append_to_feature_vector (uint8_t);
   void set_label (uint8_t);
   void set_enumerated_label (uint8_t);


   //getter functions.
   int get_feature_vector_size();
   uint8_t get_label();
   int get_enumerated_label();
   std::vector<uint8_t>* get_feature_vector ();

private:
std::vector<uint8_t> *feature_vector; //no class at end.
uint8_t label;
int enum_label; // A -> 1 , B -> 2


};

#endif