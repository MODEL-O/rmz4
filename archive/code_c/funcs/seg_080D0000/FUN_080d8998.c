// undefined FUN_080d8998(void)
// entry 0x80d8998


undefined4 FUN_080d8998(int param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = DAT_080d89dc;
  bVar1 = *(byte *)(param_1 + 10);
  bVar2 = *(byte *)(param_1 + 0x74);
  local_1c = *(undefined4 *)(param_1 + 0x54);
  local_18 = *(undefined4 *)(param_1 + 0x58);
  iVar5 = 0;
  iVar4 = 2;
  do {
    FUN_080d4c8c(&local_1c,iVar5 + iVar3,0,bVar2 | (bVar1 >> 4 & 1) << 4);
    iVar5 = iVar5 + 0x1c;
    iVar4 = iVar4 + -1;
  } while (-1 < iVar4);
  return in_lr;
}


