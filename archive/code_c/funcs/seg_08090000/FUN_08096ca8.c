// undefined FUN_08096ca8(void)
// entry 0x8096ca8


undefined4 FUN_08096ca8(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  cVar1 = *(char *)(param_1 + 0x13);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0x13) = cVar1 + -1;
    if (cVar1 != '\x01') {
      return in_lr;
    }
    FUN_080d0c88(1,param_1 + 0x54);
    FUN_08002b10(0x2a);
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_0802ab88(3,0x25,param_1 + 0x54);
    if (*(ushort *)(DAT_08096d30 + 0xc) <= DAT_08096d34) {
      *(ushort *)(DAT_08096d30 + 0xc) = *(ushort *)(DAT_08096d30 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08096d38);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


