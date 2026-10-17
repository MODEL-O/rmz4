// undefined FUN_080a9500(void)
// entry 0x80a9500


undefined4 FUN_080a9500(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if ((*(char *)(param_1 + 0xe) == '\0') && (*(short *)(iVar1 + 0xdc) != 0)) {
    FUN_0801cf00(param_1,DAT_080a953c);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(iVar1 + 0xd) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


