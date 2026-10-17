// undefined FUN_08080a60(void)
// entry 0x8080a60


undefined4 FUN_08080a60(int param_1)

{
  undefined1 uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_08080ad4);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(param_1 + 0xb5) * 4 +
                         ((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                         *(undefined1 *)(param_1 + 0x70)) + DAT_08080adc) * 8 +
                        DAT_08080ad8)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    FUN_08002b10(DAT_08080ae0);
    if (*(byte *)(param_1 + 0xb5) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = 4;
    }
    *(undefined1 *)(param_1 + 0xe) = uVar1;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


