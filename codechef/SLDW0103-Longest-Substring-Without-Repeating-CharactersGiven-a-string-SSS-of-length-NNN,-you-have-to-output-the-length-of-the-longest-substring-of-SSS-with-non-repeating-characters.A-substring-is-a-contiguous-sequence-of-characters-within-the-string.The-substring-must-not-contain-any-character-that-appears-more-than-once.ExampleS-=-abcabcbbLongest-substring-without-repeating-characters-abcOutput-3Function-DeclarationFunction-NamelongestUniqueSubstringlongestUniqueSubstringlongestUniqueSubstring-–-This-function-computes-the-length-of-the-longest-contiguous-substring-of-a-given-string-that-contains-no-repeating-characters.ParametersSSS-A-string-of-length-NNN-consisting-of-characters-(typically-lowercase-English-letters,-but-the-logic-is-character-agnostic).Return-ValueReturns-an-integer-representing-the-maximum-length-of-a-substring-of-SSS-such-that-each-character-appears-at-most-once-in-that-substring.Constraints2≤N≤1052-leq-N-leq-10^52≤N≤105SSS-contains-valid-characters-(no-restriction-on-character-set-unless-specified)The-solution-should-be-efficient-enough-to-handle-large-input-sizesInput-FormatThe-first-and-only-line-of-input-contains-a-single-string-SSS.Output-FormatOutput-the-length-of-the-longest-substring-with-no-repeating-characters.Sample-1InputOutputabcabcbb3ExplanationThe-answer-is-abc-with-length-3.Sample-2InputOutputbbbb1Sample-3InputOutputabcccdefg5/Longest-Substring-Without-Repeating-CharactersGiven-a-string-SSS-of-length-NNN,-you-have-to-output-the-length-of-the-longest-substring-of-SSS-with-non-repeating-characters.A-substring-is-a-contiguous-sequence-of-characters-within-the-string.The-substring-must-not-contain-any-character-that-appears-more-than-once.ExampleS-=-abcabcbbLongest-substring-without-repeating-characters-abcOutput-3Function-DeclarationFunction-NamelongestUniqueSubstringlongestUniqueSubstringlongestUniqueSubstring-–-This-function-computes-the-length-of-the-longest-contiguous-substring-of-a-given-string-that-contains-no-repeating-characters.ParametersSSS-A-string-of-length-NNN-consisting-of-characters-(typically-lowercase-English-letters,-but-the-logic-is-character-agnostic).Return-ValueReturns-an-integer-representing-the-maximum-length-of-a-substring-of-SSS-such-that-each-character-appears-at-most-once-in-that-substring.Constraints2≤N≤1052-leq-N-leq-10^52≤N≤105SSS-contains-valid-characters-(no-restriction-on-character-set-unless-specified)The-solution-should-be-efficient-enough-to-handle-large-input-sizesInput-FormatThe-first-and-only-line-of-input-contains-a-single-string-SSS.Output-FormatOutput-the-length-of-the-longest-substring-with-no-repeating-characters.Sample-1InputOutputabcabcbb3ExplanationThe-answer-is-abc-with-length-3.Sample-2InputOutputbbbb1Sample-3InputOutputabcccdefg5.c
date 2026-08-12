 code goes here
	string s;
	cin>>s;
	map<int, int> freq;
	
	int left=0;
	int longest=0;
	for(int right=0; right<s.length(); right++) {
	    freq[s[right]]++;
	    while(freq[s[right]] > 1) {
	        freq[s[left]]--;
	        left