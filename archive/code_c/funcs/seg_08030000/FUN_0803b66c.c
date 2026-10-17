// undefined FUN_0803b66c(void)
// entry 0x803b66c


undefined4 FUN_0803b66c(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  FUN_0801cc9c();
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x5100);
  FUN_08002b10(0x1a);
  *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0x54) - *(int *)(iVar5 + 0x54);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = DAT_0803b728;
    *(uint *)(param_1 + 0x60) = *(byte *)(param_1 + 10) & 0x10;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x600;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  uVar1 = DAT_0803b72c;
  FUN_08005760(param_1 + 0x74,DAT_0803b72c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar3 = FUN_0803a4a8(iVar5);
  uVar4 = iVar3 + 6U & 0xff;
  cVar2 = FUN_08038a78(iVar5);
  if (cVar2 != '\0') {
    uVar4 = (iVar3 + 6U & 0x7f) << 1;
  }
  FUN_08005794(param_1 + 0x74,uVar1,uVar4,0xffffffff,0xffffffff,0xffffffff);
  return in_lr;
}


