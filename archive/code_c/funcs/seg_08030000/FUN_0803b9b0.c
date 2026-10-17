// undefined FUN_0803b9b0(void)
// entry 0x803b9b0


undefined4 FUN_0803b9b0(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_lr;
  
  uVar5 = *(undefined4 *)(param_1 + 0xb4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x5c00);
  FUN_08002b10(0x1a);
  *(undefined1 *)(param_1 + 0x25) = 0xf;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  uVar1 = DAT_0803ba60;
  FUN_08005760(param_1 + 0x74,DAT_0803ba60,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  iVar3 = FUN_0803a4a8(uVar5);
  uVar4 = iVar3 + 10U & 0xff;
  cVar2 = FUN_08038a78(uVar5);
  if (cVar2 != '\0') {
    uVar4 = (iVar3 + 10U & 0x7f) << 1;
  }
  FUN_08005794(param_1 + 0x74,uVar1,uVar4,0xffffffff,0xffffffff,0xffffffff);
  *(undefined1 *)(param_1 + 0xc2) = 4;
  return in_lr;
}


