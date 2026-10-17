// undefined FUN_0807e07c(void)
// entry 0x807e07c


undefined4 FUN_0807e07c(int param_1)

{
  undefined4 in_lr;
  
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0807e09c));
  return in_lr;
}


