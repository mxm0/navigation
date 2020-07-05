#include <assert.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "amcl/area/area.h"


// Create a new area
area_t *area_alloc(void)
{
  area_t *area;

  area = (area_t*) malloc(sizeof(area_t));
  
  // Allocate storage for main map
  area->zones = (zone_t*) NULL;

  return area;
}


// Destroy an area 
void area_free(area_t *area)
{
  free(area->zones);
  free(area);
  return;
}

