//
// Created by mac on 2018/4/9.
//

#include "sumoftwointeger.h"
int getSum(int a, int b) {
    int result = a ^ b; // 按位加
    int carry = (a & b) << 1; // 计算进位
    if(carry!=0) return  getSum(result,carry); //判断进位与处理
    return result;
}