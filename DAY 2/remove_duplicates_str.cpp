class Solution{
public:
	string removeDuplicates(string str) {
	  map<char,int>mp;
	  string result;
	  for(auto it:str){
	      if(mp.find(it)==mp.end()){
	          mp[it]=1;
	          result+=it;
	      }
	  }
	 return result;
	}
};