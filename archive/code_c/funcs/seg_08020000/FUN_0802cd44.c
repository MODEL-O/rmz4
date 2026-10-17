// undefined FUN_0802cd44(void)
// entry 0x802cd44


undefined4 FUN_0802cd44(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x54);
  iVar6 = DAT_0802cdf0 + *(int *)(param_1 + 0x58);
  pbVar5 = (byte *)(param_1 + 0x1b8);
  *pbVar5 = 0;
  iVar2 = DAT_0802cdf4;
  uVar8 = 0;
  bVar1 = *(byte *)(DAT_0802cdf4 + 0x1d2);
  if (bVar1 != 0) {
    do {
      iVar7 = uVar8 * 0x18;
      iVar4 = *(ushort *)(iVar7 + iVar2 + 0x1d8) + 0x1f00;
      if (((uint)((iVar3 - *(int *)(iVar7 + DAT_0802cdf8)) + iVar4) < (uint)(iVar4 * 2)) &&
         (iVar4 = *(ushort *)(iVar7 + iVar2 + 0x1da) + 0x1f00,
         (uint)((iVar6 - *(int *)(iVar7 + DAT_0802cdfc)) + iVar4) < (uint)(iVar4 * 2))) {
        *(char *)(param_1 + 0x188 + (uint)*pbVar5) = (char)uVar8;
        *pbVar5 = *pbVar5 + 1;
      }
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < bVar1);
  }
  return in_lr;
}


