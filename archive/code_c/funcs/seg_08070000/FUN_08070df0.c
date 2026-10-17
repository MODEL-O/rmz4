// undefined FUN_08070df0(void)
// entry 0x8070df0


undefined4 FUN_08070df0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined1 *)(*(int *)(param_1 + 0xb4) + 0xb4) = 1;
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_08070e1c));
  return in_lr;
}


