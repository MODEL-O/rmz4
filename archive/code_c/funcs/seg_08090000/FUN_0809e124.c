// undefined FUN_0809e124(void)
// entry 0x809e124


undefined8 FUN_0809e124(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(*DAT_0809e1a8 + 0x54);
    if ((iVar2 < *(int *)(param_1 + 0x54)) && (*(int *)(param_1 + 0x54) + DAT_0809e1ac < iVar2)) {
      iVar2 = *(int *)(*DAT_0809e1a8 + 0x58);
      if ((iVar2 < *(int *)(param_1 + 0x58) + 0x2600) &&
         (*(int *)(param_1 + 0x58) + DAT_0809e1b0 < iVar2)) {
        uVar1 = 1;
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 10) & 0x10;
        goto LAB_0809e1b6;
      }
    }
  }
  else {
    iVar2 = *(int *)(*DAT_0809e16c + 0x54);
    if ((*(int *)(param_1 + 0x54) < iVar2) && (iVar2 < *(int *)(param_1 + 0x54) + 0x6c00)) {
      iVar2 = *(int *)(*DAT_0809e16c + 0x58);
      if ((iVar2 < *(int *)(param_1 + 0x58) + 0x2600) &&
         (*(int *)(param_1 + 0x58) + DAT_0809e170 < iVar2)) {
        uVar1 = 1;
        *(undefined1 *)(param_1 + 0xd) = 1;
        *(undefined1 *)(param_1 + 0xe) = 0;
        goto LAB_0809e1b6;
      }
    }
  }
  uVar1 = 0;
LAB_0809e1b6:
  return CONCAT44(in_lr,uVar1);
}


