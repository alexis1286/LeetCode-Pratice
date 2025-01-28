class Solution {
public:
    string addBinary(string a, string b) {
       
        string result;
        if(a.length()<b.length()){
            int length = b.length() - a.length();
           a = string(length, '0') +a;
        }
        else if(b.length() < a.length()){
             int length = a.length() - b.length();
           b = string(length, '0') + b;
        }
     
       return computeBinary(a,b);
    }


        string computeBinary(string a, string b){
        int carry =0;
        string result;

        //declare pointers to the last char of the strings 
        int i = a.length() -1;
        int j = b.length() - 1;


        while(i >=0 || j >=0 || carry > 0){
            int bitA =0;
            int bitB =0;
            if(i>=0){
                bitA = a[i] - '0';
                i--;

            }
             if(j>=0){
                 bitB = b[j] - '0';
                j--;
            }
            
            int  sum = bitA +bitB + carry;
            int resultBit = sum % 2;
            
            carry = sum/2;


            result.push_back(resultBit + '0');
        }

        reverse(result.begin(),result.end());



            return result;
        }
        
};