// undefined FUN_080183b4(void)
// entry 0x80183b4


undefined4 FUN_080183b4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 in_lr;
  
  iVar1 = DAT_08018448;
  *(undefined1 *)(DAT_08018448 + DAT_0801844c) = 0;
  iVar2 = DAT_08018450;
  *(undefined2 *)(iVar1 + DAT_08018450) = 0xf600;
  *(undefined2 *)(iVar1 + iVar2 + 2) = 0xf600;
  *(undefined1 *)(iVar1 + DAT_08018454) = 0;
  *(undefined4 *)(iVar1 + iVar2 + 4) = DAT_08018458;
  *(undefined4 *)(iVar1 + DAT_0801845c) = 0x30000;
  iVar3 = DAT_08018460;
  *(undefined2 *)(iVar1 + DAT_08018460) = 0;
  *(undefined2 *)(iVar1 + iVar2 + 0xe) = 0;
  *(undefined1 *)(iVar1 + iVar3 + -0xe) = 0;
  *(undefined2 *)(iVar1 + iVar2 + 0x10) = 0;
  *(undefined1 *)(iVar1 + iVar3 + 6) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x13) = 0;
  *(undefined1 *)(iVar1 + DAT_08018464) = 0x10;
  *(undefined1 *)(iVar1 + DAT_08018468) = 0;
  *(undefined1 *)(iVar1 + iVar2 + 0x15) = 0;
  puVar4 = (undefined1 *)(iVar1 + DAT_0801846c);
  *puVar4 = 0;
  if ((*(byte *)(DAT_08018470 + 4) & 0x20) != 0) {
    FUN_080074c0(0x10,4,0x2f);
    *puVar4 = 2;
  }
  return in_lr;
}


