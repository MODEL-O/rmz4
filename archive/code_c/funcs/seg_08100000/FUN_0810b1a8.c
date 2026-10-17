// undefined FUN_0810b1a8(void)
// entry 0x810b1a8


undefined4 FUN_0810b1a8(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810b1ec);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 0) {
    FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 4 + DAT_0810b234));
    *(byte *)(param_1 + 0xd) = bVar1;
  }
  else {
    FUN_0801cf00(param_1,*(undefined2 *)((uint)bVar1 * 4 + DAT_0810b1f0 + 2));
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  FUN_0801cff0(param_1);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_0810b148(param_1);
  return in_lr;
}


