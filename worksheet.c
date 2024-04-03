






int main() {
    int usf, euf;
    printf("Enter US Floor\n");
    scanf("%d", &usf);
    euf = usf - 1;
    printf("EU Floor %d\n", euf);
}


int main() {
    printf("Hello World\n");
    printf("Answer %d\n", 42);
    printf("Name %s\n", "Sarah");
    printf("x %.1f i %d\n", 3.5, 100);
}

int main2() {
    char name[100];
    printf("Enter name\n");
    scanf("%100s", name);
    printf("Hello %s\n", name);
}

int main3() {
    char line[1000];
    printf("Enter line\n");
    scanf("%[^\n]1000s", line);
    printf("Line: %s\n", line);
}