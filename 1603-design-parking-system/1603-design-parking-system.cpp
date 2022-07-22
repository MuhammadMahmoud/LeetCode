class ParkingSystem {
private:
    int bSlot=0,mSlot=0,sSlot=0;
public:
    ParkingSystem(int big, int medium, int small) {
        this->bSlot=big;
        this->mSlot=medium;
        this->sSlot=small;
    }
    
    bool addCar(int carType) {
        if(carType == 1 && bSlot>0){
            bSlot--;
            return true;
        }
        else if(carType == 2 && mSlot>0){
            mSlot--;
            return true;
        }
        else if(carType == 3 && sSlot>0){
            sSlot--;
            return true;
        }
        else{
            return false;
        }
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */