// undefined FUN_0802a7a4(void)
// entry 0x802a7a4


undefined4 FUN_0802a7a4(int param_1)

{
  undefined4 uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int iVar6;
  undefined4 uVar7;
  short sVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort *puVar12;
  undefined4 in_lr;
  
  iVar9 = FUN_08000a70(0x10);
  uVar7 = DAT_0802a88c;
  iVar6 = DAT_0802a888;
  puVar5 = DAT_0802a884;
  uVar4 = DAT_0802a82c;
  iVar3 = DAT_0802a828;
  puVar2 = DAT_0802a824;
  uVar1 = DAT_0802a7ec;
  puVar12 = DAT_0802a7e8;
  if (iVar9 != 0) {
    if (*(char *)(param_1 + 0x18) == '\0') {
      if (*(char *)(param_1 + 0x19) == '\0') {
        uVar11 = 0;
        do {
          sVar8 = (short)uVar11;
          *(short *)(sVar8 * 2 + iVar9) = sVar8 + (short)uVar1;
          uVar10 = (int)sVar8 + 1;
          uVar11 = uVar10 & 0xffff;
        } while ((int)(uVar10 * 0x10000) >> 0x10 < 8);
      }
      else {
        uVar11 = 0;
        do {
          sVar8 = (short)uVar11;
          *(short *)(sVar8 * 2 + iVar9) =
               (short)uVar4 + sVar8 + *(short *)((uint)*(byte *)(param_1 + 0x19) * 2 + iVar3);
          uVar10 = (int)sVar8 + 1;
          uVar11 = uVar10 & 0xffff;
          puVar12 = puVar2;
        } while ((int)(uVar10 * 0x10000) >> 0x10 < 8);
      }
    }
    else {
      uVar11 = 0;
      do {
        sVar8 = (short)uVar11;
        *(short *)(sVar8 * 2 + iVar9) =
             (short)uVar7 + sVar8 + *(short *)((uint)*(byte *)(param_1 + 0x18) * 2 + iVar6);
        uVar10 = (int)sVar8 + 1;
        uVar11 = uVar10 & 0xffff;
        puVar12 = puVar5;
      } while ((int)(uVar10 * 0x10000) >> 0x10 < 8);
    }
    FUN_08001f1c(iVar9,(*puVar12 & 0x1f00) * 8 + DAT_0802a890,0x10);
  }
  return in_lr;
}


