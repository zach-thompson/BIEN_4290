/*
* Author: Zach Thompson
* Date: 2/24/22
* Description: Perfrorms K-clustering on an input file
* Includes: tbd
*/

#ifndef k_means_guard
#define k_means_guard

#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <math.h>

namespace kSpace{
    class cluster{
        public:
            // object creation types
            cluster(std::string name_in, float mean_in);

            // variables
            float mean;
            std::string name;
            std::vector<float> cluster_data;

            // functions
            void set_name(std::string name);
            std::string get_name();
            void set_mean(std::vector<float> object);
            double get_mean();
            float distance(float point);
    };
}

#endif