// undefined FUN_0805c270(void)
// entry 0x805c270


undefined4 FUN_0805c270(int param_1)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 in_lr;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  int local_24;
  undefined4 local_20;
  
  FUN_08129258(auStack_2c,DAT_0805c314,3);
  FUN_08129258(auStack_28,DAT_0805c318,3);
  bVar1 = *(byte *)(param_1 + 10);
  iVar4 = *(byte *)(param_1 + 0xce) - 1;
  if (iVar4 < 1) {
    iVar5 = FUN_0805c328(auStack_28,3);
    iVar3 = DAT_0805c324;
    iVar4 = DAT_0805c320;
    puVar2 = DAT_0805c31c;
    uVar6 = *DAT_0805c31c * DAT_0805c320 + DAT_0805c324;
    *DAT_0805c31c = uVar6 & 0x7fffffff;
    local_24 = *(int *)(param_1 + 0x54) + (((uVar6 & 0x7fffffff) >> 0x10 & 0x1f) - 0xf) * 0x100;
    local_20 = *(undefined4 *)(param_1 + 0x58);
    FUN_080e03d8(&local_24,auStack_2c[iVar5],bVar1 >> 4 & 1);
    uVar6 = *puVar2 * iVar4 + iVar3;
    *puVar2 = uVar6 & 0x7fffffff;
    iVar4 = ((uVar6 & 0x7fffffff) >> 0x10 & 7) + 8;
  }
  *(byte *)(param_1 + 0xce) = (byte)iVar4;
  return in_lr;
}


