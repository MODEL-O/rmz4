// undefined FUN_0811d818(void)
// entry 0x811d818


undefined8 FUN_0811d818(uint param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  undefined4 in_lr;
  
  iVar4 = DAT_0811d8a0;
  piVar3 = DAT_0811d89c;
  uVar8 = param_1 & 0xff;
  uVar7 = 0;
  do {
    bVar1 = *(byte *)(uVar7 + uVar8 * 4 + iVar4);
    if (bVar1 != 0xff) {
      pbVar6 = (byte *)(*DAT_0811d8a4 + (uint)(bVar1 >> 1));
      bVar2 = *pbVar6;
      iVar5 = (bVar1 & 1) << 2;
      *pbVar6 = (byte)(((int)(uint)bVar2 >> iVar5 & 0xfU) - 1 << iVar5) |
                bVar2 & ~(byte)(0xf << iVar5);
    }
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 4);
  pbVar6 = (byte *)(*piVar3 + (uVar8 >> 2));
  bVar1 = *pbVar6;
  param_1 = param_1 & 3;
  if (((int)(bVar1 & 0xf) >> param_1 & 1U) == 0) {
    *pbVar6 = (byte)(1 << param_1) | bVar1;
  }
  if (uVar8 == 0x1b) {
    FUN_08108ed4(4);
  }
  else {
    pbVar6 = (byte *)(*piVar3 + (uVar8 >> 2));
    *pbVar6 = (byte)(0x10 << param_1) | *pbVar6;
  }
  return CONCAT44(in_lr,1);
}


