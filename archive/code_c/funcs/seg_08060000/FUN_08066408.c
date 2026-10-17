// undefined FUN_08066408(void)
// entry 0x8066408


undefined4 FUN_08066408(int param_1,int param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_2 + 0xc0);
  if (param_2 == *(int *)(param_1 + 0xc0)) {
    *(int *)(param_1 + 0xc0) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xbc) = param_2;
    }
  }
  else {
    *(int *)(*(int *)(param_2 + 0xbc) + 0xc0) = iVar1;
    if (iVar1 != 0) {
      *(int *)(iVar1 + 0xbc) = *(int *)(param_2 + 0xbc);
    }
  }
  *(char *)(param_1 + 0xb7) = *(char *)(param_1 + 0xb7) + -1;
  return in_lr;
}


