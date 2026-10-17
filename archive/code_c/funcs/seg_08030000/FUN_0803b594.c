// undefined FUN_0803b594(void)
// entry 0x803b594


undefined4 FUN_0803b594(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  uVar6 = *(undefined4 *)(param_1 + 0xb4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x5000);
  FUN_08002b10(0x16);
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x5c) = DAT_0803b660;
    *(uint *)(param_1 + 0x60) = *(byte *)(param_1 + 10) & 0x10;
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0x4c0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  uVar1 = DAT_0803b664;
  FUN_08005760(param_1 + 0x74,DAT_0803b664,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar4 = 2;
  if ((*(uint *)(*(int *)(param_1 + 0xb4) + 0xc) & DAT_0803b668) == 0x20000) {
    iVar4 = 3;
  }
  iVar3 = FUN_0803a4a8(uVar6);
  uVar5 = iVar4 + iVar3 & 0xff;
  cVar2 = FUN_08038a78(uVar6);
  if (cVar2 != '\0') {
    uVar5 = (iVar4 + iVar3 & 0x7fU) << 1;
  }
  FUN_08005794(param_1 + 0x74,uVar1,uVar5,0xffffffff,0xffffffff,0xffffffff);
  return in_lr;
}


