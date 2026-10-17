// undefined FUN_080a1534(void)
// entry 0x80a1534


undefined4 FUN_080a1534(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x25) = 0x18;
    FUN_0801cf00(param_1,DAT_080a157c);
    *(undefined1 *)(param_1 + 0x12) = 0x60;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    FUN_0801cf00(param_1,DAT_080a157c);
    *(undefined1 *)(param_1 + 0x12) = 0x60;
  }
  else if (cVar2 == '0') {
    FUN_080c83c4(param_1,*(undefined1 *)(param_1 + 0x10),bVar1 >> 4 & 1);
    FUN_0801cf00(param_1,DAT_080a15bc);
  }
  FUN_0801cff0(param_1);
  FUN_080a1a74(param_1);
  if (3 < *(byte *)(param_1 + 0xba)) {
    *(undefined1 *)(param_1 + 0xd) = 3;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


