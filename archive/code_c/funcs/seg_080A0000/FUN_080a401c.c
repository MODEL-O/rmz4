// undefined FUN_080a401c(void)
// entry 0x80a401c


undefined4 FUN_080a401c(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  if (*(char *)(param_1 + 0x12) == '\0') {
    iVar4 = *(int *)(param_1 + 0x60);
    iVar5 = *(int *)(param_1 + 0x58) + iVar4;
    *(int *)(param_1 + 0x58) = iVar5;
    if (iVar4 < 1) {
      if ((*(char *)(param_1 + 0x13) == '\0') || (*(int *)(iVar6 + 0xbc) != 0)) {
        if (*(int *)(param_1 + 0xb8) <= *(int *)(param_1 + 0x58)) goto LAB_080a415c;
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
        *(int *)(param_1 + 0x60) = -iVar4;
        uVar1 = 1;
        goto LAB_080a4154;
      }
      if (*(int *)(param_1 + 0xb8) + 0x1800 <= iVar5) goto LAB_080a415c;
      *(int *)(param_1 + 0x60) = -iVar4;
      *(undefined1 *)(param_1 + 0x12) = 1;
      cVar2 = '\x03';
    }
    else if ((*(char *)(param_1 + 0x13) == '\0') || (*(int *)(iVar6 + 0xb4) != 0)) {
      if (*(int *)(param_1 + 0x58) <= *(int *)(param_1 + 0xb8)) goto LAB_080a415c;
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
      *(int *)(param_1 + 0x60) = -iVar4;
      uVar1 = 1;
LAB_080a4154:
      *(undefined1 *)(param_1 + 0x12) = uVar1;
      cVar2 = *(char *)(param_1 + 0x13) + '\x01';
    }
    else {
      if (iVar5 <= *(int *)(param_1 + 0xb8) + DAT_080a4070) goto LAB_080a415c;
      *(int *)(param_1 + 0x60) = -iVar4;
      *(undefined1 *)(param_1 + 0x12) = 1;
      cVar2 = '\x03';
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar5 = *(int *)(param_1 + 0x54) + iVar4;
    *(int *)(param_1 + 0x54) = iVar5;
    if (iVar4 < 1) {
      if ((*(char *)(param_1 + 0x13) == '\0') || (*(int *)(iVar6 + 0xc0) != 0)) {
        iVar6 = *(int *)(param_1 + 0xb4);
        if (iVar6 <= *(int *)(param_1 + 0x54)) goto LAB_080a415c;
        goto LAB_080a414c;
      }
      if (*(int *)(param_1 + 0xb4) + 0x1800 <= iVar5) goto LAB_080a415c;
      *(int *)(param_1 + 0x5c) = -iVar4;
      *(undefined1 *)(param_1 + 0x12) = 0;
      cVar2 = '\x03';
    }
    else {
      if ((*(char *)(param_1 + 0x13) == '\0') || (*(int *)(iVar6 + 0xb8) != 0)) {
        iVar6 = *(int *)(param_1 + 0xb4);
        if (*(int *)(param_1 + 0x54) <= iVar6) goto LAB_080a415c;
LAB_080a414c:
        *(int *)(param_1 + 0x54) = iVar6;
        *(int *)(param_1 + 0x5c) = -iVar4;
        uVar1 = 0;
        goto LAB_080a4154;
      }
      if (iVar5 <= *(int *)(param_1 + 0xb4) + DAT_080a4104) goto LAB_080a415c;
      *(int *)(param_1 + 0x5c) = -iVar4;
      *(undefined1 *)(param_1 + 0x12) = 0;
      cVar2 = '\x03';
    }
  }
  *(char *)(param_1 + 0x13) = cVar2;
LAB_080a415c:
  if (1 < *(byte *)(param_1 + 0x13)) {
    if (*(byte *)(param_1 + 0x13) < 3) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined1 *)(param_1 + 0x94) = 0;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a41c0);
      *(undefined4 *)(param_1 + 0xc) = 3;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0xc);
    }
    else {
      piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a4180);
      *(undefined4 *)(param_1 + 0xc) = 2;
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      FUN_080a3c94(param_1);
    }
  }
  return in_lr;
}


