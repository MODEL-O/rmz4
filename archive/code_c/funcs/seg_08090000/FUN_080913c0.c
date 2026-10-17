// undefined FUN_080913c0(void)
// entry 0x80913c0


undefined4 FUN_080913c0(int param_1)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  int *piVar4;
  ushort uVar5;
  int iVar6;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 in_lr;
  uint uVar7;
  
  iVar6 = *(int *)(param_1 + 0x28);
  iVar10 = *(int *)(iVar6 + 0x54) + *(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_08091408);
  *(int *)(param_1 + 0x54) = iVar10;
  iVar8 = *(int *)(iVar6 + 0x58) + *(int *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_0809140c);
  *(int *)(param_1 + 0x58) = iVar8;
  if (1 < *(byte *)(iVar6 + 0xc)) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08091410);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
    FUN_08090f70(param_1);
    return in_lr;
  }
  bVar1 = *(byte *)(param_1 + 0xd);
  if (bVar1 == 1) {
    if ((*(ushort *)(DAT_08091548 + 8) & 8) == 0) {
      FUN_080bd43c(param_1 + 0x54,0x300,*(undefined1 *)(param_1 + 0xc0));
    }
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    cVar3 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_0809156c;
    iVar6 = FUN_0810d338(*(int *)(*DAT_08091468 + 0x54) - iVar10,
                         *(int *)(*DAT_08091468 + 0x58) - (iVar8 + 0xf00));
    uVar7 = ((iVar6 + 0x80) * 0x10000 >> 0x10) + 8U & DAT_0809146c & 0xff;
    uVar5 = (ushort)uVar7;
    if (*(char *)(param_1 + 0x11) == '\0') {
      if (uVar7 < 0x60) {
        uVar5 = 0x60;
      }
      else if (0xa0 < uVar7) {
LAB_080914e8:
        uVar5 = 0xa0;
      }
    }
    else if (*(char *)(param_1 + 0x11) == '\x01') {
      if (uVar5 < 0x81) {
        if (0x20 < uVar5) {
          uVar7 = 0x20;
        }
        uVar5 = (ushort)uVar7;
        if (0x80 < *(byte *)(param_1 + 0xc0)) {
          uVar5 = (ushort)(uVar7 * 0x10000 + 0x1000000 >> 0x10);
        }
      }
      else {
        if (uVar5 < 0xe0) {
          uVar7 = 0xe0;
        }
        uVar5 = (ushort)uVar7;
        if (-1 < *(char *)(param_1 + 0xc0)) {
          uVar5 = (ushort)(uVar7 * 0x10000 + -0x1000000 >> 0x10);
        }
      }
    }
    else if (uVar7 * 0x10000 + DAT_080914dc >> 0x10 < 0xa1) {
      if ((uint)((int)(uVar7 * 0x10000) >> 0x10) < 0xa0) goto LAB_080914e8;
    }
    else {
      uVar5 = 0xe0;
    }
    pbVar9 = (byte *)(param_1 + 0xc0);
    bVar1 = *pbVar9;
    if ((short)uVar5 < (short)(ushort)bVar1) {
      cVar2 = -1;
LAB_080914fe:
      *pbVar9 = bVar1 + cVar2;
    }
    else if ((short)(ushort)bVar1 < (short)uVar5) {
      cVar2 = '\x01';
      goto LAB_080914fe;
    }
    *(byte *)(param_1 + 0x24) = *pbVar9;
    cVar2 = *(char *)(param_1 + 0x12) + -1;
    *(char *)(param_1 + 0x12) = cVar2;
    if (cVar2 != -1) goto LAB_0809156c;
    *(undefined1 *)(param_1 + 0x13) = 3;
    cVar3 = *(char *)(param_1 + 0xd) + '\x01';
  }
  else {
    if ((bVar1 != 2) ||
       (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 != -1))
    goto LAB_0809156c;
    cVar2 = *(char *)(param_1 + 0x13);
    *(char *)(param_1 + 0x13) = cVar2 + -1;
    cVar3 = '\0';
    if (cVar2 != '\x01') {
      cVar3 = '\x01';
    }
  }
  *(char *)(param_1 + 0xd) = cVar3;
LAB_0809156c:
  FUN_0801cff0(param_1);
  return in_lr;
}


