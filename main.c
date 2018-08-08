#include<stdio.h>

int main(void)
{
    char str1[20];
    int day = 0;
	int age = 0;
	int month = 0;


	printf("What's up!! What is your name?\n");
	scanf("%s", str1);

	printf("And how young are you???\n");
	scanf("%d", &age);


	if(age < 18 && age >= 0)
	{
		printf("Take a hike, %s At %d, you're just a kid!", str1, age);
	}
	 if(age < 0)
	{
		printf("Don't be silly. You can't be %d", age);
	}
	 if(age > 18 && age < 50)
	{
		printf("%s, I suppose at age, %d, you are an adult and are allowed to be on this site.",str1,age);
	}
	 if(age > 50 && age < 75)
	{
		printf("%s, at age, %d, you are kinda old, aren't you?! HAHA.", str1, age);
	}
	 if(age > 75)
	{
		printf("%s, did you turn the computer on all by yourself? GOOD FOR YOU.", str1);
	}

    printf("Now what month were you born in? (1-12)\n");
    scanf("%d", &month);


    if(month == 1)

    {
        printf("And what day were you born? (1-31)\n");
        scanf("%d", &day);
        if(day <= 19)
        printf("Your horoscope is Capricus\n");
        if(day >= 20)
        printf("Your horoscope is  Aquarius");
    }
 if(month == 2)

    {
        printf("And what day were you born? (1-31)\n");
        scanf("%d", &day);
        if(day <= 18)
        printf("Your horoscope is CAquarius\n");
        if(day >= 19)
        printf("Your horoscope is  Pisces");
    }

     if(month == 3)

    {
        printf("And what day were you born? (1-31)\n");
        scanf("%d", &day);
        if(day <= 20)
        printf("Your horoscope is Pisces\n");
        if(day >= 21)
        printf("Your horoscope is  Aries");
    }

     if(month == 4)

    {
        printf("And what day were you born? (1-31)\n");
        scanf("%d", &day);
        if(day <= 19)
        printf("Your horoscope is Aries\n");
        if(day >= 20)
        printf("Your horoscope is  Taurus");
    }

     if(month == 5)

    {
        printf("And what day were you born? (1-31)\n");
        scanf("%d", &day);
        if(day <= 20)
        printf("Your horoscope is Taurus\n");
        if(day >= 21)
        printf("Your horoscope is  Gemini");
    }

     if(month == 6)

    {
        printf("And what day were you born? (1-31)\n");
        scanf("%d", &day);
        if(day <= 20)
        printf("Your horoscope is Gemini\n");
        if(day >= 21)
        printf("Your horoscope is Cancer");
    }

     if(month == 7)

    {
        printf("And what day were you born? (1-31)\n");
        scanf("%d", &day);
        if(day <= 22)
        printf("Your horoscope is Cancer\n");
        if(day >= 23)
        printf("Your horoscope is an Leo");
    }

     if(month == 8)

    {
        printf("And what day were you born? (1-31)\n");
        scanf("%d", &day);
        if(day <= 22)
        printf("Your horoscope is Leo\n");
        if(day >= 23)
        printf("Your horoscope is an Virgo");
    }

     if(month == 9)

    {
        printf("And what day were you born? (1-31)\n");
        scanf("%d", &day);
        if(day <= 22)
        printf("Your horoscope is Virgo\n");
        if(day >= 23)
        printf("Your horoscope is an Libra");
    }

     if(month == 10)

    {
        printf("And what day were you born? (1-31)\n");
        scanf("%d", &day);
        if(day <= 22)
        printf("Your horoscope is Libra\n");
        if(day >= 23)
        printf("Your horoscope is an Scorpio");
    }

     if(month == 11)

    {
        printf("And what day were you born? (1-31)\n");
        scanf("%d", &day);
        if(day <= 21)
        printf("Your horoscope is Scorpio\n");
        if(day >= 22)
        printf("Your horoscope is an Sagittarius");
    }

     if(month == 12)

    {
        printf("And what day were you born? (1-31)\n");
        scanf("%d", &day);
        if(day <= 21)
        printf("Your horoscope is Sagittarius\n");
        if(day >= 22)
        printf("Your horoscope is an Capricorn");
    }

return(0);
}
