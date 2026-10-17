// undefined FUN_081111d8(void)
// entry 0x81111d8


undefined4 FUN_081111d8(int param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 7) == '\0') {
    FUN_08002b10(0x1c2);
    *DAT_0811124c = (ushort)DAT_08111250 & *DAT_0811124c | 0x3d00;
    *(undefined2 *)(param_1 + 8) = 0x20;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  if (*(short *)(param_1 + 8) != 0) {
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + -1;
  }
  iVar2 = DAT_08111258;
  iVar1 = DAT_08111254;
  cVar3 = *(char *)(param_1 + 8);
  *(char *)(DAT_08111254 + DAT_08111258) = cVar3 + ' ';
  cVar3 = cVar3 + ' ';
  *(char *)(iVar1 + iVar2 + -1) = cVar3;
  *(char *)(iVar1 + 0x400) = cVar3;
  FUN_080025d8(0x89);
  if (*(short *)(param_1 + 8) == 0) {
    *(undefined1 *)(param_1 + 6) = 2;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return in_lr;
}


