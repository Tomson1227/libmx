#include "libmx.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

// static bool cmp_sort_list(void *a, void *b) {
//     return (int)a > (int)b ? true : false;
// }
static void print_arr(int *arr, int size)
{
    printf("{");
    int i = 0;

    for(; i < (size - 1); ++i) {
        printf("%d, ", arr[i]);
    }

    printf("%d}\n", arr[i]);

}

int main(/*int argc, char *argv[]*/) {
    // mx_printstr(" **********************\n *\tUTILS PACK    *\n **********************\n\n");
    // mx_printstr("----------------MX_PRINTCHAR-------------------\n");
    //     mx_printstr("mx_printchar 'h' | "); mx_printchar('h'); mx_printstr("\n");
    //     mx_printstr("mx_printchar 'A' | "); mx_printchar('A'); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_PRINT_UNICODE-------------------\n");
    //     mx_printstr("1 bytes:\n"); mx_print_unicode(65); mx_printstr("\n");
    //     mx_printstr("2 bytes:\n"); mx_print_unicode(162); mx_printstr("\n");
    //     mx_printstr("3 bytes:\n"); mx_print_unicode(8364); mx_printstr("\n");
    //     mx_printstr("4 bytes:\n"); mx_print_unicode(128525); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_PRINTSTR-------------------\n");
    //     mx_printstr("function works correctly"); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_PRINT_STRARR-------------------\n");
    //     char *print_strarr[5] = {"abc", "xyz", "ghi", "def", NULL};
    //     mx_printstr("mx_print_strarr return \"abc xyz ghi def\"? | "); mx_print_strarr(print_strarr, " ");
    //     mx_printstr("mx_print_strarr return nothing? | "); mx_print_strarr(print_strarr, NULL); mx_printstr("\n");
    //     mx_printstr("mx_print_strarr return nothing? | "); mx_print_strarr(NULL, NULL); mx_printstr("\n");
    //     mx_printstr("mx_print_strarr return nothing? | "); mx_print_strarr(NULL, " "); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_PRINTINT-------------------\n");
    //     mx_printstr("mx_printint -2147483648 | "); mx_printint(-2147483648); mx_printstr("\n");
    //     mx_printstr("mx_printint -1 | "); mx_printint(-1); mx_printstr("\n");
    //     mx_printstr("mx_printint 0 | "); mx_printint(0); mx_printstr("\n");
    //     mx_printstr("mx_printint 1 | "); mx_printint(1); mx_printstr("\n");
    //     mx_printstr("mx_printint of 2147483647 | "); mx_printint(2147483647); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_POW-------------------\n");
    //     mx_printstr("mx_pow 3, 3 is 27? | "); 
    //     printf("%f\n", mx_pow(3, 3));
    //     mx_printstr("mx_pow 2.5, 3 is 15.625? | "); 
    //     printf("%f\n",mx_pow(2.5, 3));
    //     mx_printstr("mx_pow 2, 0 is 1 | "); 
    //     printf("%f\n",mx_pow(2, 0));

    // mx_printstr("\n\n----------------MX_SQRT-------------------\n");
    //     mx_printstr("mx_sqrt 3 is 0? | "); mx_printint(mx_sqrt(3)); mx_printstr("\n");
    //     mx_printstr("mx_sqrt 4 is 2? | "); mx_printint(mx_sqrt(4)); mx_printstr("\n");
    //     mx_printstr("mx_sqrt 625 is 25? | "); mx_printint(mx_sqrt(625)); mx_printstr("\n");
    //     mx_printstr("mx_sqrt 2147395600 is 46340? | "); mx_printint(mx_sqrt(2147395600)); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_NBR_TO_HEX-------------------\n");
    //     char *hex1 = mx_nbr_to_hex(52);
    //     char *hex2 = mx_nbr_to_hex(1000);
    //     char *hex3 = mx_nbr_to_hex(2147483647);
    //     char *hex4 = mx_nbr_to_hex(4294967295);
    //     mx_printstr("mx_nbr_to_hex of 52 is 34? | "); mx_printstr(hex1); mx_printstr("\n");
    //     mx_printstr("mx_nbr_to_hex of 1000 is 3e8? | "); mx_printstr(hex2); mx_printstr("\n");
    //     mx_printstr("mx_nbr_to_hex of 2147483647 is 7FFFFFFF? | "); mx_printstr(hex3); mx_printstr("\n");
    //     mx_printstr("mx_nbr_to_hex of 4294967295 is FFFFFFFF? | "); mx_printstr(hex4); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_HEX_TO_NBR-------------------\n");
    //     mx_printstr("mx_hex_to_nbr of \"c4\" is 196? | "); mx_printint(mx_hex_to_nbr("c4")); mx_printstr("\n");
    //     mx_printstr("mx_hex_to_nbr of \"fade\" is 64222? | "); mx_printint(mx_hex_to_nbr("FADE")); mx_printstr("\n");
    //     mx_printstr("mx_hex_to_nbr of NULL is 0 | "); mx_printint(mx_hex_to_nbr(NULL)); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_ITOA-------------------\n");
    //     char *integer1 = mx_itoa(-2147483648);
    //     mx_printstr("mx_itoa return -2147483648? | "); printf("%s\n", integer1);
    //     char *integer2 = mx_itoa(-11);
    //     mx_printstr("mx_itoa return -11? | "); printf("%s\n", integer2);
    //     char *integer3 = mx_itoa(-1);
    //     mx_printstr("mx_itoa return -1? | "); printf("%s\n", integer3);
    //     char *integer4 = mx_itoa(0);
    //     mx_printstr("mx_itoa return 0? | "); printf("%s\n", integer4);
    //     char *integer5 = mx_itoa(1);
    //     mx_printstr("mx_itoa return 1? | "); printf("%s\n", integer5);
    //     char *integer6 = mx_itoa(10);
    //     mx_printstr("mx_itoa return 10? | "); printf("%s\n", integer6);
    //     char *integer7 = mx_itoa(1234);
    //     mx_printstr("mx_itoa return 1234? | "); printf("%s\n", integer7);
    //     char *integer8 = mx_itoa(2147483647);
    //     mx_printstr("mx_itoa return 2147483647? | "); printf("%s\n", integer8);

    // mx_printstr("\n\n----------------MX_FOREACH-------------------\n");
    //     int foreach[5] = {1, 2, 3, 4, 5};
    //     mx_printstr("mx_foreach result is 12345? | "); mx_foreach(foreach, 5, mx_printint); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_BINARY_SEARCH-------------------\n");
        // char *binary_arr[6] = {"222", "Abcd", "aBc", "ab", "az", "z"};
        // int binary_count = 0;
        // mx_printstr("mx_binary_search return 3 and 3? | "); mx_printint(mx_binary_search(binary_arr, 6, "ab", &binary_count)); mx_printchar(' '); mx_printint(binary_count); mx_printstr("\n");
        // binary_count = 0;
        // mx_printstr("mx_binary_search return 2 and 1? | "); mx_printint(mx_binary_search(binary_arr, 6, "aBc", &binary_count)); mx_printchar(' '); mx_printint(binary_count); mx_printstr("\n");
        // binary_count = 0;
        // mx_printstr("mx_binary_search return -1 and 0? | "); mx_printint(mx_binary_search(binary_arr, 6, "aBz", &binary_count)); mx_printchar(' '); mx_printint(binary_count); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_BUBBLE_SORT-------------------\n");
    
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

    //     bool arr_comp = true;
    //     for(int j = 0; j < size[i]; ++j) {
    //         if(arr[i][j] != arr_a[i][j]) {
    //             arr_comp = false;
    //         }
    //     }
    //     printf("Array indentity is %s\n", arr_comp ? "True" : "False");

    //     if(!arr_comp) {
    //         printf("RES_arr = ");
    //         print_arr(arr[i], size[i]);
    //         printf("ANS_arr = ");
    //         print_arr(arr_a[i], size[i]);
    //     }
    // }
    /**********************************************************************/

        // int bubble_arr3[] = {-779, -698, -598, -493, -247, 24, 39, 207, 379, 462, 734};
        // mx_printstr("mx_bubble_sort return 0? | "); mx_printint(mx_bubble_sort(bubble_arr3, 11)); mx_printstr("\n");
        // int bubble_arr4[] = {68, -20, 2, -6, 8, 53, 79, -30, -25};
        // mx_printstr("mx_bubble_sort return 20? | "); mx_printint(mx_bubble_sort(bubble_arr4, 9)); mx_printstr("\n");
        // int bubble_arr5[] = {33, 19, 39, 47, 10, 63, 69, 48, 26, 25, 67, -4, 2};
        // mx_printstr("mx_bubble_sort return 43? | "); mx_printint(mx_bubble_sort(bubble_arr5, 13)); mx_printstr("\n");
    
    // mx_printstr("\n\n----------------MX_QUICK_SORT-------------------\n");
    // int quicksort_arr1[] = {19, 83, 68, -20, 2, -6};
    // // // int quicksort_arr1[] =  {53, 79, -30, -25, -18, -28, -3};
    // // // int quicksort_arr1[] =  {-23, 19, 10, 22, 33, 19, 39};
    // int num_swaps = mx_quicksort(quicksort_arr1, 0, 0);
    // for (int i = 0; i <= 6; i++) {
    //     mx_printint(quicksort_arr1[i]);
    //     mx_printchar(' ');
    // }
    // mx_printchar('\n');
    // mx_printint(num_swaps);
    // mx_printchar('\n');

    // mx_printstr("\n\n **********************\n *\tSTRING PACK   *\n **********************\n\n");
    // mx_printstr("\n\n----------------MX_STRLEN-------------------\n");
    //     mx_printstr("mx_strlen return 9? | "); mx_printint(mx_strlen("game over")); mx_printstr("\n");
    //     mx_printstr("mx_strlen return 12? | "); mx_printint(mx_strlen("hello world!")); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_SWAP_CHAR-------------------\n");
    //     char swap_char[] = "ONE";
    //     mx_printstr("mx_swap_char return NOE? | "); mx_swap_char(&swap_char[0], &swap_char[1]); mx_printstr(swap_char); mx_printstr("\n");
    //     mx_printstr("mx_swap_char return NEO? | "); mx_swap_char(&swap_char[1], &swap_char[2]); mx_printstr(swap_char); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STR_REVERSE-------------------\n");
    //     char str_reverse[] = "game over";
    //     mx_str_reverse(str_reverse);
    //     mx_printstr("mx_str_reverse of \"game over\" is revo emag | "); 
    //     mx_printstr(str_reverse); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRDEL-------------------\n");
    //     char *strdel = strdup("full string");
    //     mx_printstr("before mx_strdel string is \"full string\"? | "); mx_printstr(strdel); mx_printstr("\n");
    //     mx_strdel(&strdel);
    //     mx_printstr("after mx_strdel string is (null)? | "); printf("%s\n", strdel);

    // mx_printstr("\n\n----------------MX_DEL_STRARR-------------------\n");
    //     char **strarr = (char **)malloc(sizeof(char *) * 3);
    //     strarr[0] = strdup("abc"); strarr[1] = strdup("xyz"); strarr[2] = NULL;
    //     mx_printstr("strarr before mx_del_strarr is abc  xyz  (null)? | "); printf("%s  %s  %s\n", strarr[0], strarr[1], strarr[2]); 
    //     mx_del_strarr(&strarr);
    //     mx_printstr("strarr after mx_del_strarr is (null)? | "); printf("%s\n", (char *) strarr);

    // mx_printstr("\n\n----------------MX_GET_CHAR_INDEX-------------------\n");
    //     char *get_char_index = "123456789";
    //     mx_printstr("mx_get_char_index return 4? | "); mx_printint(mx_get_char_index(get_char_index, '5')); mx_printstr("\n");
    //     mx_printstr("mx_get_char_index return -1? | "); mx_printint(mx_get_char_index(get_char_index, 'A')); mx_printstr("\n");
    //     mx_printstr("mx_get_char_index return -2? | "); mx_printint(mx_get_char_index(NULL, '5')); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRDUP-------------------\n");
    //     char *strdup1 = mx_strdup("123456789");
    //     mx_printstr("mx_strdup return \"123456789\"? | "); mx_printstr(strdup1); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRNDUP-------------------\n");
    //     char *strndup = mx_strndup("hello", 20);
    //     mx_printstr("mx_strndup return \"hello\"? | "); mx_printstr(strndup); mx_printstr("\n");

    mx_printstr("\n\n----------------MX_STRCPY-------------------\n");
        const char *strcpy1 = "123456789"; 
        char dstcpy[15];
        printf("Test1: %s\n", !mx_strcmp(mx_strcpy(dstcpy, strcpy1), strcpy(dstcpy, strcpy1)) ? "True" : "False");
        const char *strcpy2 = "";
        printf("Test2: %s\n", !mx_strcmp(mx_strcpy(dstcpy, strcpy2), strcpy(dstcpy, strcpy2)) ? "True" : "False");
        //const char *strcpy3 = NULL;
        //printf("Test3: %s\n", /*mx_strcmp(*/mx_strcpy(dstcpy, strcpy3)/*, strcpy(dstcpy, strcpy3)) ? "True" : "False"*/);
        //const char *strcpy4 = "123456789";
       // printf("Test4: %s\n", mx_strcmp(mx_strcpy(NULL, strcpy4), strcpy(NULL, strcpy4)) ? "True" : "False");
    // mx_printstr("\n\n----------------MX_STRNCPY-------------------\n");
    //     const char *strncpy = "123456789"; char dstncpy[15];
    //     mx_printstr("mx_strncpy return \"12345\"? | "); mx_printstr(mx_strncpy(dstncpy, strncpy, 5)); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRCMP-------------------\n");
    //     char *strcmp1 = "aaaaaaa"; char *strcmp2 = "aaaaaaaA"; char *strcmp3 = "aaaaaaa";
    //     mx_printstr("strcmp \t  return   \t   | "); mx_printint(strcmp(strcmp2, strcmp1));
    //     mx_printstr("\nmx_strcmp return the same? | "); mx_printint(mx_strcmp(strcmp2, strcmp1)); mx_printstr("\n");
    //     mx_printstr("strcmp \t  return   \t   | "); mx_printint(strcmp(strcmp1, strcmp2));
    //     mx_printstr("\nmx_strcmp return the same? | "); mx_printint(mx_strcmp(strcmp1, strcmp2)); mx_printstr("\n");
    //     mx_printstr("strcmp \t  return   \t   | "); mx_printint(strcmp(strcmp1, strcmp3));
    //     mx_printstr("\nmx_strcmp return the same? | "); mx_printint(mx_strcmp(strcmp1, strcmp3)); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRCAT-------------------\n");
    //     char strcat1[10] = "12345"; char strcat2[5] = "6789";
    //     char strcat3[10] = "12345"; char strcat4[5] = "6789";
    //     mx_printstr("strcat \t  return   \t   | "); mx_printstr(strcat(strcat1, strcat2));
    //     mx_printstr("\nmx_strcat return the same? | "); mx_printstr(strcat(strcat3, strcat4)); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRSTR-------------------\n");
    //     char *strstr1 = "12345679";
    //     char *cmp1 = "8";
    //     printf("Test1: %s\n", strstr(strstr1, cmp1) == mx_strstr(strstr1, cmp1) ? "True" : "False");
    //     char *cmp2 = "1";
    //     printf("Test2: %s\n", strstr(strstr1, cmp2) == mx_strstr(strstr1, cmp2) ? "True" : "False");
    //     char *cmp3 = "9";
    //     printf("Test3: %s\n", strstr(strstr1, cmp3) == mx_strstr(strstr1, cmp3) ? "True" : "False");
    //     char *cmp4 = "";
    //     printf("Test4: %s\n", strstr(strstr1, cmp4) == mx_strstr(strstr1, cmp4) ? "True" : "False");
    //     char *strstr2 = "";
    //     char *cmp5 = "1";
    //     printf("Test5: %s\n", strstr(strstr2, cmp5) == mx_strstr(strstr2, cmp5) ? "True" : "False");
    //     char *cmp6 = "1";
    //     printf("Test6: %s\n", strstr(strstr2, cmp6) == mx_strstr(strstr2, cmp6) ? "True" : "False");

    // mx_printstr("\n\n----------------MX_GET_SUBSTR_INDEX-------------------\n");
    //     mx_printstr("mx_get_substr_index \"2\"? | "); mx_printint(mx_get_substr_index("McDonalds", "Don")); mx_printstr("\n");
    //     mx_printstr("mx_get_substr_index \"3\"? | "); mx_printint(mx_get_substr_index("McDonalds Donuts", "on")); mx_printstr("\n");
    //     mx_printstr("mx_get_substr_index \"-1\"? | "); mx_printint(mx_get_substr_index("McDonalds", "Donatello")); mx_printstr("\n");
    //     mx_printstr("mx_get_substr_index \"-2\"? | "); mx_printint(mx_get_substr_index("McDonalds", NULL)); mx_printstr("\n");
    //     mx_printstr("mx_get_substr_index \"-2\"? | "); mx_printint(mx_get_substr_index(NULL, "Don")); mx_printstr("\n");

    // write(1, "\n\n----------------MX_COUNT_SUBSTR-------------------\n", 53);
    //     char *count_substr = "yo, yo, yo Neo";
    //     printf("Test1: %s\n", mx_count_substr(count_substr, "yo") == 3 ? "True" : "False");
    //     printf("Test2: %s\n", mx_count_substr(NULL, "yo") == -1 ? "True" : "False"); //null's check
    //     printf("Test3: %s\n", mx_count_substr(count_substr, NULL) == -1 ? "True" : "False"); //null's check

    // mx_printstr("\n\n----------------MX_COUNT_WORDS-------------------\n");
    //     char *count_words = "   follow  *    the   white   rabbit";
    //     mx_printstr("mx_count_words return \"2\"? | "); mx_printint(mx_count_words(count_words, '*')); mx_printstr("\n");
    //     mx_printstr("mx_count_words return \"5\"? | "); mx_printint(mx_count_words(count_words, ' ')); mx_printstr("\n");
    //     mx_printstr("mx_count_words return \"-1\"? (null's check) | "); mx_printint(mx_count_words(NULL, ' ')); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRNEW-------------------\n");
    //     char *strnew = mx_strnew(5);
    //     mx_printstr("mx_strnew return \"^@^@^@^@^@$\"? (check with cat -e) | "); write( 1, strnew, 5); mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_STRTRIM-------------------\n");
    //     char strtrim[] = "\f    My name... is Neo   \t\n ";
    //     char strtrim2[] = "My name... is Neo   \t\n ";
    //     char strtrim3[] = "           \t             \n ";
    //     char *cleared_trim = mx_strtrim(strtrim);
    //     char *cleared_trim2 = mx_strtrim(strtrim2);
    //     char *cleared_trim3 = mx_strtrim(strtrim3);
    //     //printf("SYMBOL %d\n", cleared_trim3[0]);
    //     mx_printstr("mx_strtrim return \"My name... is Neo\"? | "); mx_printstr(cleared_trim); mx_printstr("\n");
    //     mx_printstr("mx_strtrim return \"My name... is Neo\"? | "); mx_printstr(cleared_trim2); mx_printstr("\n");
    //     mx_printstr("mx_strtrim return \"\"? | "); printf("\"%s\"\n", cleared_trim3);
    //     mx_printstr("mx_strtrim return (null)? | "); printf("%s\n", mx_strtrim(NULL));

    // mx_printstr("\n\n----------------MX_DEL_EXTRA_SPACES-------------------\n");
    //     char del_spaces[] = "\f    My name...      is    \r  Neo   \t\n";
    //     char del_spaces2[] = "           \t             \n ";
    //     char *cleared_del_spaces = mx_del_extra_spaces(del_spaces);
    //     char *cleared_del_spaces2 = mx_del_extra_spaces(del_spaces2);
    //     mx_printstr("mx_del_extra_spaces return \"My name... is Neo\"? | "); mx_printstr(cleared_del_spaces); mx_printstr("\n");
    //     mx_printstr("mx_del_extra_spaces return \"\"? | "); printf("\"%s\"\n", cleared_del_spaces2);
    //     mx_printstr("mx_del_extra_spaces return (null)? | "); printf("%s\n", mx_del_extra_spaces(NULL));

    // mx_printstr("\n\n----------------MX_STRSPLIT-------------------\n");
    //     char strsplit[] = "**Good bye,**Mr.*Anderson.****";
    //     char **splited = mx_strsplit(strsplit, '*');
    //     char strsplit2[] = "       Knock, knock,         Neo.         ";
    //     char **splited2 = mx_strsplit(strsplit2, ' ');
    //     char **splited3 = mx_strsplit(NULL, ' ');
    //     mx_printstr("mx_strsolit return is \"Good bye,\" \"Mr.\" \"Anderson.\" (null)? | "); printf("\"%s\"  \"%s\"  \"%s\" \"%s\"\n", splited[0], splited[1], splited[2], splited[3]); 
    //     mx_printstr("mx_strsolit return is \"Knock,\" \"knock,\" \"Neo.\" (null)? | "); printf("\"%s\"  \"%s\"  \"%s\" \"%s\"\n", splited2[0], splited2[1], splited2[2], splited2[3]); 
    //     mx_printstr("mx_strsolit return (null)? | "); printf("%s\n", (char *)splited3);

    // mx_printstr("\n\n----------------MX_STRJOIN-------------------\n");
    //     char *strjoin1 = "this", *strjoin2 = "dodge ", *strjoin3 = NULL;
    //     char *strjoin_result1 = mx_strjoin(strjoin2, strjoin1);
    //     char *strjoin_result2 = mx_strjoin(strjoin1, strjoin3);
    //     char *strjoin_result3 = mx_strjoin(strjoin3, strjoin2);
    //     char *strjoin_result4 = mx_strjoin(strjoin3, strjoin3);
    //     mx_printstr("mx_strjoin return \"dodge this\"? | "); mx_printstr(strjoin_result1); mx_printstr("\n");
    //     mx_printstr("mx_strjoin return \"this\"? | "); mx_printstr(strjoin_result2); mx_printstr("\n");
    //     mx_printstr("mx_strjoin return \"dodge \"? | "); mx_printstr(strjoin_result3); mx_printstr("\n");
    //     mx_printstr("mx_strjoin return \"(null)\"? | "); printf("%s\n", strjoin_result4);

    // mx_printstr("\n\n----------------MX_FILE_TO_STR-------------------\n"); // HOW TO CHECK??????????
    //     mx_printstr("check function with ./a.out src/mx_strlen.c\n");
    //     if (argc > 1) {
    //         char *file_to_str = mx_file_to_str(argv[1]);
    //         mx_printstr(file_to_str);
    //     }

    mx_printstr("\n\n----------------MX_READ_LINE-------------------\n"); // CORRECT IT !!!!!!
        int fd = open("/home/alex/Desktop/Ucode/Stage2/libmx/main_function/fragment.txt", O_RDONLY);
        // int fd = -1;
        char *lineptr1 = NULL;
        int res1;
        res1 = mx_read_line(&lineptr1, 20, 'f', fd);
        printf("\nres1 = %d\nlineptr1 = %s|\nallocated_mem = %zu\n", res1, lineptr1, malloc_size(lineptr1));
        printf("==============================================\n");
        char *lineptr2 = NULL;
        int res2;
        res2 = mx_read_line(&lineptr2, 35, 't', fd);
        printf("\nres2 = %d\nlineptr2 = %s|\nallocated_mem = %zu\n", res2, lineptr2, malloc_size(lineptr2));
        printf("==============================================\n");
        char *lineptr3 = NULL;
        int res3;
        res3 = mx_read_line(&lineptr3, 4, '.', fd);
        printf("\nres3 = %d\nlineptr3 = %s|\nallocated_mem = %zu\n", res3, lineptr3, malloc_size(lineptr3));
        printf("==============================================\n");
        char *lineptr4 = NULL;
        int res4;
        // printf("\nlineptr4 = %s|\n\n", lineptr4);
        res4 = mx_read_line(&lineptr4, 4, '5', fd);
        printf("\nres4 = %d\nlineptr4 = %s|\nallocated_mem = %zu\n", res4, lineptr4, malloc_size(lineptr4));
        printf("==============================================\n");
        char *lineptr5 = NULL;
        int res5;
        res5 = mx_read_line(&lineptr5, 4, 'a', fd);
        printf("\nres5 = %d\nlineptr5 = %s|\nallocated_mem = %zu\n", res5, lineptr5, malloc_size(lineptr5));
        printf("==============================================\n");
        close(fd);
        // system("leaks -q a.out");
        mx_printstr("\n");


    // mx_printstr("\n\n----------------MX_REPLACE_SUBSTR-------------------\n");
    //     char replace_substr1[] = "McDonalds";
    //     char replace_substr2[] = "Ururu turu";
    //     char replace_substr3[] = "C5RTY8Ip1NR   rPDvSLYNwf5h4GDeEfoZZbdD4pIzJS3p 4cS35P08V3HUzKa5h4GDeE8YZD9j5h4GDeEZ5hEL4GDQZk21EL4GD8GqtDfp";
    //     char *repleced1 = mx_replace_substr(replace_substr1, "alds", "uts");
    //     char *repleced2 = mx_replace_substr(replace_substr2, "ru", "ta");
    //     char *repleced3 = mx_replace_substr(replace_substr2, NULL, "ta");
    //     char *repleced4 = mx_replace_substr(NULL, "ru", "ta");
    //     char *repleced5 = mx_replace_substr(replace_substr2, "ru", NULL);
    //     char *repleced6 = mx_replace_substr(replace_substr3, "rPD", "rrr");
    //     mx_printstr("mx_replace_substr return \"McDonuts\"? | "); mx_printstr(repleced1); mx_printstr("\n");
    //     mx_printstr("mx_replace_substr return \"Utata tuta\"? | "); mx_printstr(repleced2); mx_printstr("\n");
    //     mx_printstr("mx_replace_substr return \"(null)\"? | "); printf("%s\n", repleced3);
    //     mx_printstr("mx_replace_substr return \"(null)\"? | "); printf("%s\n", repleced4);
    //     mx_printstr("mx_replace_substr return \"(null)\"? | "); printf("%s\n", repleced5);
    //     mx_printstr("mx_replace_substr return \"()\"? | "); printf("%s\n", repleced6);



    // mx_printstr(" *************************************\n *\t      MEMORY PACK\t     *\n *************************************\n");
    // mx_printstr("\n----------------MX_MEMSET-------------------\n");
    //         char memset1[13]= "1234567890";
    //         char memset2[13]= "1234567890";
    //     mx_printstr("memset    return\t   | "); mx_printstr(memset(memset1, 'a', 5));
    //     mx_printstr("|\nmx_memset return the same? | "); mx_printstr(mx_memset (memset2, 'a', 5)); mx_printstr("|\n");

    // mx_printstr("\n----------------MX_MEMCPY-------------------\n");
    //     char memcpy_dest1[11] = "1234567890";
    //     char memcpy_dest2[11] = "1234567890";
    //     char *memcpy_src = "54321";
    //     mx_printstr("memcpy    return\t   | "); mx_printstr(memcpy(memcpy_dest1, memcpy_src, 5));
    //     mx_printstr("|\nmx_memcpy return the same? | "); mx_printstr(mx_memcpy(memcpy_dest2, memcpy_src, 5)); mx_printstr("|\n");

    // mx_printstr("\n----------------MX_MEMCCPY-------------------\n");
    //     char memccpy_dest1[10] = "123456789";
    //     char memccpy_dest2[10] = "123456789";
    //     mx_printstr("memccpy    return\t    | "); mx_printstr(memccpy(memccpy_dest1, "54321", '3', 8));
    //     mx_printstr("|\nmx_memccpy return the same? | "); mx_printstr(mx_memccpy(memccpy_dest2, "54321", '3', 8)); mx_printstr("|\n");
    //     printf("dst after memccpy    is | %s|\ndst after mx_memccpy is | %s|\n", memccpy_dest1, memccpy_dest2);
    //     printf("memccpy    return\t    | %s|\n", memccpy(memccpy_dest1, "54321", 'a', 8));
    //     printf("mx_memccpy return the same? | %s|\n", mx_memccpy(memccpy_dest2, "54321", 'a', 8));

    // mx_printstr("\n----------------MX_MEMCMP-------------------\n");
    //     char *memcmp1 = "aaaaa"; 
    //     char *memcmp2 = "aaaaA"; 
    //     char *memcmp3 = "aaaaaaa";
    //     mx_printstr("memcmp \t  return   \t   | "); mx_printint(memcmp(memcmp2, memcmp1, 5));
    //     mx_printstr("|\nmx_memcmp return the same? | "); mx_printint(mx_memcmp(memcmp2, memcmp1, 5)); mx_printstr("|\n");
    //     mx_printstr("memcmp \t  return   \t   | "); mx_printint(memcmp(memcmp1, memcmp2, 5));
    //     mx_printstr("|\nmx_memcmp return the same? | "); mx_printint(mx_memcmp(memcmp1, memcmp2, 5)); mx_printstr("|\n");
    //     mx_printstr("memcmp \t  return   \t   | "); mx_printint(memcmp(memcmp1, memcmp3, 5));
    //     mx_printstr("|\nmx_memcmp return the same? | "); mx_printint(mx_memcmp(memcmp1, memcmp3, 5)); mx_printstr("|\n");

    // mx_printstr("\n----------------MX_MEMCHR-------------------\n");
    //     unsigned char memchr1[11] = "1234567890";
    //     printf("memchr    return  | %s|\n", memchr(memchr1, '5', 10));
    //     printf("mx_memchr return  | %s|\n", mx_memchr(memchr1, '5', 10));
    //     unsigned char memchr2[11] = "1234567890";
    //     printf("memchr    return  | %s|\n", memchr(memchr2, 'x', 10));
    //     printf("mx_memchr return  | %s|\n", mx_memchr(memchr2, 'x', 10));
    //     unsigned char *memchr3 = NULL;
    //     printf("memchr    return  | %s|\n", memchr(memchr3, '6', 0));
    //     printf("mx_memchr return  | %s|\n", mx_memchr(memchr3, '6', 0));

    // mx_printstr("\n----------------MX_MEMRCHR-------------------\n");
    //     unsigned char memrchr1[11] = "1234567890";
    //     printf("mx_memrchr return 567890 | %s|\n", mx_memrchr(memrchr1, '5', 10));
    //     unsigned char memrchr2[11] = "1234567890";
    //     printf("mx_memrchr return (null) | %s|\n", mx_memrchr(memrchr2, 'x', 10));
    //     unsigned char *memrchr3 = NULL;
    //     printf("mx_memrchr return (null) | %s|\n", mx_memrchr(memrchr3, '6', 0));

    // mx_printstr("\n----------------MX_MEMMEM-------------------\n");
    //     unsigned char memmem_big1[10] = "Hello Neo";
    //     unsigned char memmem_little1[4] = "Neo";
    //     size_t big_len1 = 10;
    //     size_t little_len1 = 4;
    //     printf("memmem    return  |%s|\n", memmem(memmem_big1, big_len1, memmem_little1, little_len1));
    //     printf("mx_memmem return  |%s|\n", mx_memmem(memmem_big1, big_len1, memmem_little1, little_len1));
    //     unsigned char *memmem_big2 = NULL;
    //     unsigned char memmem_little2[4] = "Neo";
    //     size_t big_len2 = 0;
    //     size_t little_len2 = 4;
    //     printf("memmem    return  |%s|\n", memmem(memmem_big2, big_len2, memmem_little2, little_len2));
    //     printf("mx_memmem return  |%s|\n", mx_memmem(memmem_big2, big_len2, memmem_little2, little_len2));
    //     size_t big_len3 = 10;
    //     size_t little_len3 = 0;
    //     printf("memmem    return  |%s|\n", memmem(NULL, big_len3, NULL, little_len3));
    //     printf("mx_memmem return  |%s|\n", mx_memmem(NULL, big_len3, NULL, little_len3));
    //     unsigned char memmem_big4[10] = "Hello Neo";
    //     unsigned char memmem_little4[4] = "XAH";
    //     size_t big_len4 = 10;
    //     size_t little_len4 = 4;
    //     printf("memmem    return  |%s|\n", memmem(memmem_big4, big_len4, memmem_little4, little_len4));
    //     printf("mx_memmem return  |%s|\n", mx_memmem(memmem_big4, big_len4, memmem_little4, little_len4));

    // mx_printstr("\n----------------MX_MEMMOVE-------------------\n");
    //     char src1[] = "******************************";
    //     char dest1[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    //     memmove(dest1, src1, 26);
    //     printf("memmove    return |%s|\n",dest1);
    //     char src2[] = "******************************";
    //     char dest2[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    //     mx_memmove(dest2, src2, 26);
    //     printf("mx_memmove return |%s|\n",dest2);

    //     char src3[] = "******************************";
    //     char *dest3 = NULL;
    //     memmove(dest3, src3, 0);
    //     printf("memmove    return |%s|\n",dest3);
    //     char src4[] = "******************************";
    //     char *dest4 = NULL;
    //     mx_memmove(dest4, src4, 0);
    //     printf("mx_memmove return |%s|\n",dest4);

    //     char *src5 = NULL;
    //     char dest5[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    //     memmove(dest5, src5, 0);
    //     printf("memmove    return |%s|\n", dest5);
    //     char *src6 = NULL;
    //     char dest6[] = "abcdefghijklmnopqrstuvwxyz0123456789";
    //     mx_memmove(dest6, src6,0);
    //     printf("mx_memmove return |%s|\n", dest6);

    // mx_printstr("\n----------------MX_REALLOC-------------------\n");
    //     char *ptr1 = NULL;
    //     ptr1 = (char *) malloc(17);
    //     strcpy(ptr1, "This is 16 chars");
    //     printf("Ptr1 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr1, (long int)ptr1);
    //     ptr1 = realloc(ptr1, 10);
    //     printf("Ptr1 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr1, (long int)ptr1);
    //     char *ptr2 = NULL;
    //     ptr2 = (char *) malloc(17);
    //     strcpy(ptr2, "This is 16 chars");
    //     printf("Ptr2 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr2, (long int)ptr2);
    //     ptr2 = mx_realloc(ptr2, 10);
    //     printf("Ptr2 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr2, (long int)ptr2);
    //     char *ptr3 = NULL;
    //     ptr3 = (char *) malloc(10);
    //     strcpy(ptr3, "123456789");
    //     printf("Ptr3 result after use LIBC realloc:  |%s| \t\t\t    Pointer address|%lu|\n", ptr3, (long int)ptr3);
    //     ptr3 = realloc(ptr3, 34);
    //     mx_strcat(ptr3, "+Added 25 more characters");
    //     printf("Ptr3 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr3, (long int)ptr3);
    //     char *ptr4 = NULL;
    //     ptr4 = (char *) malloc(10);
    //     strcpy(ptr4, "123456789");
    //     printf("Ptr4 result after use MY mx_realloc: |%s| \t\t\t    Pointer address|%lu|\n", ptr4, (long int)ptr4);
    //     ptr4 = mx_realloc(ptr4, 34);
    //     mx_strcat(ptr4, "+Added 25 more characters");
    //     printf("Ptr4 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr4, (long int)ptr4);
    //     char *ptr5 = NULL;
    //     ptr5 = (char *) malloc(10);
    //     printf("Ptr5 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr5, (long int)ptr5);
    //     ptr5 = realloc(ptr5, 17);
    //     printf("Ptr5 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr5, (long int)ptr5);
    //     char *ptr6 = NULL;
    //     ptr6 = (char *) malloc(10);
    //     printf("Ptr6 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr6, (long int)ptr6);
    //     ptr6 = realloc(ptr6, 17);
    //     printf("Ptr6 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr6, (long int)ptr6);
    //     char *ptr7 = NULL;
    //     ptr7 = (char *) malloc(10);
    //     strcpy(ptr7, "XXXXXXXXX");
    //     printf("Ptr7 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr7, (long int)ptr7);
    //     ptr7 = realloc(ptr7, 0);
    //     printf("Ptr7 result after use LIBC realloc:  |%s|   \t   Pointer address|%lu|\n", ptr7, (long int)ptr7);
    //     char *ptr8 = NULL;
    //     ptr8 = (char *) malloc(10);
    //     strcpy(ptr8, "XXXXXXXXX");
    //     printf("Ptr8 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr8, (long int)ptr8);
    //     ptr8 = mx_realloc(ptr8, 0);
    //     printf("Ptr8 result after use MY mx_realloc: |%s|   \t   Pointer address|%lu|\n\n", ptr8, (long int)ptr8);
    //     char *ptr9 = NULL;
    //     ptr9 = (char *) malloc(10);
    //     strcpy(ptr9, "123456789");
    //     printf("Ptr9 result after use LIBC realloc:   |%s|  Pointer address|%lu|\n", ptr9, (long int)ptr9);
    //     ptr9 = realloc(ptr9, -1);
    //     printf("Ptr9 result after use LIBC realloc:   |%s|     Pointer address|%lu|\n", ptr9, (long int)ptr9);
    //     char *ptr10 = NULL;
    //     ptr10 = (char *) malloc(10);
    //     strcpy(ptr10, "123456789");
    //     printf("Ptr10 result after use MY mx_realloc: |%s|  Pointer address|%lu|\n", ptr10, (long int)ptr10);
    //     ptr10 = mx_realloc(ptr10, -1);
    //     printf("Ptr10 result after use MY mx_realloc: |%s|     Pointer address|%lu|\n\n", ptr10, (long int)ptr10);


    // mx_printstr(" *************************************\n *\t\tLIST PACK\t     *\n *************************************\n\n");
    // mx_printstr("\n----------------MX_CREATE_NODE-------------------\n");
    //     char *create_node_str = "HEAD";
    //     t_list *create_node = mx_create_node(create_node_str), *head = create_node;
    //     for (int i = 0; create_node; i++) {
    //         char *buf = (char *)create_node->data;
    //         mx_printstr("mx_create_node return \"HEAD\"? | "); mx_printstr(buf); mx_printstr("\n");
    //         create_node = create_node->next;
    //     }
    //     free(create_node), free(head);

    // mx_printstr("\n\n----------------MX_PUSH_FRONT-------------------\n");
    //     char *front_str = "HEAD", *front_str1 = "STR1", *front_str2 = "STR2", *front_str3 = "STR3";
    //     t_list *front_new_list = NULL;
    //     mx_push_front(&front_new_list, front_str3);
    //     mx_push_front(&front_new_list, front_str2);
    //     mx_push_front(&front_new_list, front_str1);
    //     mx_push_front(&front_new_list, front_str);
    //     t_list *front_head = front_new_list;
    //     mx_printstr("mx_push_front return \"HEAD\" \"STR1\" \"STR2\" \"STR3\"? | ");
    //     for (int i = 0; front_new_list; i++) {
    //         char *buf = (char *)front_new_list->data;
    //         mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
    //         front_new_list = front_new_list->next;
    //     }
    //     mx_printstr("\n");
    //     while (front_new_list)
    //         mx_pop_front(&front_new_list);
    //     while (front_head)
    //         mx_pop_front(&front_head);
    //     char *data1 = (char *) malloc(sizeof(char) * 5);
    // data1[0] = 'c';
    // data1[1] = 'o';
    // data1[2] = 'd';
    // data1[3] = '1';
    // data1[4] = '\0';
    // t_list *list = mx_create_node(data1);
    // char *data2 = (char *) malloc(sizeof(char) * 5);
    // data2[0] = 'c';
    // data2[1] = 'o';
    // data2[2] = 'd';
    // data2[3] = '2';
    // data2[4] = '\0';
    // mx_push_front(&list, data2);
    // for (t_list *head = list; head; head = head->next) {
    //     printf("%s ", (char *)head->data);
    // }

    // mx_printstr("\n\n----------------MX_PUSH_BACK-------------------\n");
    //     char *back_str = "HEAD", *back_str1 = "STR1", *back_str2 = "STR2", *back_str3 = "STR3";
    //     t_list *back_new_list = NULL;
    //     mx_push_back(&back_new_list, back_str);
    //     mx_push_back(&back_new_list, back_str1);
    //     mx_push_back(&back_new_list, back_str2);
    //     mx_push_back(&back_new_list, back_str3);
    //     t_list *back_head = back_new_list;
    //     mx_printstr("mx_push_back return \"HEAD\" \"STR1\" \"STR2\" \"STR3\"? | ");
    //     for (int i = 0; back_new_list; i++) {
    //         char *buf = (char *)back_new_list->data;
    //         mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
    //         back_new_list = back_new_list->next;
    //     }
    //     mx_printstr("\n");
    //     while (back_new_list)
    //         mx_pop_front(&back_new_list);
    //     while (back_head)
    //         mx_pop_front(&back_head);

    // mx_printstr("\n\n----------------MX_POP_FRONT-------------------\n");
    //     char *pop_front_str = "HEAD", *pop_front_str1 = "STR1", *pop_front_str2 = "STR2", *pop_front_str3 = "STR3";
    //     t_list *pop_front_new_list = NULL;
    //     mx_push_back(&pop_front_new_list, pop_front_str), mx_push_back(&pop_front_new_list, pop_front_str1), mx_push_back(&pop_front_new_list, pop_front_str2), mx_push_back(&pop_front_new_list, pop_front_str3);
    //     mx_printstr("list before pop_front is | ");
    //     for (int i = 0; pop_front_new_list; i++) {
    //         char *buf = (char *)pop_front_new_list->data;
    //         mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
    //         mx_pop_front(&pop_front_new_list);
    //     }
    //     mx_printstr("\n");
    //     mx_push_back(&pop_front_new_list, pop_front_str), mx_push_back(&pop_front_new_list, pop_front_str1), mx_push_back(&pop_front_new_list, pop_front_str2), mx_push_back(&pop_front_new_list, pop_front_str3);
    //     mx_printstr("list after pop_front is without \"HEAD\" | ");
    //     mx_pop_front(&pop_front_new_list);
    //     for (int i = 0; pop_front_new_list; i++) {
    //         char *buf = (char *)pop_front_new_list->data;
    //         mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
    //         mx_pop_front(&pop_front_new_list);
    //     }
    //     mx_printstr("\n");
    //     char *data1 = (char *) malloc(sizeof(char) * 5);
    //     data1[0] = 'c';
    //     data1[1] = 'o';
    //     data1[2] = 'd';
    //     data1[3] = '1';
    //     data1[4] = '\0';
    //     char *data2 = (char *) malloc(sizeof(char) * 5);
    //     data2[0] = 'c';
    //     data2[1] = 'o';
    //     data2[2] = 'd';
    //     data2[3] = '2';
    //     data2[4] = '\0';
    //     t_list *list = mx_create_node(data1);
    //     list->next = mx_create_node(data2);
    //     printf("before deleteion\n");
    //     for (t_list *head = list; head; head = head->next) {
    //         printf("%s ", (char *)head->data);
    //     }
    //     mx_pop_front(&list);
    //     printf("\nafter deleteion\n");
    //     for (t_list *head = list; head; head = head->next) {
    //         printf("%s ", (char *)head->data);
    //     }
    

    // mx_printstr("\n\n----------------MX_POP_BACK-------------------\n");
    //     char *pop_back_str = "HEAD", *pop_back_str1 = "STR1", *pop_back_str2 = "STR2", *pop_back_str3 = "STR3";
    //     t_list *pop_back_new_list = NULL;
    //     mx_push_back(&pop_back_new_list, pop_back_str), mx_push_back(&pop_back_new_list, pop_back_str1), mx_push_back(&pop_back_new_list, pop_back_str2), mx_push_back(&pop_back_new_list, pop_back_str3);
    //     mx_printstr("list before pop_front is | ");
    //     for (int i = 0; pop_back_new_list; i++) {
    //         char *buf = (char *)pop_back_new_list->data;
    //         mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
    //         mx_pop_front(&pop_back_new_list);
    //     }
    //     mx_printstr("\n");
    //     mx_push_back(&pop_back_new_list, pop_back_str), mx_push_back(&pop_back_new_list, pop_back_str1), mx_push_back(&pop_back_new_list, pop_back_str2), mx_push_back(&pop_back_new_list, pop_back_str3);
    //     mx_printstr("list after pop_front is without \"STR3\" | ");
    //     mx_pop_back(&pop_back_new_list);
    //     for (int i = 0; pop_back_new_list; i++) {
    //         char *buf = (char *)pop_back_new_list->data;
    //         mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
    //         mx_pop_front(&pop_back_new_list);
    //     }
    //     mx_printstr("\n");
    //      char *data1 = (char *) malloc(sizeof(char) * 5);
    //     data1[0] = 'c';
    //     data1[1] = 'o';
    //     data1[2] = 'd';
    //     data1[3] = '1';
    //     data1[4] = '\0';
    //     t_list *list = mx_create_node(data1);
    //     char *data2 = (char *) malloc(sizeof(char) * 5);
    //     data2[0] = 'c';
    //     data2[1] = 'o';
    //     data2[2] = 'd';
    //     data2[3] = '2';
    //     data2[4] = '\0';
    //     mx_push_back(&list, data2);
    //     for (t_list *head = list; head; head = head->next) {
    //         printf("%s ", (char *)head->data);
    //     }


    // mx_printstr("\n\n----------------MX_LIST_SIZE-------------------\n");
    //     char *list_size_str = "HEAD", *list_size_str1 = "STR1", *list_size_str2 = "STR2", *list_size_str3 = "STR3";
    //     t_list *size_new_list = NULL;
    //     mx_push_back(&size_new_list, list_size_str), mx_push_back(&size_new_list, list_size_str1), mx_push_back(&size_new_list, list_size_str2), mx_push_back(&size_new_list, list_size_str3);
    //     int list_size = mx_list_size(size_new_list);
    //     mx_printstr("list size is 4? | "); mx_printint(list_size); mx_printstr("\n");
    //     char *data1 = (char *) malloc(sizeof(char) * 5);
    //     data1[0] = 'c';
    //     data1[1] = 'o';
    //     data1[2] = 'd';
    //     data1[3] = '1';
    //     data1[4] = '\0';
    //     t_list *list = mx_create_node(data1);
    //     list->next = mx_create_node(data1);
    //     list->next->next = mx_create_node(data1);
    //     list->next->next->next = mx_create_node(data1);
    //     list->next->next->next->next = mx_create_node(data1);
    //     printf("size : %d\n", mx_list_size(list));

    // mx_printstr("\n\n----------------MX_SORT_LIST-------------------\n");
    //     t_list *sort_new_list = NULL;
    //     mx_push_front(&sort_new_list, (void *) 2);
    //     mx_push_front(&sort_new_list, (void *) 5);
    //     mx_push_front(&sort_new_list, (void *) 3);
    //     mx_push_front(&sort_new_list, (void *) 923);
    //     mx_push_front(&sort_new_list, (void *) 13);
    //     mx_push_front(&sort_new_list, (void *) 4);
    //     mx_push_front(&sort_new_list, (void *) 43);
    //     mx_push_front(&sort_new_list, (void *) 33);
    //     mx_push_front(&sort_new_list, (void *) 1);
    //     mx_printstr("mx_sort_list return 1 2 3 4 5 13 33 43 923? | ");
    //     // mx_sort_list(sort_new_list, cmp_sort_list);
    //     for (int i = 0; sort_new_list; i++) {
    //         int buf = (int)sort_new_list->data;
    //         mx_printint(buf); mx_printstr(" ");
    //         sort_new_list = sort_new_list->next;
    //     }
    //     mx_printstr("\n");

    // mx_printstr("\n\n----------------MX_ATOI-------------------\n");
    // mx_printint(mx_atoi("-2147483648")); mx_printstr("\n");
    // mx_printint(mx_atoi("-11")); mx_printstr("\n");
    // mx_printint(mx_atoi("-1")); mx_printstr("\n");
    // mx_printint(mx_atoi("0")); mx_printstr("\n");
    // mx_printint(mx_atoi("1")); mx_printstr("\n");
    // mx_printint(mx_atoi("11")); mx_printstr("\n");
    // mx_printint(mx_atoi("2147483647")); mx_printstr("\n");
    // mx_printint(mx_atoi("-9223372036854775809")); mx_printstr("\n");
    // mx_printint(atoi("-9223372036854775809")); mx_printstr("\n");
    // mx_printint(mx_atoi("9223372036854775806")); mx_printstr("\n");
    // mx_printint(atoi("9223372036854775806")); mx_printstr("\n");

    // system("leaks -q a.out");
}
