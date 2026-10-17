// undefined FUN_0802795c(void)
// entry 0x802795c


undefined4 FUN_0802795c(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 in_lr;
  
  iVar6 = DAT_08027a68;
  iVar5 = DAT_08027a64;
  iVar4 = DAT_08027a20;
  iVar3 = DAT_08027a1c;
  iVar9 = DAT_080279cc;
  puVar11 = (uint *)(param_1 + 0x144);
  uVar10 = *puVar11;
  uVar7 = uVar10 >> 0x10;
  if (uVar10 != 0) {
    if ((uVar10 & 8) == 0) {
      if ((uVar10 & 1) == 0) {
        uVar7 = 0x40 - uVar7;
      }
      if ((uVar10 & 4) == 0) {
        uVar2 = (undefined1)(uVar7 >> 1);
        *(undefined1 *)(DAT_08027a64 + DAT_08027a68) = uVar2;
        *(undefined1 *)(iVar5 + iVar6 + -1) = uVar2;
        *(undefined1 *)(iVar5 + 0x400) = uVar2;
        iVar9 = 0x20000;
      }
      else {
        cVar1 = '@' - (char)(uVar7 >> 1);
        *(char *)(DAT_08027a1c + DAT_08027a20) = cVar1;
        *(char *)(iVar3 + iVar4 + -1) = cVar1;
        *(char *)(iVar3 + 0x400) = cVar1;
        iVar9 = 0x10000;
      }
      *puVar11 = uVar10 + iVar9;
      if (DAT_08027a6c < *(uint *)(param_1 + 0x144)) {
        *(uint *)(param_1 + 0x144) = 0;
      }
    }
    else {
      puVar8 = (undefined1 *)(DAT_080279d0 + DAT_080279cc);
      *puVar8 = 0x20;
      puVar13 = (undefined1 *)(iVar9 + DAT_080279d4);
      *puVar13 = 0x20;
      puVar12 = (undefined1 *)(iVar9 + 0x400);
      *puVar12 = 0x20;
      uVar10 = uVar10 + 0x30000;
      *puVar11 = uVar10;
      if (0x400000 < uVar10) {
        if ((uVar10 & 1) == 0) {
          FUN_08002b10(0xb3);
          *puVar8 = 0;
          *puVar13 = 0;
          *puVar12 = 0;
        }
        *puVar11 = 0;
        *DAT_080279d8 = (ushort)DAT_080279dc & *DAT_080279d8;
      }
    }
  }
  return in_lr;
}


