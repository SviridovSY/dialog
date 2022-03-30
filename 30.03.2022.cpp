
#include <iostream>


int my_strlen(char* s) {
    int count{ 0 };
    while (s[count] != '\0') {
        count++;
    }
    return count;
}


//char* my_strnset(char* s, char c, int n) {
//    for (size_t i = 0; i < n; i++) {
//        s[i] = c;
//    }
//    return s;
//}



//char* my_strcat(char* s1, char* s2) {
//    int a{ 0 };
//    int b{ 0 };
//    while (s1[a] != '\0') {
//		a++;
//	}
//	while (s2[b] != '\0') {
//		b++;
//	}
//	
//	for (size_t i = a; i < a + b; i++) {
//		s1[i] = s2[b];
//		s1[i + 1] = '\0';
//		b++;
//	}
//    return s1;
//}

//char* my_strset(char* s, char* c) {
//    int a{ 0 };
//    int b{ 0 };
//    for (size_t i = *s; i < *c; i++) {
//        *c = s[i];
//    }
//    
//    return s;
//}

//int my_strcmp(char* s1, char* s2) {
//    if (*s1 == *s2) {
//        std::cout << "0" << std::endl;
//        
//    }
//    else if (*s1 != *s2) {
//        std::cout << "error" << std::endl;
//    }
//    return 0;
//}


int my_strncmp(char* s1, char* s2) {
    
    if (*(s1 + 1) == *(s2 + 1)) {
        std::cout << "0" << std::endl;

    }
    else if (*(s1 + 1) != *(s2 + 1)) {
        std::cout << "error" << std::endl;
    }
    return 0;
}








int main()
{
    setlocale(LC_ALL, "Russian");
  /*  SetConsoleCP(1251);
    SetConsoleOutputCP(1251);*/


    const int BUFF_SIZE = 512;
    char* buffer = new char[BUFF_SIZE];
    char* buffer2 = new char[BUFF_SIZE];

    std::cin.getline(buffer, BUFF_SIZE);
    std::cin.getline(buffer2, BUFF_SIZE);


    int answer = my_strlen(buffer);
    std::cout << answer << std::endl;

  /*  char* test = my_strnset(buffer, 'w', 3);
    std::cout << "you text: " << buffer << std::endl;*/

    /*char* answ = my_strset(buffer, buffer2);
    std::cout << "you text: " << buffer << std::endl;*/

   /* char* testt = my_strcat(buffer, buffer2);
    std::cout << "you text: " << buffer << std::endl;*/

    /*std::cout << "You text: " << buffer << std::endl;*/

    /*int answer1 = my_strcmp(buffer, buffer2);
    std::cout << answer1 << ' ' << buffer2 << std::endl;*/

    int answer1 = my_strncmp(buffer, buffer2);
    std::cout << answer1 << ' ' << buffer2 << std::endl;

    delete[] buffer;

}
