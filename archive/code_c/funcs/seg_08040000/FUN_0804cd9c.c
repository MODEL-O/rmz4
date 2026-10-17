// undefined FUN_0804cd9c(void)
// entry 0x804cd9c


undefined4 FUN_0804cd9c(int param_1)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_0804ce04;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804ce04);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (sVar2 == 0) {
    FUN_0801cc9c(param_1);
    FUN_0801ceec(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
    FUN_0801cf00(param_1,DAT_0804ce64);
    FUN_0801cff0(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_0804ce68,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_0804ce6c;
    uVar4 = DAT_0804cea0;
    if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
      uVar4 = 0x3c0;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar4;
    *(undefined4 *)(param_1 + 0x60) = DAT_0804cea4;
    *(undefined4 *)(param_1 + 0x68) = 0x40;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x12) = 0xc4;
    FUN_0804cea8(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_0804ce08,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    FUN_080d0c88(2,param_1 + 0x54);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) =
         *(undefined4 *)(*(int *)((uint)*(byte *)(param_1 + 9) * 4 + iVar1) + 8);
  }
  return in_lr;
}


