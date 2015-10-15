template <class T>

T maximum(T value1, T value2, T value3) {
	T maxValue = value1;

	// Condition check for greater value2
	if(value2 > maxValue)
		maxValue = value2;
	// Condition check for greater value3
	if(value3 > maxValue)
		maxValue = value3;
	return maxValue;		 
}