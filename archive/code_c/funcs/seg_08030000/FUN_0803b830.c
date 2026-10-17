// undefined FUN_0803b830(void)
// entry 0x803b830


undefined4 FUN_0803b830(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0xb4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x5800);
  FUN_08002b10(0x1a);
  uVar2 = DAT_0803b8e8;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar2 = 0x600;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar2;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  uVar2 = DAT_0803b8ec;
  FUN_08005760(param_1 + 0x74,DAT_0803b8ec,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar3 = FUN_0803a4a8(uVar5);
  uVar4 = iVar3 + 8U & 0xff;
  cVar1 = FUN_08038a78(uVar5);
  if (cVar1 != '\0') {
    uVar4 = (iVar3 + 8U & 0x7f) << 1;
  }
  FUN_08005794(param_1 + 0x74,uVar2,uVar4,0xffffffff,0xffffffff,0xffffffff);
  *(undefined1 *)(param_1 + 0x12) = 0xb;
  *(undefined1 *)(param_1 + 0xc2) = 4;
  return in_lr;
}


