//print scores: E=0-3, D=4, C=5-6, B=7-8, A=9-10
int main()
{
    int score;
    printf("Enter your score: ");
    scanf("%d", &score);
    if (score<3)
        printf("Your score is E.\n");
    if (score=4)
        printf("Your score is D.\n");
    if (score>5 && score <6)
        printf("Your score is C.\n");
    if (score > 7 && score <8)
        printf("Your score is B.\n");
    if (score>9)
        printf("Your score is A.\n");
    return 0; 
}