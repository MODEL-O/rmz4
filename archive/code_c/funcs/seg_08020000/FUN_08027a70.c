// undefined FUN_08027a70(void)
// entry 0x8027a70


undefined4 FUN_08027a70(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  uint uVar4;
  ushort *puVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  puVar2 = DAT_08027ae4;
  uVar4 = *(uint *)(param_1 + 0x144);
  if ((uVar4 & 8) != 0) {
    if ((uVar4 & 1) == 0) {
      iVar7 = (int)((uint)*(ushort *)(((uVar4 >> 0x10) + 0x40 & 0xff) * 2 + DAT_08027ae0) << 0x10)
              >> 0x12;
    }
    else {
      iVar7 = 0x100 - *(short *)(((uVar4 >> 0x10) + 0x40 & 0xff) * 2 + DAT_08027aa8) >> 2;
    }
    *DAT_08027ae4 = *DAT_08027ae4 | 0x2000;
    *(undefined1 *)(puVar2 + 6) = 0;
    puVar2[4] = 0xa0;
    if (iVar7 == 0) {
      puVar2[2] = 0xf0;
    }
    else {
      puVar2 = (ushort *)FUN_08000a70(0x140);
      iVar3 = DAT_08027b2c;
      if (puVar2 != (ushort *)0x0) {
        *(ushort **)(DAT_08027b2c + 0x1b4) = puVar2;
        *(undefined4 *)(iVar3 + 0x1b8) = DAT_08027b30;
        *(undefined4 *)(iVar3 + 0x1bc) = DAT_08027b34;
        iVar6 = 0;
        iVar3 = (0x50 - iVar7) * 3;
        puVar5 = puVar2;
        do {
          if (iVar6 < iVar7 + 0x32) {
            uVar1 = 0;
          }
          else if (iVar6 < iVar7 + 0x6e) {
            uVar4 = (iVar3 >> 1) + 0x78;
            uVar1 = (ushort)uVar4;
            if (0xf0 < (uVar4 & 0xffff)) {
              uVar1 = 0;
            }
          }
          else {
            uVar1 = 0xf0;
          }
          *puVar5 = uVar1;
          puVar5 = puVar5 + 1;
          iVar3 = iVar3 + -3;
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0xa0);
        iVar3 = 0;
        do {
          if (iVar3 < 0x32 - iVar7) {
            uVar1 = 0xf0;
LAB_08027b96:
            *puVar2 = uVar1;
          }
          else if (iVar3 < 0x6e - iVar7) {
            uVar4 = (((iVar7 + 0x50) - iVar3) * 3 >> 1) + 0x78U & 0xffff;
            if (0xf0 < uVar4) {
              uVar4 = 0xf0;
            }
            uVar1 = (ushort)((uVar4 << 0x10) >> 8) | *puVar2;
            goto LAB_08027b96;
          }
          puVar2 = puVar2 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0xa0);
      }
    }
  }
  return in_lr;
}


