// undefined FUN_0811a574(void)
// entry 0x811a574


undefined4 FUN_0811a574(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = param_1 + DAT_0811a5d8;
  pcVar2 = (char *)(param_1 + DAT_0811a5d8 + 0x2b);
  if (*pcVar2 == '\0') {
    *pcVar2 = '\x01';
  }
  FUN_080025d8(*(byte *)(param_1 + 0xdd0) + 0x14);
  cVar1 = FUN_080025d8(0x13);
  if (cVar1 == '\x03') {
    FUN_08001d30(DAT_0811a5dc,(*DAT_0811a5e0 & 0xc) << 0xc);
    FUN_08002208(DAT_0811a5e4,0);
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_1 + 0xdd2) = 0;
    *(undefined2 *)(iVar3 + 0x30) = 0;
    *(undefined2 *)(iVar3 + 0x32) = 0;
    *(undefined2 *)(iVar3 + 0x34) = 0;
    *(undefined2 *)(iVar3 + 0x36) = 0;
    *DAT_0811a5e8 = 0;
  }
  return in_lr;
}


