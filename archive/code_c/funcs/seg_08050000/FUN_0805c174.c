// undefined FUN_0805c174(void)
// entry 0x805c174


undefined4 FUN_0805c174(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 in_lr;
  undefined1 auStack_14 [4];
  
  FUN_08129258(auStack_14,DAT_0805c1c4,3);
  if (((*(ushort *)(DAT_0805c1c8 + 8) & 8) == 0) &&
     ((*(int *)(param_1 + 200) == 0 ||
      ((((cVar1 = *(char *)(param_1 + 0xbf), 1 < (byte)(cVar1 - 1U) && (cVar1 != '\x04')) &&
        (cVar1 != '\x05')) && (cVar1 != '\x03')))))) {
    iVar2 = FUN_0805c328(auStack_14,3);
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(iVar2 + DAT_0805c1f0);
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
    if (iVar2 == 1) {
      iVar2 = FUN_0805c3a8(param_1);
      if (*(int *)(param_1 + 0x54) < iVar2 + 0x7800) {
        *(undefined1 *)(param_1 + 0xbe) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xbe) = 1;
      }
    }
    else if (iVar2 == 2) {
      iVar2 = FUN_0805c3a8(param_1);
      if (*(int *)(param_1 + 0x54) < iVar2 + 0x7800) {
        *(undefined1 *)(param_1 + 0xcf) = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0xcf) = 1;
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0xd) = 0xb;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


