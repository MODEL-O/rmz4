// undefined FUN_080475b0(void)
// entry 0x80475b0


undefined4 FUN_080475b0(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(undefined1 *)(param_1 + 0x12) = 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
    local_14 = *(int *)(param_1 + 0x54) +
               *(short *)(((uint)*(byte *)(param_1 + 0x12) * 0x8000000 + 0x40000000 >> 0x17) +
                         DAT_0804764c) * 8;
    local_10 = *(int *)(param_1 + 0x58) +
               *(short *)((*(byte *)(param_1 + 0x12) & 0x1f) * 0x10 + DAT_0804764c) * 8;
    FUN_08047088(&local_14);
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08047650);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  }
  return in_lr;
}


