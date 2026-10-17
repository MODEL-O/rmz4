// undefined FUN_08070434(void)
// entry 0x8070434


undefined4 FUN_08070434(int param_1)

{
  undefined1 uVar1;
  undefined4 in_lr;
  
  *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0xb4) = 1;
  uVar1 = FUN_08073e00(param_1);
  *(undefined1 *)(param_1 + 0xc3) = uVar1;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08070470));
  return in_lr;
}


