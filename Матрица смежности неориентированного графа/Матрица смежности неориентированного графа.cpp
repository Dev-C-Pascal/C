#include <iostream>

    //глобальные массивы - зло. Но в этом случае - самое оно.
    int adj_mtx[100][100];

    using namespace std;

    int main()
    {
        int num_edj    = 0;
        int num_vertex = 0;

        cin >> num_vertex
             >> num_edj;

        //рёбра обрабатываем по одному, num_edj штук. И сразу - в матрицу
        while(num_edj--){
            register int start;
            register int stop;

            cin >> start
                 >> stop;

            //пришлось использовать '--', ведь у нас по задаче
            //нумерация с 1, а индексы в массивах - с нуля...
            adj_mtx[--start][--stop] = 1;
            adj_mtx[stop][start]     = 1;
        }

        //вывод матрицы. Ваш КЭП.
        for(int i = 0; i < num_vertex; i++){
            for(int j = 0; j < num_vertex; j++){
                cout << adj_mtx[i][j] << ' ';
            }
            cout << endl;
        }
        // надеюсь, ошибок ввода-вывода не было - я их не обрабатывал.
        // Но для демки именно преобразования списка рёбер в матрицу смежности - сойдёт.
        return 0;
    }