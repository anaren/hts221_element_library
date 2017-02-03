	int16_t htsTemp;

	/**
	Read the temperature.  When set to Continuous Conversion mode, the
	device periodically performs temperature conversions at a predefined rate.  This
	function calulates the temperature using only the most recent conversion value.
	@param htsHumid int16_t to hold calculated humidity
	@return htsTemp temperature value that must be divided by 10 to get the value in ['C]
	*/

	HTS221_Get_Temperature(&htsTemp);

	return htsTemp / 10.0f; 
