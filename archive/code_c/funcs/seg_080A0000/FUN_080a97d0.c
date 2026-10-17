// undefined FUN_080a97d0(void)
// entry 0x80a97d0


undefined4 FUN_080a97d0(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
  FUN_08005760(param_1 + 0x74,DAT_080a9860,param_1 + 0x54,6);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080a9864;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a9868);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 0;
  *(undefined1 *)(param_1 + 0xb6) = 1;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0x200;
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *(undefined1 *)(param_1 + 0xbc) = 0xc;
  }
  uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined1 *)(param_1 + 0xd) = 4;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_080a986c(param_1);
  return in_lr;
}


