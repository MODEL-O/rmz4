// undefined FUN_080d2a60(void)
// entry 0x80d2a60


undefined4 FUN_080d2a60(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  *(undefined1 *)(param_1 + 0x12) = 0x10;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(DAT_080d2a90 + 2) = 4;
  uVar2 = *(undefined4 *)(iVar3 + 0x58);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  if ((*(byte *)(iVar3 + 10) & 0x10) == 0) {
    iVar3 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x54) - *(int *)(param_1 + 0x5c);
  }
  *(int *)(param_1 + 0x54) = iVar3;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d2ac4);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080d2a30(param_1);
  return in_lr;
}


