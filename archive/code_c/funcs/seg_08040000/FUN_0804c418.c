// undefined FUN_0804c418(void)
// entry 0x804c418


undefined4 FUN_0804c418(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_10;
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfa;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
    local_c = *(undefined4 *)(param_1 + 0x58);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      local_10 = *(int *)(param_1 + 0x54) +
                 *(short *)(((uint)*(byte *)(param_1 + 0x12) * -0x24 + 0x40 & 0xff) * 2 +
                           DAT_0804c528) * 2 +
                 *(short *)(((uint)*(byte *)(param_1 + 0x12) * -0x24000000 >> 0x18) * 2 +
                           DAT_0804c528) * 2;
      FUN_0804bfb4(&local_10,*(char *)(param_1 + 0x12) * -0x24);
    }
    else {
      local_10 = *(short *)(((uint)*(byte *)(param_1 + 0x12) * 0x24000000 >> 0x17) + DAT_0804c4b0) *
                 2 + *(short *)(((uint)*(byte *)(param_1 + 0x12) * 0x24000000 + 0x40000000 >> 0x17)
                               + DAT_0804c4b0) * 2 + *(int *)(param_1 + 0x54);
      FUN_0804bfb4(&local_10,*(char *)(param_1 + 0x12) * '$');
    }
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == -1) {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804c52c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  }
  return in_lr;
}


