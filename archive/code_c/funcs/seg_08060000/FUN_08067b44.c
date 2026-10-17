// undefined FUN_08067b44(void)
// entry 0x8067b44


undefined4 FUN_08067b44(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *DAT_08067b6c;
  if (*(char *)(param_1 + 0xe) == '\0') {
    uVar3 = DAT_08067b88;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      if (-1 < *(int *)(iVar7 + 0xec)) goto LAB_08067b80;
      FUN_0801cf00(param_1,DAT_08067bb8);
    }
    else {
      if (0 < *(int *)(iVar7 + 0xec)) {
        uVar3 = DAT_08067b70;
      }
LAB_08067b80:
      FUN_0801cf00(param_1,uVar3);
    }
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_08067bbc) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x54);
        iVar4 = DAT_08067be0;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x54);
        iVar4 = 0x2800;
      }
      *(int *)(param_1 + 100) = iVar2 + iVar4;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + DAT_08067be4;
      uVar5 = 2;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar5 = 1;
      }
    }
    else {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar2 = *(int *)(param_1 + 0x54);
        iVar4 = DAT_08067c20;
      }
      else {
        iVar2 = *(int *)(param_1 + 0x54);
        iVar4 = 0x3d00;
      }
      *(int *)(param_1 + 100) = iVar2 + iVar4;
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x58) + DAT_08067c24;
      uVar5 = 1;
      if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
        uVar5 = 2;
      }
    }
    *(undefined1 *)(param_1 + 0x13) = uVar5;
    *(undefined4 *)(param_1 + 0x2c) = 0;
LAB_08067c82:
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if ((*(char *)(param_1 + 0xe) == '\x01') && ('\x01' < *(char *)(param_1 + 0x71))) {
    *(undefined1 *)(param_1 + 0x12) = 0x80;
    uVar3 = FUN_080debc8(param_1,*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                         *(undefined1 *)(param_1 + 0x13),0x80);
    *(undefined4 *)(param_1 + 200) = uVar3;
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == DAT_08067c70) {
      FUN_08005784(param_1 + 0x74,DAT_08067c74);
    }
    else {
      FUN_08005784(param_1 + 0x74,DAT_08067ca8);
    }
    goto LAB_08067c82;
  }
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0xe) < 2) {
    return in_lr;
  }
  if (*(int *)(iVar7 + 0xec) == 0) {
    uVar3 = 0x40;
  }
  else {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  if (*(char *)(param_1 + 0x13) == '\x02') {
    uVar6 = ~*(uint *)(iVar7 + 0xec) >> 0x1f;
  }
  else {
    uVar6 = 0;
    if (*(int *)(iVar7 + 0xec) < 1) {
      uVar6 = 1;
    }
  }
  if (uVar6 == 0) {
    iVar2 = *(int *)(param_1 + 100);
    iVar4 = *(int *)(*DAT_08067d84 + 0x54);
    if (iVar2 <= iVar4) {
      if (iVar2 - iVar4 < 0x41) {
LAB_08067db4:
        iVar2 = *(int *)(iVar7 + 0x1bc);
        iVar4 = DAT_08067de4;
      }
      else {
        iVar2 = *(int *)(iVar7 + 0x1bc);
        iVar4 = DAT_08067db0;
      }
      goto LAB_08067dbe;
    }
    if (iVar2 - iVar4 < 0x41) {
      iVar4 = (*(int *)(iVar7 + 0x1bc) + 0x340) - *(int *)(param_1 + 0x5c);
    }
    else {
      iVar4 = (*(int *)(iVar7 + 0x1bc) + 0x300) - *(int *)(param_1 + 0x5c);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 100);
    iVar4 = *(int *)(*DAT_08067cf0 + 0x54);
    if (iVar4 < iVar2) {
      if (iVar2 - iVar4 < 0x4001) {
        if (0x2400 < iVar2 - iVar4) goto LAB_08067db4;
        if (*(int *)(param_1 + 0x2c) != 0) goto LAB_08067dc6;
        uVar3 = 0;
LAB_08067d54:
        uVar3 = FUN_080c8830(param_1,2,uVar3,0);
        *(undefined4 *)(param_1 + 0x2c) = uVar3;
        goto LAB_08067dc6;
      }
      iVar2 = *(int *)(iVar7 + 0x1bc);
      iVar4 = DAT_08067cf4;
LAB_08067dbe:
      iVar4 = iVar2 + iVar4 + *(int *)(param_1 + 0x5c);
    }
    else if (iVar4 - iVar2 < 0x4001) {
      if (iVar4 - iVar2 < 0x2401) {
        if (*(int *)(param_1 + 0x2c) != 0) goto LAB_08067dc6;
        uVar3 = 1;
        goto LAB_08067d54;
      }
      iVar4 = (*(int *)(iVar7 + 0x1bc) + 0x340) - *(int *)(param_1 + 0x5c);
    }
    else {
      iVar4 = (*(int *)(iVar7 + 0x1bc) + 0x300) - *(int *)(param_1 + 0x5c);
    }
  }
  *(int *)(iVar7 + 0x1bc) = iVar4;
LAB_08067dc6:
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    *(undefined1 *)(param_1 + 0xd) = 0x16;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


