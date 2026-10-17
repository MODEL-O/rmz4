// undefined FUN_08012964(void)
// entry 0x8012964


undefined4 FUN_08012964(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar1 = DAT_08012980;
  if ((*(byte *)(DAT_08012980 + DAT_08012984) & 0xf) == 0) {
    uVar2 = 6;
    iVar3 = DAT_08012988;
  }
  else {
    uVar2 = 4;
    iVar3 = DAT_080129a0;
  }
  *(undefined1 *)(DAT_08012980 + iVar3) = uVar2;
  *(undefined1 *)(iVar1 + DAT_080129a4) = 0;
  return in_lr;
}


