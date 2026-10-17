// undefined FUN_08068148(void)
// entry 0x8068148


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08068148(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cf00(param_1,DAT_080681a4);
    FUN_08005784(param_1 + 0x74,_FUN_080681a8);
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(undefined1 *)(param_1 + 0xd) = 0x1c;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


