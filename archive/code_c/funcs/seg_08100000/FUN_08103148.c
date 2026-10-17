// undefined FUN_08103148(void)
// entry 0x8103148


undefined4 FUN_08103148(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081031bc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_081031c0;
  *(undefined2 *)(param_1 + 0x26) = 1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(char *)(param_1 + 0xb5) = *(char *)(DAT_081031c4 + DAT_081031c8);
  *(undefined1 *)(param_1 + 0xb4) = *(undefined1 *)(param_1 + 0x11);
  if (*(char *)(param_1 + 0xb5) == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    FUN_0810330c(param_1);
  }
  FUN_081031e0(param_1);
  return in_lr;
}


