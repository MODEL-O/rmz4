// undefined FUN_080bbf9c(void)
// entry 0x80bbf9c


undefined4 FUN_080bbf9c(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[1] = DAT_080bbffc[1];
  local_14[0] = *DAT_080bbffc;
  bVar1 = *(byte *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08005784(param_1 + 0x74,DAT_080bc000);
    FUN_0801cf00(param_1,*(undefined2 *)(local_14 + bVar1));
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (cVar2 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar2, cVar2 == '\0')) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


