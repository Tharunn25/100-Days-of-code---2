 for(int i=0;i<s.size();i++){
        
        if(isupper(s[i]))
            s[i] = 'Z'-(s[i]-'A');
            
        else if(islower(s[i]))
            s[i] = 'z'-(s[i]-'a');
        else
            s[i]=s[i];
    }
      return s;
