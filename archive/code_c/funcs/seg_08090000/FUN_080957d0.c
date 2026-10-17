// undefined FUN_080957d0(void)
// entry 0x80957d0


undefined4 FUN_080957d0(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  undefined1 auStack_c [4];
  
  FUN_08129258(auStack_c,DAT_0809581c,4);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = auStack_c[*(byte *)(param_1 + 0x11)];
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  FUN_08095cd8(param_1);
  cVar1 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar1;
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


