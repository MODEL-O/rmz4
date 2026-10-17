// undefined FUN_08058f88(void)
// entry 0x8058f88


undefined4 FUN_08058f88(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 1;
  uVar2 = 3;
  if (*(int *)(param_1 + 0xcc) + 0xf000 <= *(int *)(param_1 + 0x54) == (bool)(bVar1 >> 4 & 1)) {
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 0xe) = uVar2;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_08058fd4));
  return in_lr;
}


