// undefined FUN_080928a4(void)
// entry 0x80928a4


undefined4 FUN_080928a4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_14;
  undefined4 local_10;
  
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
  local_14 = *(undefined4 *)(param_1 + 0x54);
  local_10 = *(undefined4 *)(param_1 + 0x58);
  FUN_080d0c88(1,&local_14);
  FUN_08002b10(0x2a);
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_080dbe4c(param_1,&local_14,DAT_080928f0,3);
  }
  else {
    FUN_080dbed8(param_1,&local_14,DAT_08092944,3);
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0802aaec(3,param_1 + 0x54);
  }
  if (*(ushort *)(DAT_08092948 + 0xc) <= DAT_0809294c) {
    *(ushort *)(DAT_08092948 + 0xc) = *(ushort *)(DAT_08092948 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08092950);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


