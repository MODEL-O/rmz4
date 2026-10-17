// undefined FUN_08042234(void)
// entry 0x8042234


undefined4 FUN_08042234(int param_1)

{
  char cVar1;
  byte bVar2;
  short sVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  short *psVar10;
  int iVar11;
  undefined4 in_lr;
  int local_20;
  int local_1c;
  
  iVar11 = *(int *)(param_1 + 0x28);
  if (*(char *)(iVar11 + 0x150) == -1) {
    *(byte *)(iVar11 + DAT_08042290) = *(byte *)(iVar11 + DAT_08042290) | 0x40;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08042294);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar5 = *(undefined4 *)(*piVar4 + 0xc);
    goto LAB_0804244a;
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0xe) == '\0') && ((*(uint *)(param_1 + 0x8c) & 4) != 0)) {
    cVar1 = FUN_0803aabc(iVar11);
    if (cVar1 == '\0') {
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_080422de;
    }
    FUN_080d0c88(1,param_1 + 0x54);
    FUN_08002b10(0x2a);
    iVar9 = DAT_080422d4;
  }
  else {
LAB_080422de:
    bVar2 = *(byte *)(iVar11 + 10) >> 4;
    bVar7 = bVar2 & 1;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar7;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar7 << 4;
    uVar8 = (uint)(*(char *)(iVar11 + 0x71) == '\x03');
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar6 = *(int *)(iVar11 + 0x54) +
              *(int *)(uVar8 * 8 + (uint)*(byte *)(iVar11 + 0x150) * 0x10 + DAT_080423e4);
      iVar9 = DAT_080423e4;
    }
    else {
      iVar6 = *(int *)(iVar11 + 0x54) -
              *(int *)(uVar8 * 8 + (uint)*(byte *)(iVar11 + 0x150) * 0x10 + DAT_0804234c);
      iVar9 = DAT_0804234c;
    }
    *(int *)(param_1 + 0x54) = iVar6;
    *(int *)(param_1 + 0x58) =
         *(int *)(iVar11 + 0x58) +
         *(int *)(uVar8 * 8 + (uint)*(byte *)(iVar11 + 0x150) * 0x10 + iVar9 + 4);
    bVar2 = *(byte *)((uint)*(byte *)(iVar11 + 0x150) + DAT_080423e8);
    *(byte *)(param_1 + 0x24) = bVar2;
    if (*(char *)(param_1 + 0xd) == '\0') {
      iVar9 = -0xe;
      psVar10 = (short *)((bVar2 + 0x40 & 0xff) * 2 + DAT_080423ec);
      do {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          local_20 = *(int *)(param_1 + 0x54) - iVar9 * *psVar10;
        }
        else {
          local_20 = *(int *)(param_1 + 0x54) + iVar9 * *psVar10;
        }
        local_1c = *(int *)(param_1 + 0x58) - iVar9 * *(short *)(DAT_08042458 + (uint)bVar2 * 2);
        sVar3 = FUN_080427fc(local_20);
        if (sVar3 != 0) {
          FUN_08041edc(iVar11,param_1,&local_20,0);
          FUN_08041edc(iVar11,param_1,&local_20,1);
          FUN_08002b10(0x3c);
          *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
          break;
        }
        iVar9 = iVar9 + 4;
      } while (iVar9 < 0x13);
    }
    bVar2 = *(byte *)(param_1 + 0x12);
    *(byte *)(param_1 + 0x12) = bVar2 + 1;
    iVar9 = DAT_0804245c;
    if (bVar2 < 0x11) {
      return in_lr;
    }
  }
  *(byte *)(iVar11 + iVar9) = *(byte *)(iVar11 + iVar9) | 0x40;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08042460);
  *(undefined4 *)(param_1 + 0xc) = 2;
  uVar5 = *(undefined4 *)(*piVar4 + 8);
LAB_0804244a:
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  return in_lr;
}


