// undefined FUN_08032c18(void)
// entry 0x8032c18


undefined4 FUN_08032c18(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  cVar1 = FUN_08038a48();
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 2;
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  else {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xe) * 4 + DAT_08032c3c));
  }
  *(byte *)(param_1 + 0x142) = *(byte *)(param_1 + 0x142) & 0xbf;
  return in_lr;
}


