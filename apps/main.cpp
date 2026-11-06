#include <iostream>
#include <omp.h>

int main() {
    std::cout << "Привет из C++ проекта!" << std::endl;
    
    #pragma omp parallel
    {
        #pragma omp master
        {
            std::cout << "Количество доступных потоков OpenMP: " 
                      << omp_get_num_threads() << std::endl;
        }
    }
    
    return 0;
}
