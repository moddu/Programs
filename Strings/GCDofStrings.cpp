class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int len1 = str1.length();
        int len2 = str2.length();

        while(len2 != 0)
        {
            int temp = len2;
            len2 = len1 % len2;
            len1 = temp; 
        }

/*
        if( str1.length() ==  str2.length())
        {
            if(str1 != str2)
            {
                return "";
            }
        }
*/
        if(str1.substr(0, len1) != str2.substr(0, len1))
        {
            return "";
        }

        string frstSub = str1.substr(0, len1);

        for(int i= len1; i<str1.length(); i+=len1)
        {
            string frstSub1 =str1.substr(i, len1);
            if(frstSub != frstSub1)
            {
                return "";
            }
        }

        string secondSub = str2.substr(0, len1);

        for(int i= len1; i<str2.length(); i+=len1)
        {
            string secondSub1 =str2.substr(i, len1);
            if(secondSub != secondSub1)
            {
                return "";
            }
        }
        return str1.substr(0, len1);
    }
};
