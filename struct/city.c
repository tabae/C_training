#include <stdio.h>
#include <string.h>

struct CityInfo{
    char name[100];
    float longitude;
    float latitude;
    int population;
};

int main(){
    struct CityInfo Sendai;

    strcpy(Sendai.name, "Sendai");
    Sendai.longitude = 38.26889;
    Sendai.latitude = 140.87194;
    Sendai.population = 1087723;

    printf("Name: \t\t%s\n", Sendai.name);
    printf("Longitude: \t%f\n", Sendai.longitude);
    printf("Latitude: \t%f\n", Sendai.latitude);
    printf("Population: \t%d\n", Sendai.population);

    return 0;
}