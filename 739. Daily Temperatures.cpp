class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) 
    {
        vector<int> Dwarmer(T.size());
        int Tnext, Tnid;
        
        if(T.size()==1) return {};
        else
        {
            Dwarmer[T.size()-1] = T.size()-1;
            
            for(int i=T.size()-2; i>=0; i--)
            {
                if(T[i+1]>T[i])
                    Dwarmer[i] = i+1;
                else
                {
                    Tnext = Dwarmer[(i+1)];
                    Tnid = i+1;
                    
                    if(Tnext == Tnid)
                        Dwarmer[i] = i;
                    else
                    {
                        while(T[Tnext]<=T[i])
                        {
                            Tnid = Tnext;
                            Tnext = Dwarmer[Tnext];
                            
                            if(Tnid==Tnext)
                            {
                                Tnext = i;
                                break;
                            }
                        }
                        
                        Dwarmer[i] = Tnext;
                    }
                }
            }
            
            for(int i=0;i<T.size(); i++)
                Dwarmer[i]-=i;
            
            return Dwarmer;
        }
    }
};