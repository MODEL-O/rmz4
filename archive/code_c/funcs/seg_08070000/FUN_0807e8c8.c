// undefined FUN_0807e8c8(void)
// entry 0x807e8c8


undefined4 FUN_0807e8c8(int param_1,byte param_2)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined4 in_lr;
  
  iVar1 = DAT_0807e8ec;
  uVar5 = (uint)param_2;
  uVar4 = *(uint *)(uVar5 * 4 + DAT_0807e8ec);
  if ((uVar5 == 0) || (uVar5 == 0x14)) {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar2;
  pbVar3 = (byte *)(param_1 + 0xbc);
  if (*pbVar3 == 0xff) {
    FUN_0801cf00(param_1,uVar4 & 0xffff);
  }
  else if (((uVar4 != DAT_0807e928) && (uVar4 != DAT_0807e928 + 0x12)) ||
          (uVar4 != *(uint *)((uint)*pbVar3 * 4 + iVar1))) {
    FUN_0801cf00(param_1,uVar4 & 0xffff);
  }
  *pbVar3 = param_2;
  return in_lr;
}


