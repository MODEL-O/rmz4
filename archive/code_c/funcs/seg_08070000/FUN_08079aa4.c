// undefined FUN_08079aa4(void)
// entry 0x8079aa4


undefined4 FUN_08079aa4(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_08002b10(DAT_08079b08);
    *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0xb4) + *(short *)((uint)*(byte *)(param_1 + 0x12) * 2 + DAT_08079b0c) * 4
  ;
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  if (iVar1 < *(int *)(param_1 + 0xb8)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0xb8);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


