int FUN_08008eb8(int param_1,int param_2)
{
  int t = param_2 + 0xfffff800;
  int iVar1 = t + (param_1 >> 1);
  if (iVar1 < 1) {
    iVar1 = 0;
  } else {
    iVar1 = -iVar1;
  }
  return iVar1;
}
