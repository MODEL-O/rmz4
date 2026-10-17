// undefined FUN_080a02ac(void)
// entry 0x80a02ac


undefined4 FUN_080a02ac(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    FUN_080a0cc8(param_1 + 0x54,*(undefined1 *)(param_1 + 0x10),*(byte *)(param_1 + 10) >> 4 & 1);
    FUN_08005784(param_1 + 0x74,DAT_080a0308);
    FUN_0801cf00(param_1,DAT_080a030c);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


