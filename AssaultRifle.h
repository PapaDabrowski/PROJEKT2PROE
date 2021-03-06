#pragma once
#include "Weapon.h"
#include <iostream>
#include <string>

class AssaultRifle:virtual public Weapon
{
protected:
   unsigned int RateOfFire;
public:
  AssaultRifle(unsigned int ,float,unsigned int,unsigned int,
    unsigned int,unsigned int,unsigned int);
  virtual unsigned int GetInfo();
  virtual unsigned int GetId();
  virtual std::string& GetType();
  virtual float GetCaliber();
  virtual unsigned int GetMuzzleVelocity();
  virtual unsigned int GetMagSize();
  virtual unsigned int GetRange();
  virtual unsigned int GetWeight();
  virtual unsigned int GetInfo2();
  virtual void Save(std::ofstream&);
  virtual ~AssaultRifle();
};
