struct customer
{
    char name[100];
    struct address shipping_address;
    struct address billing_address;
} john;

strcpy(john.shipping_address.city, "San Fransico");