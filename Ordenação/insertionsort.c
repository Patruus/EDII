void insertionSort(int *v, int n) { // Ordenação Estavel
	int i, aux, j;
	for(i = 1; i < n; i++) {
		aux = v[i];
		for(j = i - 1; j >= 0; j--) {
			if(v[j] > aux) {
				v[j+1] = v[j];
			}
			else{
				break;
			}
		}// endfor
	v[j + 1] = aux;
	}// endfor
}