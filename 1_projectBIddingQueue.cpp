#include<iostream>
#include<string>
#include<queue>
using namespace std;

struct bidder{
    string name;
    int bidAmount;
    bidder(string n,int b ) : name(n),bidAmount(b){}
    bool operator<(const bidder& other) const{
        return bidAmount <other.bidAmount;
    }
};
class Auction{
private:
priority_queue<bidder> bids;
public:

void placebid(string name,int bidAmount){
bidder newBid(name, bidAmount);
bids.push(newBid);
cout<<name<<" place of bid "<<endl;
}
void HighestBidder(){
    if(bids.empty()){
        cout<<"No bids placed"<<endl;
    }else{
      bidder Highest  = bids.top();
      cout<<"Highest Bidder:"<<Highest.name<<" with a bid of "<<Highest.bidAmount<<endl;  
    }
}



};

int main(){
    Auction auc ;
    int numbersofbidders;
    string name;
    int bidamount;
    cout<<"Enter the Numbers of bidder :";
    cin>>numbersofbidders;
    for(int i = 0; i<numbersofbidders;i++){
        cout<<"enter the bidder's name: ";
        cin>>name;
        cout<<"Enter Bid Amount :";
        cin>>bidamount;
        auc.placebid(name,bidamount);
    }
    auc.HighestBidder();
    return 0;

}