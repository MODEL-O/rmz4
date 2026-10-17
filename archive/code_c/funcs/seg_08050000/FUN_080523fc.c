// undefined FUN_080523fc(void)
// entry 0x80523fc


undefined4 FUN_080523fc(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_08052434);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0x17;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


