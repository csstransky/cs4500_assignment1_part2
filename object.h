#pragma once
#include <stdlib.h>

/**
 * A class that represents the top of the object hierarchy.
 * Inspired from the code on piazza written by vitekj@me.com
 * author: chasebish */
class Object {
public:

  /** CONSTRUCTORS & DESTRUCTORS **/

  /** Default Object constructor */
  Object() {}

  /** Default Object destructor, to be overriden by subclasses */
  virtual ~Object() {}


  /** VIRTUAL METHODS **/

  /** Returns whether two objects are equal, to be overriden by subclasses */
  virtual bool equals(Object* obj) {}

  /** Returns an object's hash, to be overriden by subclasses */
  virtual size_t hash_me_()  {}

  /** Prints a string representation of an Object, to be overriden by subclasses */
  virtual void print() {}

  /** Returns string representation of an Object, to be overriden by subclasses */
  virtual char* to_string() {}


  /** OBJECT METHODS **/

  /** Returns an object's hash value. Identical objects should have identical hashes */
  size_t hash() {}
};
