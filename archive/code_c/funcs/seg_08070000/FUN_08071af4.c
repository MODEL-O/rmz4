// undefined FUN_08071af4(void)
// entry 0x8071af4


undefined4 FUN_08071af4(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0xb4) = 1;
  uVar2 = FUN_08073e00(param_1);
  *(undefined1 *)(param_1 + 0xc3) = uVar2;
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_08071b30 + 0x54) == (bool)(bVar1 >> 4 & 1)) {
    *(undefined1 *)(param_1 + 0xe) = 3;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08071b50));
  return in_lr;
}


