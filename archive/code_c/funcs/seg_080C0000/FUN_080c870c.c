// undefined FUN_080c870c(void)
// entry 0x80c870c


undefined4 FUN_080c870c(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_0801cf00(param_1,DAT_080c8780);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (cVar1 == '\x01') {
      cVar1 = *(char *)(DAT_080c8784 + 0x26);
      if (cVar1 != '\0') {
        *(char *)(DAT_080c8784 + 0x26) = cVar1 + -1;
      }
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c8788);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  }
  return in_lr;
}


