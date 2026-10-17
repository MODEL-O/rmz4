// undefined FUN_08098404(void)
// entry 0x8098404


undefined4 FUN_08098404(int param_1)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  bVar2 = *(byte *)(iVar6 + 10) >> 4;
  bVar4 = bVar2 & 1;
  if ((*(byte *)(iVar6 + 0xc) < 2) &&
     (cVar1 = *(char *)(param_1 + 0x12) + -1, *(char *)(param_1 + 0x12) = cVar1, cVar1 != '\0')) {
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4c) = bVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
    uVar5 = *(undefined4 *)(iVar6 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar5;
  }
  else {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08098440);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_08098488(param_1);
  }
  return in_lr;
}


