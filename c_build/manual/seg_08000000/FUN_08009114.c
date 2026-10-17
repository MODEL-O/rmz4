// CONCAT44(in_lr,EXPR) 误读 64 位; 实为 int 返回 EXPR, r1=lr 残留 -> pop{r1};bx r1
int FUN_08009114(int param_1,int param_2)
{
  if (param_2 < (0x400 - (param_1 >> 2)))
    return ~param_2;
  return 0;
}
