// Defining set container s
// day 5 out of 100
// gfg union of two arrays
	set<int> s;

	// Inserting array elements in s
	for (int i = 0; i < n; i++)
	s.insert(a[i]);

	for (int i = 0; i < m; i++)
		s.insert(b[i]);
	cout << "Number of elements after union operation: " << s.size() << endl;
