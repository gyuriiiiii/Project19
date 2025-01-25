
#if 0

#include <stdio.h>


int main() {

// 정수를 16진수로 입력받아서 8 10 16 으로 출력  %#x

    int data;

    printf("정수 입력 : \n");
    scanf_s("%x", &data);

    printf("%o\n", data);
    printf("%u\n", data);
    printf("%x\n", data);


    return 0;
}

#endif

#if 0

// int 형의 변수 x y 값을 교환
#include <stdio.h>

int main() {

    int tmp;
    int x, y;

    printf("초기 x 값과 y 값을 입력하세요: ");
    scanf_s("%d %d", &x, &y);

    tmp = x;
    x = y;
    y = tmp;

    printf("변환된 x, y 값 = %d %d\n", x, y);

    return 0;
}

#endif


// 상자의 부피를 구하기 길이 너비 높이 doble


#if 0
#include <stdio.h>

int main() {


    double n, w, h;
    int 부피;
    
    printf("상자의 길이, 너비, 높이를 입력 : \n");
    scanf_s("%lf %lf %lf", &n, &w, &h);

    부피 = n * w * h;

    printf(" 상자의 부피 : %d\n", 부피);


    return 0;
}

#endif 

// 평을 제곱미터로 환산 1평 = 3.3

#if 0

#include <stdio.h>

int main() {

    int 미터, 평;

    printf(" 평수를 입력 : \n");
    scanf_s("%d", &평);

    미터 = 평 * 3.3;

    printf(" 제곱미터로 환산한 결과 : %d", 미터);
         
    return 0;
}
#endif



//수식을 계산해서 출력하는 프로그램 3.32 x 10e-3 + 9.76 x 10e-8
#if 0

#include <stdio.h>

int main() {

   
    int result;

    result = 3.32 * 10e-3 + 9.76 * 10e-8;
    printf("%d", result);

    return 0;
}
#endif



// 운동에너지 E = m *c*c / 2.0 계산하기 m , v 를 double 로 입력받기 

#if 0
#include <stdio.h>

int main() {

    double m, c, E; // m: 질량, c: 속도, E: 운동에너지

    printf("질량과 속도의 값을 입력하세요 : ");
    scanf_s("%lf %lf", &m, &c);

    E = 0.5 * m * c * c;

    printf("운동에너지 = %.2lf\n", E);

    return 0;
}
#endif

// 아스키코드 입력받고 출력  int 형으로 받고     %c  (char)n <- char 형으로 변환해서 출력하기
#if 0

#include <stdio.h>

int main() {
    int n; // 아스키 코드 값을 저장할 변수

    printf("아스키 코드 입력 : ");
    scanf_s("%d", &n);

    // 입력값 검증

     printf("아스키 코드 %d에 해당하는 문자: %c\n", n, (char)n);

    // %c  (char)n

    return 0;
}



#include <stdio.h>


int main() {

//윤년계산, 4년, 400년, 100년 제외

    int year;

    printf("현재 년도 입력 : ");
    scanf_s("%d", &year);

    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        printf("올해는 윤년입니다.");
    else {
        printf("올해는 윤년이 아닙니다. \n");
    }

    return 0;
}
#endif




//형변환
#if 0
#include <stdio.h>

    int main() {
        int a, b, c, max;

        // 정수 3개 입력받기
        printf("정수 3개를 입력하세요: ");
        scanf("%d %d %d", &a, &b, &c);

        // ?: 연산자를 사용하여 최대값 계산
        max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

        // 최대값 출력
        printf("최대값: %d\n", max);

        return 0;
    }




#include <stdio.h>

    int main() {
        
        int a, b;
        int 몫, 나머지;


        printf("정수 : ");
        scanf_s("%d %d", &a, &b);

        몫 = a / b;
        나머지 = a % b;

        printf("몫 %d", 몫);
        printf("나머지 %d ", 나머지);



        return 0;


    } 



#include <stdio.h>

    int main() {
    
        int a, b, c , max;

        printf("정수 3개 : ");
        scanf_s("%d %d %d", &a, &b, &c);

        max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

        printf("%d", max);



        return 0;


    }

#endif


    // 구구단 출력 

#if 0
#include <stdio.h>

    int main() {

        int i = 1;
        int a;


        printf("원하는 구구댠 : \n");
        scanf_s("%d", &a);


    loop :
        printf("%d * %d = %d\n", i, a, i * a);
        i++;
        if(i == 10) goto end;
        goto loop;

        end:

        return 0;
    }




#include <stdio.h>

    int main()
    {

        const char* month;
        int a;

        printf("월 입력 : \n");
        scanf_s("%d",& a);

        switch (a) {

        case 1 : 
            month = "Jan";
            break;
        case 2:
            month = "Feb";
            break;
        case 3:
            month = "Mar";
            break;
        case 4:
            month = "Apr";
            break;
        case 5:
            month = "May";
            break;

        default :
            month = "1 ~ 5월 사이로 재입력. \n";
            break;

        }

        printf("%s ", month);


        return 0;
    }
#endif

#if 0

#include <stdio.h>

    int main() {

        int a , b;
        int c;

        printf ("본인 키\n: ");
        scanf_s("%d", &a);
        printf(" 본인 체중\n :");
        scanf_s("%d", &c);

        b = (a - 100) * 0.9;

        if (c > b)
            printf("과체중\n");
        else if (c < b)
            printf("저체중\n");
        else 
            printf("정상체중");

        printf("정상체중 = %d ", b);

        return 0;
    }
#endif


#include <stdio.h>

    int main() {
        int a, b; // 시간과 나이를 저장할 변수

        printf("시간과 나이를 입력하세요 (예: 16 10): ");
        scanf_s("%d %d", &a, &b); // 변수 주소를 전달하여 입력 받음

        // 조건에 따라 요금 계산 및 출력
        if (a >= 17) {
            printf("요금 : 10000원\n");
        }
        else if (a < 17 && ((b >= 3 && b <= 12) || b >= 65)) {
            printf("요금 : 25000원\n");
        }
        else {
            printf("요금 : 34000원\n");
        }

        return 0;
    }
