// undefined FUN_080a5b7c(void)
// entry 0x80a5b7c


undefined4 FUN_080a5b7c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080a5bcc);
    FUN_0801cf00(param_1,DAT_080a5bd0);
    FUN_0801d330(param_1);
    FUN_0801d3d0(param_1,6);
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


