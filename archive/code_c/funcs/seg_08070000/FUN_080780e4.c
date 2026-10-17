// undefined FUN_080780e4(void)
// entry 0x80780e4


undefined4 FUN_080780e4(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = *(char *)(param_1 + 0xe);
  *(undefined1 *)(*(int *)(param_1 + 200) + 0xb5) = 1;
  *(undefined1 *)(*(int *)(param_1 + 200) + 0xb6) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0xcc) + 0xb6) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xcc) + 0xb9) = 1;
  *(char *)(param_1 + 0xe) = cVar1 + '\x01';
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08078124));
  return in_lr;
}


