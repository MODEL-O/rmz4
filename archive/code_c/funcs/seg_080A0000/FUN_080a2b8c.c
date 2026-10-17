// undefined FUN_080a2b8c(void)
// entry 0x80a2b8c


undefined4 FUN_080a2b8c(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  FUN_08002b10(0x2a);
  FUN_080d0c88(2,param_1 + 0x54);
  FUN_0802ab88(4,0x21,param_1 + 0x54);
  if (cVar1 == '\x01') {
    cVar1 = *(char *)(DAT_080a2c14 + 0x26);
    if (cVar1 != '\0') {
      *(char *)(DAT_080a2c14 + 0x26) = cVar1 + -1;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  if (*(ushort *)(DAT_080a2c18 + 0xc) <= DAT_080a2c1c) {
    *(ushort *)(DAT_080a2c18 + 0xc) = *(ushort *)(DAT_080a2c18 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a2c20);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


