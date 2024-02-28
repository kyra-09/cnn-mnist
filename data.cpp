#include "data.h"

data::data()
{
   feature_vector = new std::vector <uint8_t>; //making it 2-d.
}

data::~data()
{
    
}

void data::set_feature_vector (std::vector <uint8_t> *vect)
{
   feature_vector = vect;
}

void data::append_to_feature_vector (uint8_t val)
{
   feature_vector->push_back(val);
}

void data::set_label (uint8_t _label)
{
  label = _label;
}

void data::set_enumerated_label (uint8_t _enum_label)
{
  enum_label = _enum_label;
}

int data::get_feature_vector_size()
{ 
    return feature_vector->size();
}

uint8_t data::get_label()
{
   return label;
}

int data::get_enumerated_label()
{
   return enum_label;
}  

std::vector <uint8_t>* data:: get_feature_vector ()
{
    return feature_vector;
}