// undefined FUN_080bcfd8(void)
// entry 0x80bcfd8


undefined4 FUN_080bcfd8(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined1 *)(param_1 + 0x12) = 0x40;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xfe;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 1;
  }
  *(byte *)(param_1 + 10) = bVar1;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == -1) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bd05c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


