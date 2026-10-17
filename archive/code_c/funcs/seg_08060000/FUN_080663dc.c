// undefined FUN_080663dc(void)
// entry 0x80663dc


undefined4 FUN_080663dc(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xc0) = param_2;
  *(int *)(param_2 + 0xbc) = param_1;
  *(int *)(param_2 + 0xc0) = iVar1;
  if (iVar1 != 0) {
    *(int *)(iVar1 + 0xbc) = param_2;
  }
  *(char *)(param_1 + 0xb7) = *(char *)(param_1 + 0xb7) + '\x01';
  return in_lr;
}


