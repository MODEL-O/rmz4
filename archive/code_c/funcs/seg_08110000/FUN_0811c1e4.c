// undefined FUN_0811c1e4(void)
// entry 0x811c1e4


undefined4 FUN_0811c1e4(int param_1)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + DAT_0811c210);
  iVar7 = param_1 + DAT_0811c214;
  uVar6 = (uint)*(byte *)(iVar5 + 0xf4);
  if (*(char *)(iVar5 + 0xc5) == '\x12') {
    uVar6 = uVar6 + 1;
  }
  sVar3 = FUN_08128fb8(uVar6,10);
  uVar1 = (ushort)DAT_0811c258;
  *(ushort *)(iVar7 + 0xf4) = sVar3 + (short)DAT_0811c254 | uVar1;
  *(ushort *)(iVar7 + 0x134) = sVar3 + (short)DAT_0811c25c | uVar1;
  uVar6 = (uint)*(byte *)(iVar5 + 0xf4);
  if (*(char *)(iVar5 + 0xc5) == '\x12') {
    uVar6 = uVar6 + 1;
  }
  sVar4 = FUN_08129050(uVar6,10);
  sVar3 = (short)DAT_0811c318;
  uVar1 = (ushort)DAT_0811c31c;
  *(ushort *)(iVar7 + 0xf6) = sVar4 + sVar3 | uVar1;
  sVar2 = (short)DAT_0811c320;
  *(ushort *)(iVar7 + 0x136) = sVar4 + sVar2 | uVar1;
  sVar4 = FUN_08128fb8((uint)*(byte *)(iVar5 + 0xf1) + (uint)*(byte *)(iVar5 + 0xf2) +
                       (uint)*(byte *)(iVar5 + 0xf3),10);
  *(ushort *)(param_1 + DAT_0811c324) = sVar4 + sVar3 | uVar1;
  *(ushort *)(param_1 + DAT_0811c328) = sVar4 + sVar2 | uVar1;
  sVar4 = FUN_08129050((uint)*(byte *)(iVar5 + 0xf1) + (uint)*(byte *)(iVar5 + 0xf2) +
                       (uint)*(byte *)(iVar5 + 0xf3),10);
  *(ushort *)(param_1 + DAT_0811c32c) = sVar4 + sVar3 | uVar1;
  *(ushort *)(param_1 + DAT_0811c330) = sVar4 + sVar2 | uVar1;
  FUN_08001f1c(param_1 + DAT_0811c334,(*DAT_0811c338 & 0x1f00) << 3,0x1000);
  return in_lr;
}


