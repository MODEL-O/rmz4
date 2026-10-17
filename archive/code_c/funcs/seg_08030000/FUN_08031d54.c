// undefined FUN_08031d54(void)
// entry 0x8031d54


undefined4 FUN_08031d54(int param_1)

{
  undefined4 in_lr;
  
  *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) & 0xfd;
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_08031d78));
  return in_lr;
}


