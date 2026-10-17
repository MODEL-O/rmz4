// undefined FUN_080a3d58(void)
// entry 0x80a3d58


undefined4 FUN_080a3d58(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 == 1) {
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    sVar2 = FUN_08007c7c(iVar3 + DAT_080a3e08,*(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      iVar3 = FUN_08008988(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x54) = iVar3 + 0xd00;
      *(undefined1 *)(param_1 + 0x12) = 0;
      if (*(int *)(*DAT_080a3e0c + 0x58) + DAT_080a3e10 < *(int *)(param_1 + 0x58)) {
        *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      }
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar3 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x60);
      *(int *)(param_1 + 0x58) = iVar3;
      sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar3 + DAT_080a3db8);
      if (sVar2 != 0) {
        iVar3 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
        *(int *)(param_1 + 0x58) = iVar3 + 0xd00;
        *(undefined1 *)(param_1 + 0x12) = 1;
        if (*(int *)(*DAT_080a3dbc + 0x54) < *(int *)(param_1 + 0x54)) {
          *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
        }
LAB_080a3e58:
        *(undefined1 *)(param_1 + 0xd) = 1;
      }
    }
  }
  else if (bVar1 == 2) {
    iVar3 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
    *(int *)(param_1 + 0x58) = iVar3;
    sVar2 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),iVar3 + 0xd00);
    if (sVar2 != 0) {
      iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x58) = iVar3 + DAT_080a3e5c;
      *(undefined1 *)(param_1 + 0x12) = 1;
      if (*(int *)(*DAT_080a3e60 + 0x54) < *(int *)(param_1 + 0x54)) {
        *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
      }
      *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      goto LAB_080a3e58;
    }
  }
  else if (bVar1 == 3) {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
    *(int *)(param_1 + 0x54) = iVar3;
    sVar2 = FUN_08007c7c(iVar3 + 0xd00,*(undefined4 *)(param_1 + 0x58));
    if (sVar2 != 0) {
      iVar3 = FUN_08008868(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(int *)(param_1 + 0x54) = iVar3 + DAT_080a3ec8;
      *(undefined1 *)(param_1 + 0x12) = 0;
      if (*(int *)(*DAT_080a3ecc + 0x58) + DAT_080a3ed0 < *(int *)(param_1 + 0x58)) {
        *(int *)(param_1 + 0x60) = -*(int *)(param_1 + 0x60);
      }
      *(int *)(param_1 + 0x5c) = -*(int *)(param_1 + 0x5c);
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
  }
  iVar3 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0x54);
  if (iVar3 < 0) {
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0xb4);
  }
  if (iVar3 < 0x2401) {
    iVar3 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0x58);
    if (iVar3 < 0) {
      iVar3 = *(int *)(param_1 + 0x58) - *(int *)(param_1 + 0xb8);
    }
    if (iVar3 < 0x2401) goto LAB_080a3f0a;
  }
  FUN_08005784(param_1 + 0x74,DAT_080a3f1c);
LAB_080a3f0a:
  if (*(char *)(param_1 + 0xd) == '\x01') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


