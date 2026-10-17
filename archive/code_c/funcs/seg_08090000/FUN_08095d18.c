// undefined FUN_08095d18(void)
// entry 0x8095d18


undefined4 FUN_08095d18(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined4 in_lr;
  undefined1 auStack_40 [4];
  int local_3c [4];
  int local_2c;
  int local_28;
  byte *local_24;
  
  FUN_08129258(auStack_40,DAT_08095de8,4);
  puVar3 = DAT_08095df0;
  local_3c[0] = *DAT_08095dec;
  local_3c[1] = DAT_08095dec[1];
  local_3c[2] = DAT_08095dec[2];
  local_3c[3] = DAT_08095dec[3];
  bVar1 = *(byte *)(param_1 + 0x11);
  bVar2 = *(byte *)(param_1 + 10);
  local_24 = (byte *)(param_1 + 0xb5);
  iVar4 = *(byte *)(param_1 + 0xb5) - 1;
  if (iVar4 < 1) {
    iVar6 = local_3c[bVar1];
    uVar5 = DAT_08095df4 * *DAT_08095df0 + DAT_08095df8;
    uVar7 = uVar5 & 0x7fffffff;
    *DAT_08095df0 = uVar7;
    iVar4 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,iVar6 << 1);
    local_2c = *(int *)(param_1 + 0x54) + (iVar4 - iVar6);
    uVar5 = DAT_08095df4 * uVar7 + DAT_08095df8;
    *puVar3 = uVar5 & 0x7fffffff;
    iVar4 = FUN_08129198((uVar5 & 0x7fffffff) >> 0x10,iVar6 << 1);
    local_28 = *(int *)(param_1 + 0x58) + (iVar4 - iVar6);
    FUN_080e03d8(&local_2c,auStack_40[bVar1],bVar2 >> 4 & 1);
    uVar5 = DAT_08095df4 * *puVar3 + DAT_08095df8;
    *puVar3 = uVar5 & 0x7fffffff;
    iVar4 = ((uVar5 & 0x7fffffff) >> 0x10 & 3) + 3;
  }
  *local_24 = (byte)iVar4;
  return in_lr;
}


