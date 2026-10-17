// undefined FUN_080b28a0(void)
// entry 0x80b28a0


undefined8 FUN_080b28a0(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined4 in_lr;
  
  if (-1 < *(int *)(param_1 + 0x60)) {
    iVar2 = FUN_08007f8c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500);
    if (iVar2 == 0) goto LAB_080b295a;
    uVar1 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + 0x500);
    uVar1 = uVar1 & 0xf;
    if (uVar1 == 1) {
LAB_080b294c:
      uVar4 = 0;
LAB_080b2952:
      *(undefined1 *)(param_1 + 0xb8) = uVar4;
      *(undefined1 *)(param_1 + 0xb9) = uVar4;
    }
    else {
      if ((ushort)(uVar1 - 2) < 2) {
        uVar4 = 2;
        goto LAB_080b29a2;
      }
      if (1 < (ushort)(uVar1 - 8)) {
        if ((ushort)(uVar1 - 4) < 4) {
          uVar4 = 1;
        }
        else {
          if (3 < (ushort)(uVar1 - 10)) goto LAB_080b294c;
          uVar4 = 1;
        }
        goto LAB_080b2952;
      }
      *(undefined1 *)(param_1 + 0xb8) = 2;
      *(undefined1 *)(param_1 + 0xb9) = 1;
    }
LAB_080b29aa:
    uVar3 = 1;
    goto LAB_080b29b0;
  }
  iVar2 = FUN_08007db4(*(undefined4 *)(param_1 + 0x54),*(int *)(param_1 + 0x58) + DAT_080b28c4);
  if (iVar2 == 0) {
LAB_080b295a:
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar2 = FUN_0800816c(*(int *)(param_1 + 0x54) + DAT_080b2984,*(undefined4 *)(param_1 + 0x58));
      if (iVar2 != 0) {
        uVar4 = 3;
        goto LAB_080b297a;
      }
    }
    else {
      iVar2 = FUN_0800834c(*(int *)(param_1 + 0x54) + 0x500,*(undefined4 *)(param_1 + 0x58));
      if (iVar2 != 0) {
        uVar4 = 3;
LAB_080b29a2:
        *(undefined1 *)(param_1 + 0xb8) = uVar4;
        *(undefined1 *)(param_1 + 0xb9) = 0;
        goto LAB_080b29aa;
      }
    }
    uVar3 = 0;
  }
  else {
    uVar4 = 0;
LAB_080b297a:
    *(undefined1 *)(param_1 + 0xb8) = uVar4;
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0xb9) = 1;
  }
LAB_080b29b0:
  return CONCAT44(in_lr,uVar3);
}


