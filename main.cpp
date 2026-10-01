#include <iostream> 
int main(){ 
int gpa = 4.00;
int holds=0;
int credits=40;
int courseReq= 0;

if (gpa>=2 && credits>=60 && holds==0 && courseReq==0){
 std:: cout << "You can graduate";
 return 0;

} else {
    std::cout<< "You cannot graduate!";
}

}
;
