// undefined FUN_080d36a4(void)
// entry 0x80d36a4


undefined4 FUN_080d36a4(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar7 = *(int *)(param_1 + 0x28);
  if ((1 < *(byte *)(iVar7 + 0xc)) && (0xf < *(byte *)(param_1 + 0x12))) {
    *(byte *)(param_1 + 0x12) = *(byte *)(param_1 + 0x12) & 0xf;
  }
  cVar1 = *(char *)(param_1 + 0x12);
  bVar5 = cVar1 - 1;
  *(byte *)(param_1 + 0x12) = bVar5;
  if (*(char *)(DAT_080d36fc + 2) == '\0') {
    bVar6 = cVar1 - 1;
    if ((*(byte *)(param_1 + 0x7c) >> 1 < bVar6) ||
       (((*(byte *)(param_1 + 0x7c) >> 2 < bVar6 && ((bVar5 & 1) == 0)) || ((bVar5 & 3) == 0)))) {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    if ((*(byte *)(iVar7 + 10) & 0x40) == 0) {
      if (((*(byte *)(iVar7 + 10) & 0x30) >> 4 & 1) == 0) {
        iVar2 = *(int *)(iVar7 + 0x54) + *(int *)(param_1 + 0x74);
      }
      else {
        iVar2 = *(int *)(iVar7 + 0x54) - *(int *)(param_1 + 0x74);
      }
      *(int *)(param_1 + 0x54) = iVar2;
      if (((*(byte *)(iVar7 + 10) & 0x30) >> 4 & 2) == 0) {
        iVar2 = *(int *)(iVar7 + 0x58) + *(int *)(param_1 + 0x78);
      }
      else {
        iVar2 = *(int *)(iVar7 + 0x58) - *(int *)(param_1 + 0x78);
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar7 + 0x54);
      iVar2 = *(int *)(iVar7 + 0x58);
    }
    *(int *)(param_1 + 0x58) = iVar2;
    FUN_0801cff0(param_1);
    if ((*(char *)(param_1 + 0x12) != '\0') && (*(byte *)(iVar7 + 0xc) < 3)) {
      return in_lr;
    }
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d37a8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    uVar4 = *(undefined4 *)(*piVar3 + 8);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d3728);
    *(undefined4 *)(param_1 + 0xc) = 3;
    uVar4 = *(undefined4 *)(*piVar3 + 0xc);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  return in_lr;
}


