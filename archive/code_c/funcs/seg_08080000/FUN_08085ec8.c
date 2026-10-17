// undefined FUN_08085ec8(void)
// entry 0x8085ec8


undefined4 FUN_08085ec8(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    local_14 = *(undefined4 *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + DAT_08085f40;
    FUN_080d0c88(1,&local_14);
    FUN_08002b10(0x2a);
    if (*(ushort *)(DAT_08085f44 + 0xc) <= DAT_08085f48) {
      *(ushort *)(DAT_08085f44 + 0xc) = *(ushort *)(DAT_08085f44 + 0xc) + 1;
    }
    FUN_0802abe0(param_1,param_1 + 0x54);
    FUN_0802ab88(4,0x2b,param_1 + 0x54);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) == '\x01') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08085f68);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  }
  return in_lr;
}


