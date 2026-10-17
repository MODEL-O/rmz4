// undefined FUN_080bf2ec(void)
// entry 0x80bf2ec


undefined4 FUN_080bf2ec(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xb4);
  if (bVar1 == 1) {
    iVar2 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),
                         *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68));
    iVar4 = *(int *)(param_1 + 100);
    if (iVar4 < 0) {
      iVar4 = FUN_0800816c(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + 0x800);
    }
    else {
      iVar4 = FUN_0800834c(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + 0x800);
    }
    if (iVar2 == 0) {
LAB_080bf3a2:
      uVar3 = 2;
      if (*(int *)(param_1 + 100) < 0) {
        uVar3 = 3;
      }
      *(undefined1 *)(param_1 + 0xb4) = uVar3;
      *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
      *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
      goto LAB_080bf484;
    }
    if (iVar4 == 0) goto LAB_080bf484;
    uVar3 = 3;
    if (*(int *)(param_1 + 100) < 0) {
      uVar3 = 2;
    }
    *(undefined1 *)(param_1 + 0xb4) = uVar3;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) goto LAB_080bf484;
    iVar2 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),
                         *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x68));
    iVar4 = *(int *)(param_1 + 100);
    if (iVar4 < 0) {
      iVar4 = FUN_0800816c(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + DAT_080bf334)
      ;
    }
    else {
      iVar4 = FUN_0800834c(*(int *)(param_1 + 0x54) + iVar4,*(int *)(param_1 + 0x58) + DAT_080bf364)
      ;
    }
    if (iVar2 == 0) goto LAB_080bf3a2;
    if (iVar4 == 0) goto LAB_080bf484;
    uVar3 = 3;
    if (*(int *)(param_1 + 100) < 0) {
      uVar3 = 2;
    }
    *(undefined1 *)(param_1 + 0xb4) = uVar3;
  }
  else {
    if (bVar1 == 2) {
      iVar2 = FUN_0800816c(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                           *(undefined4 *)(param_1 + 0x58));
      iVar4 = *(int *)(param_1 + 0x68);
      if (iVar4 < 0) {
        iVar4 = FUN_08007db4(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + iVar4);
      }
      else {
        iVar4 = FUN_08007f8c(*(int *)(param_1 + 0x54) + 0x800,*(int *)(param_1 + 0x58) + iVar4);
      }
    }
    else {
      if (bVar1 != 3) goto LAB_080bf484;
      iVar2 = FUN_0800834c(*(int *)(param_1 + 0x54) + *(int *)(param_1 + 100),
                           *(undefined4 *)(param_1 + 0x58));
      iVar4 = *(int *)(param_1 + 0x68);
      if (iVar4 < 0) {
        iVar4 = FUN_08007db4(*(int *)(param_1 + 0x54) + DAT_080bf438,
                             *(int *)(param_1 + 0x58) + iVar4);
      }
      else {
        iVar4 = FUN_08007f8c(*(int *)(param_1 + 0x54) + DAT_080bf46c,
                             *(int *)(param_1 + 0x58) + iVar4);
      }
    }
    if (iVar2 != 0) {
      if (iVar4 != 0) {
        *(int *)(param_1 + 100) = -*(int *)(param_1 + 100);
        *(byte *)(param_1 + 0xb4) = (byte)((uint)*(undefined4 *)(param_1 + 0x68) >> 0x1f);
      }
      goto LAB_080bf484;
    }
    *(byte *)(param_1 + 0xb4) = (byte)~(byte)((uint)*(undefined4 *)(param_1 + 0x68) >> 0x18) >> 7;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  }
  *(int *)(param_1 + 0x68) = -*(int *)(param_1 + 0x68);
LAB_080bf484:
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 0x68);
  return in_lr;
}


