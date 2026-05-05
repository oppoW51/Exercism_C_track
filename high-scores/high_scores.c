#include "high_scores.h"


int32_t latest(const int32_t *scores, size_t scores_len){
    return scores[scores_len - 1];
}

int32_t personal_best(const int32_t *scores, size_t scores_len){
    int32_t max = scores[0];
    for (size_t i = 1; i < scores_len; i++){
        if (scores[i] > max)
            max = scores[i];
    }
    return max;
}
size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output){
    int32_t max_1 = -1;
    int32_t max_2 = -1;
    int32_t max_3 = -1;
    for (size_t i = 0; i < scores_len; i++){
        if (scores[i] <= max_3)
            continue;
        if (scores[i] <= max_2){
            max_3 = scores[i];
            continue;
        }
        if (scores[i] <= max_1){
            max_3 = max_2;
            max_2 = scores[i];
            continue;
        }
        max_3 = max_2;
        max_2 = max_1;
        max_1 = scores[i];
    }
    size_t len = (scores_len > 3) ? 3 : scores_len;
    output[0] = max_1;
    output[1] = max_2;
    output[2] = max_3;

    return len;
}
