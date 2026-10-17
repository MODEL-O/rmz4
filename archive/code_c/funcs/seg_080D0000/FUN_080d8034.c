// undefined FUN_080d8034(void)
// entry 0x80d8034


undefined4 FUN_080d8034(int param_1)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  short sVar4;
  int *piVar5;
  byte bVar6;
  byte *pbVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  byte bVar11;
  undefined4 in_lr;
  
  bVar2 = *(byte *)(*(int *)(param_1 + 0x28) + 10);
  bVar1 = bVar2 >> 4;
  bVar9 = bVar1 & 1;
  bVar2 = bVar2 >> 5;
  bVar11 = bVar2 & 1;
  if (*(char *)(param_1 + 0xe) == '\0') {
    bVar6 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar6 | 1;
    if ((bVar1 & 1) == 0) {
      bVar6 = bVar6 & 0xef | 1;
    }
    else {
      bVar6 = bVar6 | 0x11;
    }
    *(byte *)(param_1 + 10) = bVar6;
    *(byte *)(param_1 + 0x4c) = bVar9;
    pbVar7 = (byte *)(param_1 + 0x4a);
    *pbVar7 = *pbVar7 & 0xef | bVar9 << 4;
    if ((bVar2 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar2;
    *(byte *)(param_1 + 0x4d) = bVar11;
    *pbVar7 = *pbVar7 & 0xdf | bVar11 << 5;
    FUN_0801cf00(param_1,**(undefined2 **)(param_1 + 0x74));
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else if (*(char *)(param_1 + 0xe) != '\x01') {
    return in_lr;
  }
  iVar10 = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x54) = iVar10;
  iVar8 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar8;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + *(int *)(param_1 + 0x68);
  cVar3 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar3;
  if ((cVar3 == '\0') || (sVar4 = FUN_08007c7c(iVar10,iVar8), sVar4 != 0)) {
    FUN_080d0c88(1,param_1 + 0x54);
    piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d8120);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 8);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


