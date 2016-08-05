int quicksort(int *v, int e, int d) {
	int pivo, i, j, t;
	if(d > e) {
		pivo = v[d];
		i = e - 1;
		j = d;
		while(1) {
			while(v[++i] < pivo);
			while(v[--j] > pivo);
				if( i >= j) break;
				t = v[i];
				v[i] = v[j];
				v[j] = t;
		}
		t = v[i];
		v[i] = v[d];
		v[d] = t;
		quicksort(v, e, i - 1);
		quicksort(v, i+1, d);
		}
}
