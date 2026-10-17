// undefined FUN_0803ba64(void)
// entry 0x803ba64


undefined4 FUN_0803ba64(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0xb4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x7000);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  uVar1 = DAT_0803bb0c;
  FUN_08005760(param_1 + 0x74,DAT_0803bb0c,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  iVar3 = FUN_0803a4a8(iVar5);
  uVar4 = iVar3 + 2U & 0xff;
  cVar2 = FUN_08038a78(iVar5);
  if (cVar2 != '\0') {
    uVar4 = (iVar3 + 2U & 0x7f) << 1;
  }
  FUN_08005794(param_1 + 0x74,uVar1,uVar4,0xffffffff,0xffffffff,0xffffffff);
  *(undefined1 *)(iVar5 + 0x164) = 1;
  *(undefined1 *)(param_1 + 0xc2) = 4;
  return in_lr;
}


