// undefined FUN_0804d2d4(void)
// entry 0x804d2d4


undefined4 FUN_0804d2d4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  iVar2 = *(int *)(param_1 + 0x2c);
  if (*(char *)(iVar1 + 8) == '\x03') {
    if (*(char *)(iVar1 + 9) == '[') {
      FUN_080b316c(iVar1,iVar2 + 0x54);
    }
    if (*(char *)(iVar1 + 9) == 'l') {
      FUN_080b9a44(iVar1,iVar2 + 0x54);
    }
  }
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    *(bool *)(iVar2 + 0xbc) = *(int *)(iVar2 + 0x54) < *(int *)(iVar1 + 0x54);
  }
  return in_lr;
}


