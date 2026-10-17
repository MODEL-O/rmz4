// undefined FUN_080e1dc4(void)
// entry 0x80e1dc4


undefined4 FUN_080e1dc4(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,1);
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 != 0) {
    if ((bVar1 & 0x80) == 0) {
      if ((bVar1 & 0x40) == 0) {
        *(byte *)(param_1 + 0x25) = bVar1 & 0x1f;
      }
      else {
        *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3 | 4;
      }
    }
    else {
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) | 0xc;
    }
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e1e64);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080e1d94(param_1);
  return in_lr;
}


