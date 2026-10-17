// undefined FUN_080d5808(void)
// entry 0x80d5808


undefined4 FUN_080d5808(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_08002c94(param_1 + 0x34,DAT_080d5838);
  *(int *)(param_1 + 0x3c) = param_1;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xf7;
  if (*(char *)(param_1 + 0x11) == -1) {
    *(undefined4 *)(param_1 + 0x80) = DAT_080d583c;
    FUN_08002b10(6);
  }
  else {
    *(uint *)(param_1 + 0x80) = (uint)*(byte *)(param_1 + 0x11) * 0x10 + DAT_080d58a8;
  }
  bVar1 = FUN_080d5938(*(undefined4 *)(param_1 + 0x80));
  *(byte *)(param_1 + 0x7d) = bVar1;
  *(ushort *)(param_1 + 0x7e) = (short)DAT_080d58ac + (ushort)*(byte *)(param_1 + 0x7d);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined1 *)(param_1 + 0x12) = 0x3c;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d58b0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080d58b4(param_1);
  return in_lr;
}


