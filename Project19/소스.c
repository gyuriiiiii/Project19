
#if 0

#include <stdio.h>


int main() {

// ������ 16������ �Է¹޾Ƽ� 8 10 16 ���� ���  %#x

    int data;

    printf("���� �Է� : \n");
    scanf_s("%x", &data);

    printf("%o\n", data);
    printf("%u\n", data);
    printf("%x\n", data);


    return 0;
}

#endif

#if 0

// int ���� ���� x y ���� ��ȯ
#include <stdio.h>

int main() {

    int tmp;
    int x, y;

    printf("�ʱ� x ���� y ���� �Է��ϼ���: ");
    scanf_s("%d %d", &x, &y);

    tmp = x;
    x = y;
    y = tmp;

    printf("��ȯ�� x, y �� = %d %d\n", x, y);

    return 0;
}

#endif


// ������ ���Ǹ� ���ϱ� ���� �ʺ� ���� doble


#if 0
#include <stdio.h>

int main() {


    double n, w, h;
    int ����;
    
    printf("������ ����, �ʺ�, ���̸� �Է� : \n");
    scanf_s("%lf %lf %lf", &n, &w, &h);

    ���� = n * w * h;

    printf(" ������ ���� : %d\n", ����);


    return 0;
}

#endif 

// ���� �������ͷ� ȯ�� 1�� = 3.3

#if 0

#include <stdio.h>

int main() {

    int ����, ��;

    printf(" ����� �Է� : \n");
    scanf_s("%d", &��);

    ���� = �� * 3.3;

    printf(" �������ͷ� ȯ���� ��� : %d", ����);
         
    return 0;
}
#endif



//������ ����ؼ� ����ϴ� ���α׷� 3.32 x 10e-3 + 9.76 x 10e-8
#if 0

#include <stdio.h>

int main() {

   
    int result;

    result = 3.32 * 10e-3 + 9.76 * 10e-8;
    printf("%d", result);

    return 0;
}
#endif



// ������� E = m *c*c / 2.0 ����ϱ� m , v �� double �� �Է¹ޱ� 

#if 0
#include <stdio.h>

int main() {

    double m, c, E; // m: ����, c: �ӵ�, E: �������

    printf("������ �ӵ��� ���� �Է��ϼ��� : ");
    scanf_s("%lf %lf", &m, &c);

    E = 0.5 * m * c * c;

    printf("������� = %.2lf\n", E);

    return 0;
}
#endif

// �ƽ�Ű�ڵ� �Է¹ް� ���  int ������ �ް�     %c  (char)n <- char ������ ��ȯ�ؼ� ����ϱ�
#if 0

#include <stdio.h>

int main() {
    int n; // �ƽ�Ű �ڵ� ���� ������ ����

    printf("�ƽ�Ű �ڵ� �Է� : ");
    scanf_s("%d", &n);

    // �Է°� ����

     printf("�ƽ�Ű �ڵ� %d�� �ش��ϴ� ����: %c\n", n, (char)n);

    // %c  (char)n

    return 0;
}



#include <stdio.h>


int main() {

//������, 4��, 400��, 100�� ����

    int year;

    printf("���� �⵵ �Է� : ");
    scanf_s("%d", &year);

    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
        printf("���ش� �����Դϴ�.");
    else {
        printf("���ش� ������ �ƴմϴ�. \n");
    }

    return 0;
}
#endif




//����ȯ
#if 0
#include <stdio.h>

    int main() {
        int a, b, c, max;

        // ���� 3�� �Է¹ޱ�
        printf("���� 3���� �Է��ϼ���: ");
        scanf("%d %d %d", &a, &b, &c);

        // ?: �����ڸ� ����Ͽ� �ִ밪 ���
        max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

        // �ִ밪 ���
        printf("�ִ밪: %d\n", max);

        return 0;
    }




#include <stdio.h>

    int main() {
        
        int a, b;
        int ��, ������;


        printf("���� : ");
        scanf_s("%d %d", &a, &b);

        �� = a / b;
        ������ = a % b;

        printf("�� %d", ��);
        printf("������ %d ", ������);



        return 0;


    } 



#include <stdio.h>

    int main() {
    
        int a, b, c , max;

        printf("���� 3�� : ");
        scanf_s("%d %d %d", &a, &b, &c);

        max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

        printf("%d", max);



        return 0;


    }

#endif


    // ������ ��� 

#if 0
#include <stdio.h>

    int main() {

        int i = 1;
        int a;


        printf("���ϴ� ������ : \n");
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

        printf("�� �Է� : \n");
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
            month = "1 ~ 5�� ���̷� ���Է�. \n";
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

        printf ("���� Ű\n: ");
        scanf_s("%d", &a);
        printf(" ���� ü��\n :");
        scanf_s("%d", &c);

        b = (a - 100) * 0.9;

        if (c > b)
            printf("��ü��\n");
        else if (c < b)
            printf("��ü��\n");
        else 
            printf("����ü��");

        printf("����ü�� = %d ", b);

        return 0;
    }
#endif


#include <stdio.h>

    int main() {
        int a, b; // �ð��� ���̸� ������ ����

        printf("�ð��� ���̸� �Է��ϼ��� (��: 16 10): ");
        scanf_s("%d %d", &a, &b); // ���� �ּҸ� �����Ͽ� �Է� ����

        // ���ǿ� ���� ��� ��� �� ���
        if (a >= 17) {
            printf("��� : 10000��\n");
        }
        else if (a < 17 && ((b >= 3 && b <= 12) || b >= 65)) {
            printf("��� : 25000��\n");
        }
        else {
            printf("��� : 34000��\n");
        }

        return 0;
    }
