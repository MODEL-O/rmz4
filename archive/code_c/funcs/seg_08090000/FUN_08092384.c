// undefined FUN_08092384(void)
// entry 0x8092384


undefined4 FUN_08092384(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0x1e;
    FUN_08005784(param_1 + 0x74,DAT_080923e8);
    FUN_0801cf00(param_1,*(undefined2 *)
                          (((int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 2U) + DAT_080923ec));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


