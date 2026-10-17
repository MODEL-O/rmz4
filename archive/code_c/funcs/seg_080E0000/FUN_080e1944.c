// undefined FUN_080e1944(void)
// entry 0x80e1944


undefined4 FUN_080e1944(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0801cf00(param_1,*(ushort *)(param_1 + 0x76) | 0xb);
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  FUN_080e19e0(param_1);
  FUN_080e1a28(param_1);
  return in_lr;
}


