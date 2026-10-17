// undefined FUN_0805db4c(void)
// entry 0x805db4c


undefined4 FUN_0805db4c(int param_1)

{
  undefined1 uVar1;
  undefined4 in_lr;
  
  if ((0x19000 < (*(int *)(DAT_0805dba8 + 0x38) - *(int *)(param_1 + 0x54)) + 0xc800U) ||
     (0x16000 < (*(int *)(DAT_0805dba8 + 0x3c) - *(int *)(param_1 + 0x58)) + 0xb000U)) {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0xd4);
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb4) + DAT_0805dbac;
  }
  if (*(int *)(param_1 + 0x58) < *(int *)(param_1 + 0xb4) + DAT_0805dbb0) {
    uVar1 = 2;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0xe) = uVar1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_0805dbd0));
  return in_lr;
}


