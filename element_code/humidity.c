	int16_t htsHumid;

	/**
	Read the relative humidity.  When set to Continuous Conversion mode, the
	device periodically performs humidity conversions at a predefined rate.  This
	function calulates the humidity using only the most recent conversion value.
	@param htsHumid int16_t to hold calculated humidity
	@param htsTemp uint16_t to hold calculated temperature
	@return htsHumid returns humidity value that must be divided by 10 to get the value in [%].
	*/

	HTS221_Get_Humidity(&htsHumid);

	return htsHumid / 10.0f; 
