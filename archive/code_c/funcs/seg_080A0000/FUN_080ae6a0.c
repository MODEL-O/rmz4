// undefined FUN_080ae6a0(void)
// entry 0x80ae6a0


undefined4 FUN_080ae6a0(int param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080ae704);
    FUN_08005784(param_1 + 0x74,DAT_080ae708);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  sVar1 = FUN_08007020(*(undefined4 *)(param_1 + 0x54));
  if (sVar1 != 0) {
    FUN_08002b10(0x3f);
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ae70c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080ae25c(param_1);
  }
  return in_lr;
}


