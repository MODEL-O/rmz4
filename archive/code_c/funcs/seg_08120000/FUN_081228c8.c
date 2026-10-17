// undefined FUN_081228c8(void)
// entry 0x81228c8


undefined4 FUN_081228c8(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  short asStack_1c [4];
  
  FUN_08129258(asStack_1c,DAT_08122950,6);
  iVar3 = param_1 + DAT_08122954;
  FUN_080027b8(iVar3,DAT_08122958,0x23,0,0);
  uVar2 = 0;
  iVar4 = param_1 + DAT_0812295c;
  do {
    iVar1 = uVar2 * 2 + iVar3;
    *(short *)(iVar1 + 0x48) = asStack_1c[*(byte *)(iVar4 + 1)] + (short)uVar2 + 0x5000;
    *(short *)(iVar1 + 0x88) = asStack_1c[*(byte *)(iVar4 + 1)] + (short)uVar2 + 0x5020;
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  FUN_08001f1c(param_1 + DAT_08122954,(*DAT_08122960 & 0x1f00) << 3,0x1000);
  return in_lr;
}


