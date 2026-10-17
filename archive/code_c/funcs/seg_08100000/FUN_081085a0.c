// undefined FUN_081085a0(void)
// entry 0x81085a0


undefined4 FUN_081085a0(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 in_lr;
  
  FUN_0801cff0();
  if (*(char *)(param_1 + 0x11) == '\0') {
    cVar1 = *(char *)(param_1 + 0x12);
    bVar5 = cVar1 - 1;
    *(byte *)(param_1 + 0x12) = bVar5;
    if ((byte)(cVar1 - 1U) < 0x3c) {
      if ((bVar5 & 2) == 0) {
        bVar5 = *(byte *)(param_1 + 10) & 0xfe;
      }
      else {
        bVar5 = *(byte *)(param_1 + 10) | 1;
      }
      *(byte *)(param_1 + 10) = bVar5;
    }
  }
  puVar4 = DAT_081086ec;
  piVar3 = DAT_08108688;
  piVar2 = DAT_08108660;
  piVar8 = DAT_08108630;
  if (((*(uint *)(param_1 + 0x8c) & 4) == 0) || (*(int *)(param_1 + 0xb8) == 0)) {
    if ((*(byte *)(param_1 + 0x11) < 2) &&
       ((*(char *)(param_1 + 0x12) == '\0' ||
        (uVar7 = FUN_0801fb14(DAT_08108784,param_1 + 0x54), 0x8000 < uVar7)))) {
      piVar8 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08108788);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar8 + 8);
      return in_lr;
    }
    if (*(char *)(param_1 + 0xd) == '\0') {
      piVar8 = (int *)(param_1 + 0xb4);
      if ((*(int *)(param_1 + 0x58) < *piVar8) ||
         (sVar6 = FUN_081088f4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58)), sVar6 == 0
         )) {
        sVar6 = FUN_081088f4(*(undefined4 *)(param_1 + 0x54),*piVar8);
        if ((sVar6 != 0) &&
           (iVar10 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*piVar8),
           iVar10 < *(int *)(param_1 + 0x58) + DAT_08108808)) {
          iVar10 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*piVar8);
          *piVar8 = iVar10;
        }
      }
      else {
        uVar9 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(undefined4 *)(param_1 + 0x58) = uVar9;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
      }
      iVar10 = *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + iVar10;
      if (DAT_0810880c < iVar10) {
        return in_lr;
      }
      *(int *)(param_1 + 0x60) = iVar10 + 0x40;
      return in_lr;
    }
    iVar10 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar12 = *(int *)(param_1 + 0x58);
    if (iVar10 < iVar12) {
      *(int *)(param_1 + 0x58) = iVar10;
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    else if (iVar12 < iVar10) {
      iVar11 = *(int *)(param_1 + 0x60);
      if (iVar11 == 0) {
        if (iVar10 <= iVar12 + 0x700) {
          *(int *)(param_1 + 0x58) = iVar10;
          goto LAB_0810885e;
        }
        *(undefined4 *)(param_1 + 0x60) = 0x40;
        iVar12 = iVar12 + 0x40;
      }
      else {
        if (iVar11 <= DAT_081088b0) {
          *(int *)(param_1 + 0x60) = iVar11 + 0x40;
        }
        iVar12 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      }
      *(int *)(param_1 + 0x58) = iVar12;
    }
LAB_0810885e:
    iVar10 = FUN_08008aa4(*(int *)(param_1 + 0x54) + DAT_081088b4,*(int *)(param_1 + 0x58) + 0x400);
    if ((iVar10 == 0) &&
       (iVar10 = FUN_08008aa4(*(int *)(param_1 + 0x54) + 0x400,*(int *)(param_1 + 0x58) + 0x400),
       iVar10 == 0)) {
      return in_lr;
    }
    sVar6 = FUN_081088f4(*(int *)(param_1 + 0x54) + iVar10,*(int *)(param_1 + 0x58) + DAT_081088b4);
    if (sVar6 != 0) {
      return in_lr;
    }
    *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + iVar10;
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if (cVar1 == '\0') {
    bVar5 = *(byte *)(DAT_08108604 + 9);
    piVar8 = DAT_08108608;
LAB_0810869a:
    if ((bVar5 & 8) != 0) {
      *piVar8 = *piVar8 + 0x10;
    }
    *piVar8 = *piVar8 + 0x10;
    goto LAB_08108712;
  }
  if (cVar1 == '\x01') {
    if ((*(byte *)(DAT_0810862c + 9) & 8) != 0) {
      *DAT_08108630 = *DAT_08108630 + 0x20;
    }
    *piVar8 = *piVar8 + 0x20;
    goto LAB_08108712;
  }
  if (cVar1 == '\x02') {
    if ((*(byte *)(DAT_0810865c + 9) & 8) != 0) {
      *DAT_08108660 = *DAT_08108660 + 0x100;
    }
    *piVar2 = *piVar2 + 0x100;
    goto LAB_08108712;
  }
  if (cVar1 == '\x03') {
    if ((*(byte *)(DAT_08108684 + 9) & 8) != 0) {
      *DAT_08108688 = *DAT_08108688 + 4;
    }
    *piVar3 = *piVar3 + 4;
    goto LAB_08108712;
  }
  if (cVar1 == '\x04') {
    bVar5 = *(byte *)(DAT_081086ac + 9);
    piVar8 = DAT_081086b0;
    goto LAB_0810869a;
  }
  if (cVar1 != '\x05') {
    if (cVar1 == '\a') {
      *(undefined1 *)(*DAT_08108700 + 0xbc) = 0;
    }
    else if (cVar1 == '\b') {
      *(undefined1 *)(*DAT_08108748 + 0xbd) = 0;
    }
    goto LAB_08108712;
  }
  if ((*(byte *)(DAT_081086e8 + 9) & 8) == 0) {
LAB_081086d2:
    bVar5 = *(byte *)*puVar4;
    if (bVar5 < 9) {
      *(byte *)*puVar4 = bVar5 + 1;
    }
  }
  else {
    bVar5 = *(byte *)*DAT_081086ec;
    if (bVar5 < 9) {
      *(byte *)*DAT_081086ec = bVar5 + 1;
      goto LAB_081086d2;
    }
  }
  FUN_08002b10(6);
LAB_08108712:
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
  *(uint *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar8 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810874c);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar8 + 0xc);
  return in_lr;
}


