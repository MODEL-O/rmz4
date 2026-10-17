// undefined FUN_0804c5b8(void)
// entry 0x804c5b8


undefined4 FUN_0804c5b8(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((*(ushort *)(*(int *)(param_1 + 0x28) + 0x15a) & 1) == 0) {
    if ((*(ushort *)(*(int *)(param_1 + 0x28) + 200) & 8) != 0) {
      return in_lr;
    }
    bVar1 = *(byte *)(param_1 + 10);
  }
  else {
    bVar1 = *(byte *)(param_1 + 10);
  }
  *(byte *)(param_1 + 10) = bVar1 & 0xfc;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804c624);
  *(undefined4 *)(param_1 + 0xc) = 3;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  return in_lr;
}


