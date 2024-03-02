#include <iostream>

int main(int ac, char **av){
    int i, j, k;
    
    i = 0;
    if(ac > 1){
        while(av[++i]){
            k = 0;
            while(av[i][k] == ' ' || av[i][k] == '\t')
                k++;
            j = --k;
            while(av[i][++j]){
                if(av[i][j] >= 'a' && av[i][j] <= 'z'){
                    av[i][j] -= 32;
                    std::cout << av[i][j];
                }
                else if(av[i][j] == '"' || av[i][j] == '\t' \
                || (av[i][j] == ' ' && (av[i][j+1] == ' ' || av[i][j+1] == '\t')))
                    continue;
                else if(av[i][j] == ' ' && !av[i][j+1])
                    continue;
                else
                    std::cout << av[i][j];
            }
            std::cout << ' ';
        }
    }
    else if(ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return 0;
}