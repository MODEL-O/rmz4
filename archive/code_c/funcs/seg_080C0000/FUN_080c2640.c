// undefined FUN_080c2640(void)
// entry 0x80c2640


undefined4 FUN_080c2640(int param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  bVar1 = *(byte *)(iVar2 + 10);
  if ((*(byte *)(param_1 + 0x12) & 0x1f) == 0) {
    FUN_08002b10(0xb7);
  }
  *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + '\x01';
  iVar7 = *(int *)(iVar2 + 0x54);
  iVar6 = DAT_080c26c4;
  if ((*(byte *)(iVar2 + 10) & 0x10) != 0) {
    iVar6 = 0xc00;
  }
  iVar5 = *(int *)(iVar2 + 0x58) + DAT_080c26c8;
  pbVar3 = (byte *)(param_1 + 0xbe);
  if (*pbVar3 == 0) {
    *(char *)(param_1 + 0xbc) = *(char *)(param_1 + 0xbc) + '\b';
    if ((*(byte *)(param_1 + 0x12) & 3) == 0) {
      FUN_080c24a4(param_1);
    }
  }
  else {
    *pbVar3 = *pbVar3 - 1;
    if ((*(byte *)(param_1 + 0x12) & 1) == 0) {
      FUN_080c24a4(param_1);
    }
  }
  iVar4 = (0x10 - (uint)*pbVar3) * *(int *)(param_1 + 0xc0);
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xf;
  }
  iVar4 = iVar4 >> 4;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  iVar8 = *(short *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_080c2760) * 0x18 + DAT_080c2764 +
          iVar4;
  iVar4 = FUN_08128fb8((0x10 - (uint)*pbVar3) * 0x200 * iVar8,iVar4);
  *(uint *)(param_1 + 0xb4) = iVar4 * ((bVar1 >> 4 & 1) * 2 + -1) + iVar7 + iVar6;
  *(int *)(param_1 + 0xb8) = iVar5 + iVar8;
  iVar6 = DAT_080c2790;
  if ((*(byte *)(iVar2 + 10) & 0x10) != 0) {
    iVar6 = 0xc00;
  }
  iVar7 = *(int *)(iVar2 + 0x58) + DAT_080c2794;
  *(int *)(param_1 + 0x54) = *(int *)(iVar2 + 0x54) + iVar6;
  *(int *)(param_1 + 0x58) = iVar7;
  return in_lr;
}


