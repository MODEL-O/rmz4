// undefined FUN_080d3988(void)
// entry 0x80d3988


undefined4 FUN_080d3988(int param_1)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar6 + 0xc)) && (0xf < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  bVar2 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar2;
  bVar5 = cVar1 - 1;
  if ((*(byte *)(param_1 + 0x7c) >> 1 < bVar5) ||
     (((*(byte *)(param_1 + 0x7c) >> 2 < bVar5 && ((bVar2 & 1) == 0)) || ((bVar2 & 3) == 0)))) {
    bVar2 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar2;
  if ((*(byte *)(iVar6 + 10) & 0x40) == 0) {
    if (((*(byte *)(iVar6 + 10) & 0x30) >> 4 & 1) == 0) {
      iVar3 = *(int *)(iVar6 + 0x54) + *(int *)(param_1 + 0x74);
    }
    else {
      iVar3 = *(int *)(iVar6 + 0x54) - *(int *)(param_1 + 0x74);
    }
    *(int *)(param_1 + 0x54) = iVar3;
    if (((*(byte *)(iVar6 + 10) & 0x30) >> 4 & 2) == 0) {
      iVar3 = *(int *)(iVar6 + 0x58) + *(int *)(param_1 + 0x78);
    }
    else {
      iVar3 = *(int *)(iVar6 + 0x58) - *(int *)(param_1 + 0x78);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    iVar3 = *(int *)(iVar6 + 0x58);
  }
  *(int *)(param_1 + 0x58) = iVar3;
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') || (2 < *(byte *)(iVar6 + 0xc))) {
    piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d3a58);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 8);
  }
  return in_lr;
}


