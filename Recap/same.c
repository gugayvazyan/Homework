bool isSame(int* num,int* num2,int size) {
	int i = 0; 	
	while (i < size) {
		if (num[i] != num2[i]) return false;
		++i;
	}
	return true;
}
