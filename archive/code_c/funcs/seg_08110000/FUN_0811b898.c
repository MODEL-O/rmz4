// undefined FUN_0811b898(void)
// entry 0x811b898


undefined4 FUN_0811b898(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_0811b8b0) == '\x03') {
    uVar1 = *DAT_0811b8b4 + 0x10;
    puVar2 = DAT_0811b8b4;
  }
  else {
    uVar1 = *DAT_0811b8ec - 0x10;
    puVar2 = DAT_0811b8ec;
  }
  *puVar2 = uVar1;
  uVar3 = DAT_0811b8f0 & *puVar2;
  *puVar2 = (ushort)uVar3;
  if ((uVar3 & 0xff) == 0) {
    *(undefined1 *)(param_1 + DAT_0811b8f4 + -1) = *(undefined1 *)(param_1 + DAT_0811b8f4);
    *(undefined1 *)(param_1 + 2) = 1;
    FUN_0811b8f8(param_1);
  }
  return in_lr;
}


