// undefined FUN_080ccf9c(void)
// entry 0x80ccf9c


undefined4 FUN_080ccf9c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  FUN_08005760(param_1 + 0x74,DAT_080cd024,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_0801cf00(param_1,DAT_080cd028);
  *(undefined4 *)(param_1 + 0x5c) = 0x180;
  *(undefined4 *)(param_1 + 0x60) = 0x100;
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_080ccf4c(param_1 + 0x54,1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = 0xa00;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0xfffffe80;
    iVar1 = *(int *)(param_1 + 0x54);
    iVar3 = DAT_080cd074;
  }
  *(int *)(param_1 + 0x54) = iVar1 + iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + DAT_080cd078;
  FUN_080d0c88(3,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cd07c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080cd080(param_1);
  return in_lr;
}


