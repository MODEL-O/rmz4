// undefined FUN_08065a94(void)
// entry 0x8065a94


undefined4 FUN_08065a94(int param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar1 = DAT_08065ab8;
  uVar5 = (uint)param_2;
  uVar4 = *(uint *)(uVar5 * 4 + DAT_08065ab8);
  if ((uVar5 == 8) || (uVar5 == 0x19)) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  pbVar3 = (byte *)(param_1 + 0xb4);
  if (*pbVar3 == 0xff) {
    FUN_0801cf00(param_1,uVar4 & 0xffff);
  }
  else if ((uVar4 != DAT_08065af0) || (uVar4 != *(uint *)((uint)*pbVar3 * 4 + iVar1))) {
    FUN_0801cf00(param_1,uVar4 & 0xffff);
  }
  *pbVar3 = param_2;
  return in_lr;
}


