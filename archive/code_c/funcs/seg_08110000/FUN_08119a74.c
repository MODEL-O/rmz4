// undefined FUN_08119a74(void)
// entry 0x8119a74


undefined4 FUN_08119a74(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  short *psVar7;
  uint uVar8;
  short *psVar9;
  undefined4 in_lr;
  
  uVar3 = DAT_08119b9c;
  uVar2 = DAT_08119b30;
  uVar1 = DAT_08119adc;
  param_1 = param_1 + DAT_08119ad8;
  uVar4 = (uint)*(byte *)(*DAT_08119ad4 + 4);
  uVar5 = (uint)*(byte *)(*DAT_08119ad4 + 2);
  if (uVar4 == 0) {
    if (uVar5 == 0) {
      uVar4 = 0;
      do {
        iVar6 = uVar4 * 2 + param_1;
        *(ushort *)(iVar6 + 0x11e) = (short)uVar4 + 0x378U | (ushort)uVar1;
        *(ushort *)(iVar6 + 0x162) = (short)uVar4 + 0x3f8U | (ushort)uVar1;
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 8);
    }
    else {
      uVar4 = 0;
      psVar9 = (short *)(uVar5 * 2 + DAT_08119b2c);
      do {
        iVar6 = uVar4 * 2 + param_1;
        *(ushort *)(iVar6 + 0x11e) = *psVar9 + 0x300 + (short)uVar4 | (ushort)uVar2;
        *(ushort *)(iVar6 + 0x162) = (short)uVar4 + 0x3f8U | (ushort)uVar2;
        uVar4 = uVar4 + 1 & 0xff;
      } while (uVar4 < 8);
    }
  }
  else {
    uVar8 = 0;
    psVar9 = (short *)(uVar4 * 2 + DAT_08119b98);
    psVar7 = (short *)(uVar5 * 2 + DAT_08119ba0);
    do {
      iVar6 = uVar8 * 2 + param_1;
      *(ushort *)(iVar6 + 0x11e) = *psVar9 + 0x300 + (short)uVar8 | (ushort)uVar3;
      *(ushort *)(iVar6 + 0x162) = *psVar7 + 0x300 + (short)uVar8 | (ushort)uVar3;
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < 8);
  }
  return in_lr;
}


