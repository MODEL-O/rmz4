// undefined FUN_0811d8f4(void)
// entry 0x811d8f4


undefined8 FUN_0811d8f4(uint param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 in_lr;
  byte local_20 [4];
  
  piVar3 = DAT_0811d95c;
  iVar5 = DAT_0811d958;
  local_20[3] = 0xff;
  local_20[2] = 0xff;
  local_20[1] = 0xff;
  local_20[0] = 0xff;
  uVar9 = 1;
  uVar8 = 0;
  do {
    bVar1 = *(byte *)(uVar8 + (param_1 & 0xff) * 4 + iVar5);
    if (bVar1 != 0xff) {
      pbVar7 = (byte *)(*piVar3 + (uint)(bVar1 >> 1));
      bVar2 = *pbVar7;
      iVar6 = (bVar1 & 1) << 2;
      uVar4 = (int)(uint)bVar2 >> iVar6 & 0xf;
      if (uVar4 == 0) {
        uVar9 = 0;
        break;
      }
      *pbVar7 = (byte)(uVar4 - 1 << iVar6) | bVar2 & ~(byte)(0xf << iVar6);
      local_20[uVar8] = bVar1;
    }
    uVar8 = uVar8 + 1 & 0xff;
  } while (uVar8 < 4);
  uVar8 = 0;
  do {
    bVar1 = local_20[uVar8];
    if (bVar1 != 0xff) {
      pbVar7 = (byte *)(*DAT_0811d9c8 + (uint)(bVar1 >> 1));
      bVar2 = *pbVar7;
      iVar5 = (bVar1 & 1) << 2;
      *pbVar7 = (byte)(((int)(uint)bVar2 >> iVar5 & 0xfU) + 1 << iVar5) |
                bVar2 & ~(byte)(0xf << iVar5);
    }
    uVar8 = uVar8 + 1 & 0xff;
  } while (uVar8 < 4);
  return CONCAT44(in_lr,uVar9);
}


