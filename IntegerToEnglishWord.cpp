#include<iostream>
using namespace std;

class Solution {
public:
    string threedigitblock(int threedigit){
        string ones[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        string teen[]={"Ten","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
        string tens[]={"","","Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};
        string a="";
        int x=threedigit/100;
        if(x!=0) a+=ones[x]+" Hundred ";
        int twodig=threedigit%100;
        if(twodig>=10 and twodig<=19){
            a+=teen[twodig-10]+" ";
            return a;
        }
        else{
            int y=twodig/10;
            if(y!=0) a+=tens[y]+" ";
            int x=twodig%10;
            if(x!=0) a+=ones[x]+" ";
        }
        return a;
    }
    string numberToWords(int num) {
        if(num==0)return "Zero";
        string s ="";
        while(num!=0){
            if(num>=2000000000){
                s+="Two Billion ";
                num-=2000000000;
            }
            else if(num>=1000000000 && num<2000000000){
                s+="One Billion ";
                num-=1000000000;
            }
            else if(num>=1000000 && num<1000000000){
                int threedigits=(num%1000000000)/1000000;
                if (threedigits!=0) {
                    s+=threedigitblock(threedigits);
                    s += "Million ";
                    num-=threedigits*1000000;
                }
            }
            else if(num>=1000 && num<1000000){
                int threedigits=(num%1000000)/1000;
                if (threedigits!=0) {
                    s+=threedigitblock(threedigits);
                    s += "Thousand ";
                    num-=threedigits*1000;
                }
            }
            else if(num>=1 && num<1000){
                int threedigits=(num%1000);
                if (threedigits!=0) {
                    s+=threedigitblock(threedigits);
                    num-=threedigits;
                }
            }
        }
        while (!s.empty() && s.back() == ' ') s.pop_back();
        return s;
        }
};
int main()
{
    Solution s;
    cout<<"Enter a Number"<<endl;
    int x;
    cin>>x;
    string res=s.numberToWords(x);
    cout<<res;
    return 0;
}