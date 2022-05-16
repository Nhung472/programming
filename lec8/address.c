#include <stdio.h>
int main()
{
    struct address
    {
        unsigned int house_num;
        char street[120];
        char city[50];
        char state[3];
        int zip_code;
        char country[50];
    } 
    business_address = {
        3960,
        "North 1st Street",
        "San Jose",
        "CA",
        95134,
        "USA"};
    printf("%d, %s\n", business_address.house_num, business_address.street);
    printf("%s\n", business_address.city);
    printf("%s, %d\n", business_address.state, business_address.zip_code);
    printf("%s\n", business_address.country);
}