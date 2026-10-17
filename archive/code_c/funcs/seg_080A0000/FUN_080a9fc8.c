// undefined FUN_080a9fc8(void)
// entry 0x80a9fc8


undefined4 FUN_080a9fc8(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    cVar1 = FUN_080a9c10(param_1);
    if (cVar1 == '\0') {
      *(undefined1 *)(param_1 + 0xb6) = 0;
    }
    FUN_0801cf00(param_1,*(byte *)(param_1 + 0xbc) | 0x9a00);
    *(undefined1 *)(param_1 + 0x12) = 0x2d;
    FUN_08005784(param_1 + 0x74,DAT_080aa034);
    *(undefined4 *)(param_1 + 0x98) = DAT_080aa038;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  cVar1 = FUN_080a9cac(param_1);
  if (cVar1 != '\0') {
    FUN_080a9ba4(param_1);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


