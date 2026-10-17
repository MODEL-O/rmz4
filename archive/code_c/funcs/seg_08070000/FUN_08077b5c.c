// undefined FUN_08077b5c(void)
// entry 0x8077b5c


undefined4 FUN_08077b5c(int param_1)

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
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08077b9c));
  return in_lr;
}


