#include <stdio.h>
#include <string.h>
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
    home_address;
    struct address business_address = {
        3960,
        "North 1st Street",
        "San Jose",
        "CA",
        95134,
        "USA"};
    home_address = business_address;
    home_address.house_num = 4000;
    printf("%d, %s\n", home_address.house_num, home_address.street);
    printf("%s\n", home_address.city);
    printf("%s, %d\n", home_address.state, home_address.zip_code);
    printf("%s\n", home_address.country);
}