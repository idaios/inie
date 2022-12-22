#include <iostream.h>
#include <stdlib.h>

struct ind {
  // the fitness of an individual
  double fitness;
  // the location of an individual.
  // They might be in general values that are associated with the location of the individual in space. 
  double *coordinates;
  // to which population the individual belongs to. Since we might
  // have more than one population, it's possible that an individual
  // belongs to one or the other population. If the individual will
  // migrate, then the membership will change, 
  int membership;
} individual;


struct pop{
  int N; // the population size
  ind *individuals; // the individuals it carries
  // if the fitness is absolute or relative. If the fitness is
  // relative, then what is happening is that the kids of the next
  // generation select their parents relative to the fitness value of
  // the parent. If the fitness is absolute, then each parent leaves a
  // number of children for the next generation. 
  int relativeFitness;
} population;
  
