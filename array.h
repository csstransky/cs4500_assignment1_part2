//lang::CwC
#pragma once

#include "object.h"
#include "string.h"

/**
 * An basic Array class that should be inherited, but not directly used.
 * Requested here: https://github.com/chasebish/cs4500_assignment1_part2/issues/2
 * author: chasebish */
class Array : public Object {
public:
  /** CONSTRUCTORS & DESTRUCTORS **/

  /* Creates an Array of desired size */
  Array();

  /* Clears Array from memory */
  virtual ~Array();


  /** INHERITED METHODS **/

  /* Inherited from Object, checks equality between an Array and an Object */
  bool equals(Object* const obj);

  /* Inherited from Object, generates a hash for an Array */
  size_t hash();


  /** ARRAY METHODS **/
  
  /* Removes all elements from the Array */
  void clear();

  /* Returns the current length of the contents in an Array */
  size_t length();
};

/**
 * An Array class to which bools can be added to and removed from.
 * author: chasebish */
class BoolArray : public Array {
public:
  /** CONSTRUCTORS & DESTRUCTORS **/

  /* Creates an Array of desired size */
  BoolArray(const size_t size);

  /* Copies the contents of an already existing Array */
  BoolArray(BoolArray* const arr);

  /* Clears Array from memory */
  ~BoolArray();


  /** ARRAY METHODS **/

  /* Adds an Array to existing contents */
  void concat(BoolArray* const arr);

  /**
   * Gets an bool at the given index
   * Throws an error if not found or out of range or no elements in array */
  bool get(size_t index);

  /* Returns the index of the given bool, -1 if bool is not found */
  size_t index_of(bool to_find);

  /* Removes the last bool of the Array, returns the removed bool */
  /* Throws an error if not found or out of range or no elements in array*/
  bool pop();

  /* Adds an bool to the end of the Array, returns the new length */
  size_t push(bool to_add);

  /* Removes an bool at the given index, returns removed bool */
  /* Throws an error if not found or out of range or no elements in array*/
  bool remove(size_t index);

  /* Replaces an bool at the given index with the given bool, returns the replaced bool */
  /* Throws an error if not found or out of range or no elements in array*/
  bool replace(size_t index, bool to_add);
};

/**
 * An Array class to which floats can be added to and removed from.
 * author: chasebish */
class FloatArray : public Array {
public:
  /** CONSTRUCTORS & DESTRUCTORS **/

  /* Creates an Array of desired size */
  FloatArray(const size_t size);

  /* Copies the contents of an already existing Array */
  FloatArray(FloatArray* const arr);

  /* Clears Array from memory */
  ~FloatArray();


  /** ARRAY METHODS **/

  /* Adds an Array to existing contents */
  void concat(FloatArray* const toAdd);

  /**
   * Gets an bool at the given index
   * Throws an error if not found or out of range  or no elements in array*/
  float get(size_t index);

  /* Returns the index of the given float, -1 if float is not found */
  size_t index_of(float to_find);

  /* Removes the last float of the Array, returns the removed float */
  /* Throws an error if not found or out of range or no elements in array*/
  float pop();

  /* Adds an float to the end of the Array, returns the new length */
  size_t push(float to_add);

  /* Removes an float at the given index, returns removed float */
  /* Throws an error if not found or out of range or no elements in array*/
  float remove(size_t index);

  /* Replaces a float at the given index with the given float, returns the replaced float */
  /* Throws an error if not found or out of range or no elements in array*/
  float replace(size_t index, float to_add);
};

/**
 * An Array class to which ints can be added to and removed from.
 * author: chasebish */
class IntArray : public Array {
public:
  /** CONSTRUCTORS & DESTRUCTORS **/

  /* Creates an Array of desired size */
  IntArray(const size_t size);

  /* Copies the contents of an already existing Array */
  IntArray(IntArray* const arr);

  /* Clears Array from memory */
  ~IntArray();


  /** ARRAY METHODS **/

  /* Adds an Array to existing contents */
  void concat(IntArray* arr);

  /**
   * Gets an bool at the given index
   * Throws an error if not found or out of range or no elements in array */
  int get(size_t index);

  /* Returns the index of the given int, -1 if int is not found */
  size_t index_of(int to_find);

  /* Removes the last int of the Array, returns the removed int */
  /* Throws an error if not found or out of range or no elements in array*/
  int pop();

  /* Adds an int to the end of the Array, returns the new length */
  size_t push(int to_add);

  /* Removes an int at the given index, returns removed int */
  /* Throws an error if not found or out of range or no elements in array*/
  int remove(size_t index);

  /* Replaces an int at the given index with the given int, returns the replaced int */
  /* Throws an error if not found or out of range or no elements in array*/
  int replace(size_t index, int to_add);
};

/**
 * An Array class to which Objects can be added to and removed from.
 * author: chasebish & csstransky */
class ObjectArray : public Array {
public:
  /** CONSTRUCTORS & DESTRUCTORS **/

  /* Creates an Array of desired size */
  ObjectArray(size_t size);

  /* Copies the contents of an already existing Array */
  ObjectArray(ObjectArray* const arr);

  /* Clears Array from memory */
  ~ObjectArray();


  /** ARRAY METHODS **/

  /* Adds an ObjectArray to existing contents */
  virtual void concat(ObjectArray* const arr);

  /* Returns the index of the given Object, -1 if Object is not found */
  size_t index_of(Object* const to_find);

  /* Removes the last Object of the Array, returns the removed Object */
  /* Throws an error if not found or out of range or no elements in array*/
  virtual Object* pop();

  /**
   * Gets an Object at the given index
   * Throws an error if not found or out of range or no elements in array */
  virtual Object* get(size_t index);

  /* Adds a Object to the end of the Array, returns the new length */
  virtual size_t push(Object* const to_add);

  /* Removes a Object at the given index, returns removed Object */
  /* Throws an error if not found or out of range or no elements in array*/
  virtual Object* remove(size_t index);

  /* Replaces a Object at the given index with the given Object, returns the replaced Object */
  /* Throws an error if not found or out of range or no elements in array*/
  virtual Object* replace(size_t index, Object* const to_add);
};

/**
 * An Array class to which Strings can be added to and removed from.
 * author: chasebish */
class StringArray : public ObjectArray {
public:
  /** CONSTRUCTORS & DESTRUCTORS **/

  /* Creates an Array of desired size */
  StringArray(const size_t size);

  /* Copies the contents of an already existing Array */
  StringArray(StringArray* const arr);

  /* Clears Array from memory */
  ~StringArray();


  /** ARRAY METHODS **/

  /* Adds an StringArray to existing contents */
  void concat(StringArray* const arr);

  /* Removes the last String of the Array, returns the removed String */
  /* Throws an error if not found or out of range or no elements in array*/
  String* pop();

  /* Gets a String at the given index */
  /* Throws an error if not found or out of range or no elements in array*/
  String* get(size_t index);

  /* Adds a String to the end of the Array, returns the new length */
  size_t push(String* const to_add);

  /* Removes a String at the given index, returns removed String */
  /* Throws an error if not found or out of range or no elements in array*/
  String* remove(size_t index);

  /* Replaces a String at the given index with the given String, returns the replaced String */
  /* Throws an error if not found or out of range or no elements in array*/
  String* replace(size_t index, String* const to_add);
};
