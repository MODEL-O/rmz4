// undefined FUN_08065cb0(void)
// entry 0x8065cb0


undefined4 FUN_08065cb0(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 in_lr;
  
  uVar5 = (uint)*(byte *)(param_1 + 0xce) * 8;
  if (uVar5 < 0x20) {
    uVar3 = *DAT_08065cf4 * DAT_08065cf8 + DAT_08065cfc;
    *DAT_08065cf4 = uVar3 & 0x7fffffff;
    iVar4 = 2;
    if (uVar5 <= ((uVar3 & 0x7fffffff) >> 0x10 & 0x1f)) goto LAB_08065cde;
  }
  iVar4 = 4;
LAB_08065cde:
  uVar1 = *(undefined1 *)(iVar4 + DAT_08065d00);
  if (iVar4 == 2) {
    cVar2 = *(char *)(param_1 + 0xce) + '\x01';
  }
  else {
    cVar2 = '\0';
  }
  *(char *)(param_1 + 0xce) = cVar2;
  *(undefined1 *)(param_1 + 0xd) = uVar1;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  return in_lr;
}


