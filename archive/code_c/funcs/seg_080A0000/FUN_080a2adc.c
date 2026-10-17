// undefined FUN_080a2adc(void)
// entry 0x80a2adc


undefined4 FUN_080a2adc(int param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0x2a);
    FUN_080d0c88(2,param_1 + 0x54);
    FUN_0802ab88(4,0x21,param_1 + 0x54);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(undefined1 *)(param_1 + 0x12) = 2;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    if (cVar1 == '\x01') {
      cVar1 = *(char *)(DAT_080a2b7c + 0x26);
      if (cVar1 != '\0') {
        *(char *)(DAT_080a2b7c + 0x26) = cVar1 + -1;
      }
    }
    if (*(ushort *)(DAT_080a2b80 + 0xc) <= DAT_080a2b84) {
      *(ushort *)(DAT_080a2b80 + 0xc) = *(ushort *)(DAT_080a2b80 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a2b88);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 0x10);
  }
  return in_lr;
}


