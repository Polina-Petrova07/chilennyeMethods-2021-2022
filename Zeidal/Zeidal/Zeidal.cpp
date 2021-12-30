// Zeidal.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <iomanip>
#include <stdlib.h>
#include <typeinfo>
#include <cmath>

double equation(double x, double y) {
    return(1 - x * x - y * y);
}
double GU1(double x, double y) {
    return(-y * y);
}
double GU2(double x, double y) {
    return(-y * y);
}
double GU3(double x, double y) {
    return(-x * x);
}
double GU4(double x, double y) {
    return (-x * x);
}
double f(double x, double y) {
    return 4;
}
std::vector<double> startValueX(double m, double a, double b) {
    double h = (b - a) / m;
    std::vector<double> xi;
    for (int i = 0; i < m+1; i++) {
        xi.push_back(-1 + i * h);
    }
    return xi;
}
std::vector<double> startValueY(double n, double c, double d) {
    double k = (d - c) / n;
    std::vector<double> yi;
    for (int i = 0; i < n+1; i++) {
        yi.push_back(-1 + i * k);
    }
    return yi;
}
void print(std::vector<std::vector<double> > M) {
    int n = M.size();
    for (int i = n; i >=0 ; i--) {
        std::cout << std::setw(6) << "x" << abs(i-n) << "|";
    }
    std::cout << std::endl<< "----------------------------------------------";
    std::cout << std::endl << std::endl;
    for (int i = 0; i < n; i++) {
        //std::cout << "x" << i<<"|";
        for (int j = 0; j < n; j++) {
            std::cout << std::setw(8) << M[i][j] << "|";
        }
        std::cout << std::endl;
        std::cout << "----------------------------------------------";
        std::cout << std::endl;
    }
}
std::vector<std::vector<double> > GU(std::vector<std::vector<double> > M,double a, double b,double c,double d,double n,double m) {
    std::vector<double> xi = startValueX(m, a, b);
    std::vector<double> yi = startValueY(n, c, d);
    for (int i = 1; i < M.size(); i++) {
        M[0][i] = -yi[i] * yi[i];
        M[m][i] = -yi[i] * yi[i];
        M[i][0] = -xi[i] * xi[i];
        M[i][n] = -xi[i] * xi[i];
    }
    return M;
}
std::vector<std::vector<double> > solExect(std::vector<std::vector<double> > M, int n, int m, double a, double b, double c, double d) {
    double h = (b - a) / n;
    double k = (d - c) / m;
    // M = GU(M, a, b, c, d, n, m);
    for (int j = m; j >= 0; j--) {
        for (int i = 0; i <= n; i++) {
            double xi = a + i * h;
            double yi = c + j * k;
            if (i == 0 || j == 0 || i == n || j == m) {
                if (j == 0)
                    M[i][j] = GU3(xi, yi);
                else
                    if (j == m)
                        M[i][j] = GU4(xi, yi);
                if (i == 0)
                    M[i][j] = GU1(xi, yi);
                else
                    if (i == n)
                        M[i][j] = GU2(xi, yi);
            }
            else
                M[i][j] = equation(xi, yi);
        }
    }
    return M;
}
std::vector<std::vector<double> > rightPart(std::vector<std::vector<double> > F, int n, int m, double a, double c, double h, double k) {
    for (int j = 1; j < m; j++) {
        for (int i = 1; i < n; i++) {
            double xi, yi, sum = 0.0;
            xi = a + i * h;
            yi = c + j * k;
            if (j == 1)
                sum += (1 / (k * k)) * GU3(xi, yi);
            else
                if (j == m - 1)
                    sum += (1 / (k * k)) * GU4(xi, yi);
            if (i == 1)
                sum += (1 / (h * h)) * GU1(xi, yi);
            else
                if (i == n - 1)
                    sum += (1 / (h * h)) * GU2(xi, yi);
            F[i][j] = -f(xi, yi) - sum;
        }
    }
    return F;
}
std::vector<std::vector<double> > firstApproc(std::vector<std::vector<double> > V, int n, int m, double a, double b, double c, double d) {
    double h = (b - a) / n;
    double k = (d - c) / m;
    // std::vector<double> xi = startValueX(n, a, b);
    // std::vector<double> yi = startValueY(n, c, d);
    for (int j = m; j >= 0; j--) {
        for (int i = 0; i <= n; i++) {
            double xi = a + i * h;
            double yi = c + j * k;
            if (i == 0 || j == 0 || i == n || j == m) {
                if (j == 0)
                    V[i][j] = GU3(xi, yi);
                else
                    if (j == m)
                        V[i][j] = GU4(xi, yi);
                if (i == 0)
                    V[i][j] = GU1(xi, yi);
                else
                    if (i == n)
                        V[i][j] = GU2(xi, yi);
            }
            else
                V[i][j] = 0;
        }
    }
    return V;
}
std::vector<std::vector<double> > Zeidal(std::vector<std::vector<double> > M, int n,int m, double a, double b, double c, double d, double eps,int nMax, double& epsMax,int& iter) {
   // std::vector<double> fistSolv(M.size(), 0);
   // std::vector<double> currSolv(M.size());
    double curEps = 0;
    double h = (b - a) / n;
    double k = (d - c) / m;
    double h2 = -((n / (b - a)) * (n / (b - a)));
    double k2 = -((m / (d - c)) * (m / (d - c)));
    double a2 = -2 * (h2 + k2);

    std::vector<double> xi = startValueX(n, a, b);
    std::vector<double> yi = startValueY(n, c, d);

    //double epsMax;
    double vOld, vCurr;

    iter = 0;

    while (true) {
        epsMax = 0.0;
        for (int j = 1; j < m; j++) {
            for (int i = 1; i < n; i++) {
                vOld = M[i][j];
                vCurr = -(h2 * (M[i + 1][j] + M[i - 1][j]) + k2 * (M[i][j + 1] + M[i][j - 1]));
                vCurr += f(xi[i], yi[i]);
                vCurr = vCurr / a2;

                curEps = fabs(vOld - vCurr);
                if (curEps > epsMax)
                    epsMax = curEps;

                M[i][j] = vCurr;
            }
        }
        if (iter <= 1)
        {
            std::cout << "Значения на " << iter + 1 << " шаге" << std::endl << std::endl;
            print(M);
        }
        iter++;
        if ((epsMax < eps) || (iter > nMax))
            break;

    }
    return M;
}
double discrepancy(std::vector<std::vector<double> > M, int n, int m, double a, double b, double c, double d) {
    
    double ep = 0.0; // rs

    double h = (b - a) / n;
    double k = (d - c) / m;

    // elemnts in net
    double h2 = ((n / (b - a)) * (n / (b - a)));
    double k2 = ((m / (d - c)) * (m / (d - c)));
    double a2 = -2 * (h2 + k2);
    std::vector<std::vector<double> > F(n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            F[i].push_back(0);
        }
    }
    F = rightPart(F, n, m, a, c, h, k);

    for (int j = 1; j < m; j++) {
        for (int i = 1; i < n; i++) {
            double r;
            double mul;
            if (j != 1 && j!= m - 1) {
                if (i != 1 && i != n - 1)
                    mul = k2 * M[i][j - 1] + h2 * M[i - 1][j] + a2 * M[i][j] + h2 * M[i + 1][j] + k2 * M[i][j + 1];
                else
                    if (i == 1)
                        mul = k2 * M[i][j - 1] + a2 * M[i][j] + h2 * M[i + 1][j] + k2 * M[i][j + 1];
                    else
                        if (i == n - 1)
                            mul = k2 * M[i][j - 1] + h2 * M[i - 1][j] + a2 * M[i][j] + k2 * M[i][j + 1];
            }
            else 
                if (j == 1)
                {
                    if (i == 1)
                        mul = a2 * M[i][j] + h2 * M[i + 1][j] + k2 * M[i][j + 1];
                    else
                        if (i != n - 1)
                            mul = h2 * M[i - 1][j] + a2 * M[i][j] + h2 * M[i + 1][j] + k2 * M[i][j + 1];
                        else
                            if (i == n - 1)
                                mul = h2 * M[i - 1][j] + a2 * M[i][j] + k2 * M[i][j + 1];
                }
                else
                    if (j == m - 1)
                    {
                        if (i == 1)
                            mul = k2 * M[i][j - 1] + a2 * M[i][j] + h2 * M[i + 1][j];
                        else
                            if (i != n - 1)
                                mul = k2 * M[i][j - 1] + h2 * M[i - 1][j] + a2 * M[i][j] + h2 * M[i + 1][j];
                            else
                                if (i == n - 1)
                                    mul = k2 * M[i][j - 1] + h2 * M[i - 1][j] + a2 * M[i][j];
                    }
            r = fabs(mul - F[i][j]);
            ep += r * r;
            //std::cout << ep << "  ";
        }
    }
    F.clear();
    return sqrt(ep);
}
//check error
double errSol(std::vector<std::vector<double> > M, int n, int m, double a, double b, double c, double d) {
    std::vector<std::vector<double> > M1(n + 1);
    for (int i = 0; i < n + 1; i++) {
        for (int j = 0; j < n + 1; j++) {
            M1[i].push_back(0);
        }
    }
    double zs = 0;
    std::vector<double> zzs(n + 1, 0);
    double h = (b - a) / n;
    double k = (d - c) / m;

    for (int j = 0; j <= m; j++) {
        for (int i = 0; i <= n; i++) {
            double xi, yi;
            xi = a + i * h;
            yi = c + j * k;

            M1[i][j] = equation(xi, yi);
        }
    }

    for (int j = 1; j < m; j++) {
        for (int i = 1; i < n; i++) {
            double z = fabs(M1[i][j] - M[i][j]);
            zzs[i] = z;
            if (z > zs)
                zs = z;
        }
    }
    double maxZzs = zzs[1];
    for(int i = 0; i < n + 1; i++) {
        if (zzs[i] > maxZzs)
            maxZzs = zzs[i];
    }
    M1.clear();
    // return zs;
    return maxZzs;
}



int main()
{
    setlocale(LC_ALL, "rus");

    int		N_max = 300;  // Максимальное число итераций
    int		iter = 0;  // Счетчик итераций
    double	eps;  // Параметр требуемой точности
    double	epsMax = 0;  // Достигнутая точность
    int	n, m;
   // std::vector<std::vector<double> > M;  // Искомый вектор 
    double	a = -1.0, b = 1.0, c = -1.0, d = 1.0;  // гранциы 
    int sizee = 0;

    std::cout << "введите размер сетки: " << std::endl;
    std::cin >> n >> m;
    sizee = n + 1;
    std::cout << std::endl;
    std::cout << "введите параметр требуемой точности: " << std::endl;
    std::cin >> eps;
    std::cout << std::endl;
    std::cout << "Точное решение задачи Дирихле для уравнения Пуассона во всех узлах: " << std::endl;

    std::vector<std::vector<double> > M(sizee);
    for (int i = 0; i < sizee; i++) {
        for (int j = 0; j < sizee; j++) {
            M[i].push_back(0);
        }
    }
    M = solExect(M, n, m,  - 1, 1, -1, 1);
    print(M);
    std::vector<std::vector<double> > FA(sizee);
    for (int i = 0; i < sizee; i++) {
        for (int j = 0; j < sizee; j++) {
            FA[i].push_back(0);
        }
    }
    std::cout << std::endl;
    std::cout << "Граничные условия и первое приближение: " << std::endl;
    FA = firstApproc(FA, n, m, a, b, c, d);
    print(FA);
    std::cout << std::endl << std::endl;
    std::cout << "Применение метода Зейдаля: " << std::endl;
    FA = Zeidal(FA, n, m, a, b, c, d, eps, N_max,epsMax,iter);
    std::cout << std::endl;
    std::cout << "Последняя итерация метода при заданной точности: (eps = " << eps << " )" << std::endl;
    print(FA);

    std::cout << "================" << std::endl;
    std::cout << "    СПРАВКА     " << std::endl;
    std::cout << "================" << std::endl;
    std::cout << "Исходное уравнение: " << std::endl;
    std::cout << "u = 1 - x^2 - y^2" << std::endl;
    std::cout << "Значения по Х: от " << a << " до " << b << std::endl;
    std::cout << "Значения по Х: от " << c << " до " << d << std::endl;
    std::cout << "Размерность сетки: "<< n << " x " << m << std::endl;
    std::cout << "Шаг сетки по оси x: h = " << (b - a) / n << std::endl;
    std::cout << "Шаг сетки по оси y: k = " << (d - c) / m << std::endl << std::endl;

    std::cout << "Критерии остановки счета:" << std::endl;
    std::cout << "Максимальное число шагов: " << N_max <<std::endl;
    std::cout << "Заданная точность: " << eps << std::endl << std::endl;

    std::cout << "Полученные результаты: " << std::endl;
    std::cout << "Число затраченных шагов: " << iter << std::endl;
    std::cout << "Точность на выходе: " << epsMax << std::endl;
    double disp = discrepancy(FA, n, m, a, b, c, d);
    std::cout << "Невязка на выходе (евклидова норма): " << disp << std:: endl;
    double err = errSol(FA, n, m, a, b, c, d);
    std::cout << "Погрешность решения СЛАУ: " << err << std::endl;
    FA.clear();
    return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
