// undefined FUN_0809a738(void)
// entry 0x809a738


undefined4 FUN_0809a738(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  undefined4 in_lr;
  
  *(char *)(param_1 + 0x24) = *(char *)(param_1 + 0x12) + -0x40;
  puVar11 = (ushort *)(param_1 + 0xbe);
  if (0x100 < *puVar11) {
    *(undefined1 *)(param_1 + 0x25) = 0x19;
    FUN_0801cff0(param_1);
    *puVar11 = *puVar11 - 1;
    return in_lr;
  }
  if (*puVar11 < 0xf9) {
    uVar3 = 8;
  }
  else {
    uVar3 = 0x19;
  }
  *(undefined1 *)(param_1 + 0x25) = uVar3;
  iVar8 = DAT_0809a858;
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - *(int *)(param_1 + 0x68);
    cVar4 = *(char *)(param_1 + 0x13) + -1;
    *(char *)(param_1 + 0x13) = cVar4;
    if (cVar4 == -1) {
      FUN_0801cf00(param_1,DAT_0809a7cc);
      *(undefined4 *)(param_1 + 100) = 0x100;
      *(undefined1 *)(param_1 + 0x13) = 1;
      *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    }
  }
  else {
    iVar10 = *(int *)(param_1 + 100);
    iVar9 = iVar10 * *(short *)((*(byte *)(param_1 + 0x12) + 0xc0 & 0xff) * 2 + DAT_0809a858) >> 8;
    *(int *)(param_1 + 0x5c) = iVar9;
    iVar8 = iVar10 * *(short *)((*(byte *)(param_1 + 0x12) + 0x80 & 0xff) * 2 + iVar8) >> 8;
    *(int *)(param_1 + 0x60) = iVar8;
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar9;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar8;
    *(int *)(param_1 + 100) = iVar10 + 0x10;
    if (0x300 < iVar10 + 0x10) {
      *(undefined4 *)(param_1 + 100) = 0x300;
    }
    uVar5 = FUN_08128bdc((*(int *)(param_1 + 0x54) - *(int *)(*DAT_0809a85c + 0x54)) * 0x100 >> 0x10
                         ,((*(int *)(param_1 + 0x58) + 0x2000) - *(int *)(*DAT_0809a85c + 0x58)) *
                          0x100 >> 0x10);
    uVar5 = (uVar5 & 0xffff) >> 8;
    if (uVar5 != *(byte *)(param_1 + 0x12)) {
      bVar1 = *(byte *)(param_1 + 0x12);
      uVar6 = (uint)bVar1;
      if ((int)(uVar5 - uVar6) < 0) {
        if (0x10 < (int)(uVar6 - uVar5)) goto LAB_0809a866;
LAB_0809a87a:
        cVar4 = '\x01';
      }
      else {
        if ((int)(uVar5 - uVar6) < 0x11) goto LAB_0809a87a;
LAB_0809a866:
        iVar8 = *(int *)(param_1 + 100) + -0x30;
        *(int *)(param_1 + 100) = iVar8;
        if (iVar8 < 0x100) {
          *(undefined4 *)(param_1 + 100) = 0x100;
        }
        cVar4 = '\x02';
      }
      if ((int)(uVar5 * 0x1000000) < 0) {
        if ((*(byte *)(param_1 + 0x12) < uVar5) && ((int)(uVar5 - 0x80) < (int)uVar6)) {
          cVar4 = cVar4 + bVar1;
        }
        else {
          cVar4 = *(byte *)(param_1 + 0x12) - cVar4;
        }
      }
      else if ((uVar5 < *(byte *)(param_1 + 0x12)) && (uVar6 < uVar5 + 0x80)) {
        cVar4 = bVar1 - cVar4;
      }
      else {
        cVar4 = cVar4 + *(byte *)(param_1 + 0x12);
      }
      *(char *)(param_1 + 0x12) = cVar4;
    }
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  FUN_0801cff0(param_1);
  puVar11 = (ushort *)(param_1 + 0xbe);
  uVar2 = *puVar11;
  if (uVar2 < 0x3c) {
    if ((uVar2 & 7) != 0) {
      FUN_0801d330(param_1);
      goto LAB_0809a8f4;
    }
  }
  else {
    if (0x1d < uVar2) goto LAB_0809a8f4;
    if ((uVar2 & 3) == 0) {
      FUN_0801d330(param_1);
      goto LAB_0809a8f4;
    }
  }
  FUN_0801d3fc(param_1);
LAB_0809a8f4:
  if (((*(uint *)(param_1 + 0x8c) & 4) != 0) ||
     (uVar2 = *puVar11, *puVar11 = (ushort)(uVar2 - 1), (uVar2 - 1) * 0x10000 - DAT_0809a930 == 0))
  {
    piVar7 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809a934);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar7 + 8);
    FUN_08099ff4(param_1);
  }
  return in_lr;
}


