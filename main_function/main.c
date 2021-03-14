#include "libmx.h"


static void print_arr(int *arr, int size);
static bool int_arr_compare(int *arr1, int *arr2, int size);
void test_func(int i);

int main(void)
{
    /**********************************************************************/
    // int mx_quicksort (int *arr, int left, int right);
    // //Test for int mx_quicksort(int *arr, int left, int right);
    // int left[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 5};
    // int right[] = {5, 6, 6, 0, 1, 9, 4, 3, 9, 9, 11, 6};
    // int answer[] = {3, 6, 3, 0, 1, 8, 4, 3, 8, 8, 5, 0};
    // int arr1[] = {19, 83, 68, -20, 2, -6}; // returns 3
    // int arr1_a[] = {-20, -6, 2, 19, 68, 83};
    // int arr2[] = {53, 79, -30, -25, -18, -28, -3}; // returns 6
    // int arr2_a[] = {-30, -28, -25, -18, -3, 53, 79};
    // int arr3[] = {-23, 19, 10, 22, 33, 19, 39};// returns 3
    // int arr3_a[] = {-23, 10, 19, 19, 22, 33, 39};
    // int arr4[] = {10}; // returns 0
    // int arr4_a[] = {10};
    // int arr5[] = {69, 48}; // returns 1
    // int arr5_a[] = {48, 69};
    // int arr6[] = {25, 67, -4, 2, 37, 20, 3, -11, 79, 69}; // returns 8
    // int arr6_a[] = {-11, -4, 2, 3, 20, 25, 37, 67, 69, 79};
    // int arr7[] = {-23, 2, 43, 66, -25}; // returns 4
    // int arr7_a[] = {-25, -23, 2, 43, 66};
    // int arr8[] = {38, 61, 84, 7}; // returns 3
    // int arr8_a[] = {7, 38, 61, 84};
    // int arr9[] = {83, -2, 34, -2, 20, 54, 86, 60, 73, 52}; // returns 8
    // int arr9_a[] = {-2, -2, 20, 34, 52, 54, 60, 73, 83, 86};
    // int arr10[] = {25, 67, -4, 2, 37, 20, 3, -11, 79, 69}; // returns 8
    // int arr10_a[] = {-11, -4, 2, 3, 20, 25, 37, 67, 69, 79};
    // int arr11[] = {33, 19, 39, 47, 10, 63, 69, 48, 26, 25, 67, -4, 2}; // returns 5
    // int arr11_a[] = {33, 19, 39, 47, -4, 10, 25, 26, 48, 63, 67, 69, 2};
    // int arr12[] = {-6, -9, 27, 41, 38, -13, 8, 67}; // returns 0
    // int arr12_a[] = {-6, -9, 27, 41, 38, -13, 8, 67};
    // int size1 = sizeof(arr1) / sizeof(int);
    // int size2 = sizeof(arr2) / sizeof(int);
    // int size3 = sizeof(arr3) / sizeof(int);
    // int size4 = sizeof(arr4) / sizeof(int);
    // int size5 = sizeof(arr5) / sizeof(int);
    // int size6 = sizeof(arr6) / sizeof(int);
    // int size7 = sizeof(arr7) / sizeof(int);
    // int size8 = sizeof(arr8) / sizeof(int);
    // int size9 = sizeof(arr9) / sizeof(int);
    // int size10 = sizeof(arr10) / sizeof(int);
    // int size11 = sizeof(arr11) / sizeof(int);
    // int size12 = sizeof(arr12) / sizeof(int);
    // int size[] = {size1, size2, size3, size4, size5, size6, size7, size8, size9, size10, size11, size12};
    // int *arr[] = {arr1, arr2, arr3, arr4, arr5, arr6, arr7, arr8, arr9, arr10, arr11, arr12, NULL};
    // int *arr_a[] = {arr1_a, arr2_a, arr3_a, arr4_a, arr5_a, arr6_a, arr7_a, arr8_a, arr9_a, arr10_a, arr11_a, arr12_a, NULL};
    // for(int i = 0; arr[i] != NULL; ++i) {
    //     printf("/***************Test%d***************/\n", i + 1);

    //     int res = mx_quicksort(arr[i], left[i], right[i]);

    //     printf("Number of swaps is %s\n", (res == answer[i]) ? "True" : "False");

    //     if(res != answer[i]) {
    //         printf("Result = %d\t Answer = %d\n", res, answer[i]);
    //     }

    //     bool arr_comp = int_arr_compare(arr[i], arr_a[i], size[i]);

    //     printf("Array indentity is %s\n", arr_comp ? "True" : "False");

    //     if(!arr_comp) {
    //         printf("Res_arr = ");
    //         print_arr(arr[i], size[i]);
    //         printf("Ansver_arr = ");
    //         print_arr(arr_a[i], size[i]);
    //     }
    // }
    // //END of test for int mx_quicksort(int *arr, int left, int right);
    // /**********************************************************************/

    /**********************************************************************/
    //Test for char *mx_itoa(int number);
    
    // int arr[] = {0, rand() % INT32_MAX, rand() % INT32_MAX, -1*(rand() % INT32_MAX), -1*(rand() % INT32_MAX), INT32_MIN , INT32_MAX}; 

    // for(unsigned int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
    //     printf("/***************Test%d***************/\n", i + 1);
    //     printf("INT %11d\nSTR %11s\n\n", arr[i], mx_itoa(arr[i]));
    // }

    //END of test for char *mx_itoa(int number);
    /**********************************************************************/


    /**********************************************************************/
    //Test for void mx_print_unicode(wchar_t c); 
    
    // int arr[] = {48, 0xBC, 0xD8, 0xDF, 0x598D, 0x5988}; 

    // for(unsigned int i = 0; i < sizeof(arr) / sizeof(arr[0]); ++i) {
    //     printf("/***************Test%d***************/\n", i + 1);
    //     mx_print_unicode(arr[i]);
    //     printf("\n");
    // }

    //END of test for void mx_print_unicode(wchar_t c); 
    /**********************************************************************/


    /**********************************************************************/
    //Test for void mx_foreach(int* arr, int size, void(*f)(int));
    
    // int arr[] = {0, rand() % INT32_MAX, rand() % INT32_MAX, -1*(rand() % INT32_MAX), -1*(rand() % INT32_MAX), INT32_MIN , INT32_MAX};

    // mx_foreach(arr, sizeof(arr) / sizeof(arr[0]), test_func);

    //END of test for void mx_foreach(int* arr, int size, void(*f)(int));
    /**********************************************************************/


    /**********************************************************************/
    //Test for void *mx_memset(void *b, int c, size_t len);
    
    // char str[20];
    // mx_memset(str, 'c', 10);
    // str[10] = '\0';
    // printf("%s\n", str); 

    //END of test for void *mx_memset(void *b, int c, size_t len);
    /**********************************************************************/


    /**********************************************************************/
    //Test for void *mx_memcpy(void *restrictdst, const void *restrictsrc, size_t n)
    
    // char str1[] = "String";
    // char str2[20];
    // mx_memcpy(str2, str1, 6);
    // printf("%s == %s\n", str1, str2); 

    //END of test for void *mx_memcpy(void *restrictdst, const void *restrictsrc, size_t n)
    /**********************************************************************/


    /**********************************************************************/
    //Test for int int mx_bubble_sort(int *arr, int size);
    // int arr1[] = {68, -20, 2, -6, 8, 53, 79, -30, -25};
    // int arr1_a[] = {-30, -25, -20, -6, 2, 8, 53, 68, 79};
    // int arr2[] = {-7, -23};
    // int arr2_a[] = {-23, -7};
    // int arr3[] = {33, 19, 39, 47, 10, 63, 69, 48, 26, 25, 67, -4, 2};
    // int arr3_a[] = {-4, 2, 10, 19, 25, 26, 33, 39, 47, 48, 63, 67, 69};
    // int arr4[] = {-11, 79, 69, -9, -23, 2, 43, 66, -25, 35, 38, 61, 84, 7, 11};
    // int arr4_a[] = {-25, -23, -11, -9, 2, 7, 11, 35, 38, 43, 61, 66, 69, 79, 84};
    // int arr5[] = {-2, 20, 54, 86, 60, 73, 52};
    // int arr5_a[] = {-2, 20, 52, 54, 60, 73, 86};
    // int size1 = sizeof(arr1) / sizeof(int);
    // int size2 = sizeof(arr2) / sizeof(int);
    // int size3 = sizeof(arr3) / sizeof(int);
    // int size4 = sizeof(arr4) / sizeof(int);
    // int size5 = sizeof(arr5) / sizeof(int);
    // int size[] = {size1, size2, size3, size4, size5};
    // int *arr[] = {arr1, arr2, arr3, arr4, arr5, NULL};
    // int *arr_a[] = {arr1_a, arr2_a, arr3_a, arr4_a, arr5_a, NULL};
    // int answer[] = {20, 1, 43, 48, 6};
    // int size_i[] = {9, 2, 13, 15, 7};
    // for(int i = 0; arr[i] != NULL; ++i) {
    //     printf("/***************Test%d***************/\n", i + 1);

    //     int res = mx_bubble_sort(arr[i], size_i[i]);

    //     printf("Number of swaps is %s\n", (res == answer[i]) ? "True" : "False");

    //     if(res != answer[i]) {
    //         printf("Result = %d\t Answer = %d\n", res, answer[i]);
    //     }

    //     bool arr_comp = int_arr_compare(arr[i], arr_a[i], size[i]);

    //     printf("Array indentity is %s\n", arr_comp ? "True" : "False");

    //     if(!arr_comp) {
    //         printf("Res_arr = ");
    //         print_arr(arr[i], size[i]);
    //         printf("Ansver_arr = ");
    //         print_arr(arr_a[i], size[i]);
    //     }
    // }
    //END of test for int mx_bubble_sort(int *arr, int size);
    /**********************************************************************/


    /**********************************************************************/
    //Test for int mx_sqrt(int x);

    // int arr[] = {0, 3, 4, 16, 127, -3, -4, INT32_MIN, INT32_MAX, 21025};
    // int res[] = {0, 0, 2, 4, 0, 0, 0, 0, 0, 145};

    // for(int i = 0; i < 10; ++i) {
    //     printf("/***************Test%d***************/\n", i + 1);
    //     printf("%s\n", (mx_sqrt(arr[i]) == res[i]) ? "True" : "False");
    //     if(!(mx_sqrt(arr[i]) == res[i])) {
    //         printf("sqrt(%d) = %d\n", arr[i], mx_sqrt(arr[i]));
    //     } 
    // }
    
    //END of test for int mx_sqrt(int x);
    /**********************************************************************/



    /**********************************************************************/
    //Test for unsigned long mx_hex_to_nbr(const char *hex);

    // char *arr[] = {"0", "00", "FF", "C4", "FFFF", "ffff", "1234", "5678", "9abc", "dEf"};
    // unsigned long res[] = {0, 0, 255, 196, 65535, 65535, 4660, 22136, 39612, 3567};
    
    // for(int i = 0; i < 10; ++i) {
    //     printf("/***************Test%d***************/\n", i + 1);
    //     printf("%s\n", (mx_hex_to_nbr(arr[i]) == res[i]) ? "True" : "False");
    //     if(!(mx_hex_to_nbr(arr[i]) == res[i])) {
    //         printf("HEX = %s\tDEC = %lu\n", arr[i], mx_hex_to_nbr(arr[i]));
    //     } 
    // }
    
    //END of test for unsigned long mx_hex_to_nbr(const char *hex);
    /**********************************************************************/


    /**********************************************************************/
    //Test for char *mx_strcat(char *s1, const char *s2) && char *mx_strcpy(char *dst, const char *src);

    // char *arr[] = {"0", "00", "FF", "C4", "FFFF", "ffff", "1234", "5678", "9abc", "dEf"};
    
    // char temp[30];
    
    // for(int i = 0; i < 10; i += 2) {
    //     printf("/***************Test%d***************/\n", i / 2);
    //     temp[0] = *(mx_strcpy(temp, arr[i]));
    //     printf("%s + %s == ", temp, arr[i + 1]);
    //     printf("%s\n", mx_strcat(temp, arr[i + 1]));
    // }

    //END of test for char *mx_strcat(char *s1, const char *s2) && char *mx_strcpy(char *dst, const char *src);
    /**********************************************************************/

    /**********************************************************************/
    //Test for char *mx_strdup(const char *str) && int mx_strlen(const char *s) && char *mx_strnew(const int size);

    // char *arr[] = {"0", "", "FF", "C4", "FFFF", "ffff", "1234", "5678", "9abc", "dEf"};

    // for(int i = 0; i < 10; ++i) {
    //     printf("/***************Test%d***************/\n", i + 1);
    //     printf("ORIGINAL = \"%s\",\t COPY = \"%s\"\n", arr[i], mx_strdup(arr[i]));
    // }

    //END of test for char *mx_strdup(const char *str) && int mx_strlen(const char *s) && char *mx_strnew(const int size);
    /**********************************************************************/

    /**********************************************************************/
    //Test for void mx_del_strarr(char ***arr) && void mx_strdel(char **str) && char *mx_strnew(const int size);
    // char *arr[] = {"0", "", "FF", "C4", "FFFF", "ffff", "1234", "5678", "9abc", NULL};
    // char **str = (char **) malloc(10 * sizeof(char *));
    // int i = 0;

    // for(; arr[i] != NULL; ++i) {
    //     str[i] = mx_strdup(arr[i]);
    //     mx_printstr(str[i]);
    //     printf("\n");
    // }
    // str[i] = NULL;

    // mx_del_strarr(&str);
    
    // printf("Is str array delated ? %s\n", str == NULL ? "True" : "False");

    //END of test for void mx_del_strarr(char ***arr) && void mx_strdel(char **str) && char *mx_strnew(const int size);
    /**********************************************************************/

    /**********************************************************************/
    //Test for void mx_str_reverse(char *s);

    // char str[] = "String";
    // printf("%s\n", str);
    // mx_str_reverse(str);
    // printf("%s\n", str);

    //END of test for void mx_str_reverse(char *s);
    /**********************************************************************/


    /**********************************************************************/
    //Test for char *mx_strstr(const char *haystack, const char *needle);

    // char str[] = "find str in the text";
    // char src[] = "str";

    // printf("In \"%s\" \"%s\" at position = %s\n", str, src, mx_strstr(str, src));

    //END of test for char *mx_strstr(const char *haystack, const char *needle);
    /**********************************************************************/


    /**********************************************************************/
    //Test for 

    // char str[] = "  follow  *   the  white rabbit ";
    // printf("Test 1: %s\n", (mx_count_words(str, '*') == 2) ? "True" : "False");
    // printf("Test 2: %s\n", (mx_count_words(str, ' ') == 5) ? "True" : "False");
    // printf("Test 3: %s\n", (mx_count_words(NULL, ' ') == -1) ? "True" : "False");
    // printf("Test 4: %s\n", (mx_count_words("", ' ') == 0) ? "True" : "False");
    
    //END of test for 
    /**********************************************************************/


    /**********************************************************************/
    //Test for int mx_count_substr(const char *str, const char *sub);

    // char str[] = "yo, yo , yo  Yo";
    // printf("Test 1: %s\n", (mx_count_substr(str, "yo") == 3) ? "True" : "False");
    // printf("Test 2: %s\n", (mx_count_substr(str, ",") == 2) ? "True" : "False");
    // printf("Test 3: %s\n", (mx_count_substr(NULL, "yo") == -1) ? "True" : "False");
    // printf("Test 4: %s\n", (mx_count_substr(str, "") == 0) ? "True" : "False");
    
    //END of test for int mx_count_substr(const char *str, const char *sub);
    /**********************************************************************/
    

    /**********************************************************************/
    //Test for int mx_get_char_index(const char *str, char c);
    
    // char str[] = "0123456789abcdef";
    // printf("Test 1: %s\n", (mx_get_char_index(str, '0') == 0) ? "True" : "False");
    // printf("Test 2: %s\n", (mx_get_char_index(str, 'f') == 15) ? "True" : "False");
    // printf("Test 3: %s\n", (mx_get_char_index(NULL, '9') == -2) ? "True" : "False");
    // printf("Test 4: %s\n", (mx_get_char_index(str, 'h') == -1) ? "True" : "False");
    
    //END of test for int mx_get_char_index(const char *str, char c);
    /**********************************************************************/
    

    /**********************************************************************/
    //Test for int mx_get_substr_index(const char *str, const char *sub);

    // char str[] = "0123456789abcdef";
    // printf("Test 1: %s\n", (mx_get_substr_index(str, "123") == 1) ? "True" : "False");
    // printf("Test 2: %s\n", (mx_get_substr_index(str, "ab") == 10) ? "True" : "False");
    // printf("Test 3: %s\n", (mx_get_substr_index(NULL, "9") == -2) ? "True" : "False");
    // printf("Test 4: %s\n", (mx_get_substr_index(str, NULL) == -2) ? "True" : "False");
    // printf("Test 5: %s\n", (mx_get_substr_index(str, "13") == -1) ? "True" : "False");
    
    //END of test for int mx_get_substr_index(const char *str, const char *sub);
    /**********************************************************************/
    
    /**********************************************************************/
    //Test for char *mx_del_extra_spaces(const char *str);

    // char str1[] = "  follow  *   the  white rabbit ";
    // char *str2 = mx_del_extra_spaces(str1);
    // char *str3 = mx_strtrim(str1);
    // char str4[] = "\fMy  name...  is Neo\t\n ";
    // char *str5 = mx_del_extra_spaces(str4);
    // char *str6 = mx_strtrim(str4);
    // printf("/******mx_del_extra_spaces******/\n");
    // printf("Test 1: \"%s\"\n", str2);
    // printf("Test 2: \"%s\"\n", str5);
    // printf("/******mx_strtrim******/\n");
    // printf("Test 1: \"%s\"\n", str3);
    // printf("Test 2: \"%s\"\n", str6);

    //END of test for char *mx_del_extra_spaces(const char *str);
    /**********************************************************************/
    
    /**********************************************************************/
    //Test for char **mx_strsplit(const char *s, char c);

    // char s1[] = "**Good bye,**Mr.*Anderson.****";
    // char **arr1 = mx_strsplit(s1, '*');
    // mx_print_strarr(arr1, "'");
    // // arr = ["Good bye,", "Mr.", "Anderson."]
    // char s2[] = "Knock, knock,    Neo.   ";
    // char **arr2 = mx_strsplit(s2, ' '  );
    // // arr = ["Knock,", "knock,", "Neo."]
    // mx_print_strarr(arr2, "'");

    //END of test for char **mx_strsplit(const char *s, char c);
    /**********************************************************************/
    
    /**********************************************************************/
    //Test for char *mx_replace_substr(const char *str, const char* sub, const char *replace);

    // char str1[] = "McDonalds";
    // char *str;
    // printf("Test 1: %s\n", !mx_strcmp(str = mx_replace_substr(str1, "alds", "uts"), "McDonuts") ? "True" : "False");
    // char str2[] = "Ururu turu";
    // printf("Test 2: %s\n", !mx_strcmp(str = mx_replace_substr(str2, "ru", "ta"), "Utata tuta") ? "True" : "False");
    // char str3[] = "McDonalds";
    // printf("Test 3: %s\n", !mx_strcmp(str = mx_replace_substr(str3, "Mc", "Ms"), "MsDonalds") ? "True" : "False");
    // char str4[] = "Ururu turu";
    // printf("Test 4: %s\n", !mx_strcmp(str = mx_replace_substr(str4, "", "ta"), "Ururu turu") ? "True" : "False");
    // char str5[] = "Ururu turu";
    // printf("Test 5: %s\n", !mx_strcmp(str = mx_replace_substr(str5, "ru", ""), "U tu") ? "True" : "False");
    // printf("Test 6: %s\n", !mx_strcmp(str = mx_replace_substr(NULL, "ru", "ta"), NULL) ? "True" : "False");
    // printf("Test 7: %s\n", !mx_strcmp(str = mx_replace_substr(str5, NULL, "ta"), NULL) ? "True" : "False");
    // printf("Test 8: %s\n", !mx_strcmp(str = mx_replace_substr(str5, "ru", NULL), NULL) ? "True" : "False");
    // printf("%s\n", str);

    //END of test for char *mx_replace_substr(const char *str, const char* sub, const char *replace);
    /**********************************************************************/
    

    /**********************************************************************/
    //Test for mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

    // char str[20], out1[20], out2[20];
    // strcpy(str, "hello there");
    // printf("Test 1:\nEND_POINT = %s\n", !mx_strcmp(memccpy(out1, str, ' ', 20), mx_memccpy(out2, str, ' ', 20)) ? "True" : "False");
    // printf("STR_RES = %s\n", !mx_strcmp(out1, out2) ? "True" : "False");
    // printf("Test 2:\nEND_POINT = %s\n", !mx_strcmp(memccpy(out1, str, 'j', 20), mx_memccpy(out2, str, 'j', 20)) ? "True" : "False");
    // printf("STR_RES = %s\n", !mx_strcmp(out1, out2) ? "True" : "False");
    // printf("Test 3:\nEND_POINT = %s\n", !mx_strcmp(memccpy(out1, str, ' ', 5), mx_memccpy(out2, str, ' ', 5)) ? "True" : "False");
    // printf("STR_RES = %s\n", !mx_strcmp(out1, out2) ? "True" : "False");
    // printf("Test 4:\nEND_POINT = %s\n", !mx_strcmp(memccpy(out1, str, 'P', 10), mx_memccpy(out2, str, 'P', 10)) ? "True" : "False");
    // printf("STR_RES = %s\n", !mx_strcmp(out1, out2) ? "True" : "False");
    // printf("Test 5:\nEND_POINT = %s\n", !mx_strcmp(memccpy(out1, str, 'h', 20), mx_memccpy(out2, str, 'h', 20)) ? "True" : "False");
    // printf("STR_RES = %s\n", !mx_strcmp(out1, out2) ? "True" : "False");
    // printf("Test 6:\nEND_POINT = %s\n", !mx_strcmp(memccpy(out1, str, '\0', 10), mx_memccpy(out2, str, '\0', 10)) ? "True" : "False");
    // printf("STR_RES = %s\n", !mx_strcmp(out1, out2) ? "True" : "False");
    // printf("OUT = %s\n", out1);

    //END of test for mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
    /**********************************************************************/
    
    
    /**********************************************************************/
    //Test for 

    //END of test for 
    /**********************************************************************/
    

    /**********************************************************************/
    //Test for 

    //END of test for 
    /**********************************************************************/
    
    return 0;
}


static bool int_arr_compare(int *arr1, int *arr2, int size)
{
    for(int i = 0; i < size; ++i) {
        if(arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

static void print_arr(int *arr, int size)
{
    printf("{");
    int i = 0;

    for(; i < (size - 1); ++i) {
        printf("%d, ", arr[i]);
    }

    printf("%d}\n", arr[i]);

}
/*
void test_func(int i)
{
    printf("%d\n", i);
}
*/
