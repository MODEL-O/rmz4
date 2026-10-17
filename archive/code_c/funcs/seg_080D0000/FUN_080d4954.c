// undefined FUN_080d4954(void)
// entry 0x80d4954


undefined4 FUN_080d4954(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  ushort *puVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 in_lr;
  
  puVar4 = DAT_080d4a10;
  iVar3 = DAT_080d4a0c;
  iVar10 = *(int *)(param_1 + 8);
  if (*(byte *)(iVar10 + 0xc) < 2) {
    if (*(char *)(iVar10 + 0xf) == '\0') {
      *DAT_080d4a10 = *DAT_080d4a10 | 0x100;
      FUN_08001d30(DAT_080d4a14,(puVar4[2] & 0xc) << 0xc);
      FUN_08002208(DAT_080d4a18,0);
      *(char *)(iVar10 + 0xf) = *(char *)(iVar10 + 0xf) + '\x01';
    }
    if (*(char *)(iVar10 + 0xd) == '\0') {
      uVar5 = FUN_08129120(*(undefined1 *)(iVar10 + 0x12),3);
      uVar5 = uVar5 & 0xff;
      if (9 < uVar5) {
        uVar5 = 9;
      }
      pbVar6 = *(byte **)(uVar5 * 4 + DAT_080d4a1c);
      bVar1 = *pbVar6;
      bVar2 = pbVar6[1];
      uVar5 = 0;
      if (bVar2 != 0) {
        do {
          iVar10 = (int)(short)uVar5;
          iVar8 = ((uint)bVar1 + iVar10) * 2 + iVar3;
          *(ushort *)(iVar8 + 0x240) = pbVar6[iVar10 + 2] | 0x1200;
          iVar9 = (int)(short)(ushort)bVar2;
          *(ushort *)(iVar8 + 0x280) = pbVar6[iVar10 + iVar9 + 2] | 0x1200;
          uVar5 = iVar10 + 1U & 0xffff;
        } while ((int)((iVar10 + 1U) * 0x10000) >> 0x10 < iVar9);
      }
    }
    else if (*(char *)(iVar10 + 0xd) == '\x01') {
      bVar1 = *(byte *)(iVar10 + 0x12);
      if (bVar1 < 10) {
        uVar5 = (uint)(bVar1 >> 1);
        if (5 < uVar5) {
          uVar5 = 5;
        }
        pbVar6 = *(byte **)(uVar5 * 4 + DAT_080d4a90);
        bVar1 = *pbVar6;
        bVar2 = pbVar6[1];
        uVar5 = 0;
        if (bVar2 != 0) {
          do {
            iVar10 = (int)(short)uVar5;
            iVar8 = ((uint)bVar1 + iVar10) * 2 + iVar3;
            *(ushort *)(iVar8 + 0x240) = pbVar6[iVar10 + 2] | 0x1200;
            iVar9 = (int)(short)(ushort)bVar2;
            *(ushort *)(iVar8 + 0x280) = pbVar6[iVar10 + iVar9 + 2] | 0x1200;
            uVar5 = iVar10 + 1U & 0xffff;
          } while ((int)((iVar10 + 1U) * 0x10000) >> 0x10 < iVar9);
        }
      }
      else {
        uVar5 = (uint)(bVar1 >> 1);
        if (10 < uVar5) {
          uVar5 = 10;
        }
        uVar7 = 0;
        iVar10 = *(int *)((uVar5 - 4) * 4 + DAT_080d4adc);
        do {
          iVar8 = (int)(short)uVar7;
          *(ushort *)(iVar8 * 2 + iVar3 + 0x240) = *(byte *)(iVar10 + iVar8) | 0x1200;
          uVar7 = iVar8 + 1U & 0xffff;
        } while ((int)((iVar8 + 1U) * 0x10000) >> 0x10 < 0x20);
      }
    }
  }
  return in_lr;
}


