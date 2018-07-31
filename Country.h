//
// Created by russd on 7/30/2018.
//

#ifndef HELLOWORLDCPP_COUNTRY_H
#define HELLOWORLDCPP_COUNTRY_H


class Country {
    int population, GDP, nuclearWeapons;

    public:
        void set_values(int,int);
        int GDP_percapita() { return GDP/population; }
};

void Country::set_values(int x, int y) {
    population = x;
    GDP = y;
    nuclearWeapons = 0;
}


#endif //HELLOWORLDCPP_COUNTRY_H
