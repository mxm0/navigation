#ifndef AREA_H
#define AREA_H

#ifdef __cplusplus
extern "C" {
#endif
  
// Description for a single zone.
typedef struct
{
	// Zone coordinates
	double min_x;
	double max_x;
	double min_y;
	double max_y;

} zone_t;


// Description for an area
typedef struct
{
  // Area is an array  of zones
  zone_t *zones;

	// Active zone
	int active_zone;

} area_t;



/**************************************************************************
 * Basic area functions
 **************************************************************************/

// Create a new (empty) map
area_t *area_alloc(void);

// Destroy a map
void area_free(area_t *area);

#ifdef __cplusplus
}
#endif

#endif
