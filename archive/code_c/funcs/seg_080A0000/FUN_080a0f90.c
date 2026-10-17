// undefined FUN_080a0f90(void)
// entry 0x80a0f90


undefined4 FUN_080a0f90(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  byte abStack_10 [4];
  
  FUN_08129258(abStack_10,DAT_080a103c,4);
  cVar1 = *(char *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xa9);
    FUN_0801cf00(param_1,DAT_080a1040);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,(uint)abStack_10[*(char *)(param_1 + 0x71)] * 0x18 + DAT_080a1044);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    if (cVar1 == '\x01') {
      cVar1 = *(char *)(DAT_080a1048 + 0x26);
      if (cVar1 != '\0') {
        *(char *)(DAT_080a1048 + 0x26) = cVar1 + -1;
      }
    }
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a104c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  }
  return in_lr;
}


