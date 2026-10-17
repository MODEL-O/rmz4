// undefined FUN_080c5960(void)
// entry 0x80c5960


undefined4 FUN_080c5960(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar6 + 10) >> 4;
  bVar4 = bVar1 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0x50;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  iVar5 = DAT_080c59fc;
  if ((*(byte *)(iVar6 + 10) & 0x10) != 0) {
    iVar5 = 0x3600;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar6 + 0x54) + iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + DAT_080c5a00;
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c5a04);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080c5e50(param_1);
  }
  return in_lr;
}


