// undefined FUN_080d3a5c(void)
// entry 0x80d3a5c


undefined4 FUN_080d3a5c(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_0801cf00(param_1,0x900);
    iVar6 = FUN_08002bb4(0x3f);
    if (iVar6 == 0) {
      FUN_08002b10(0x3f);
    }
    iVar3 = DAT_080d3ae8;
    iVar2 = DAT_080d3ae4;
    iVar6 = DAT_080d3ae0;
    puVar1 = DAT_080d3adc;
    uVar7 = DAT_080d3ae0 * *DAT_080d3adc + DAT_080d3ae4;
    *(uint *)(param_1 + 0x5c) = ((uVar7 & 0x3ffffff) >> 0x10) + DAT_080d3ae8;
    uVar7 = iVar6 * (uVar7 & 0x7fffffff) + iVar2;
    *(uint *)(param_1 + 0x60) = iVar3 - ((uVar7 & 0x1ffffff) >> 0x10);
    uVar7 = iVar6 * (uVar7 & 0x7fffffff) + iVar2;
    *puVar1 = uVar7 & 0x7fffffff;
    *(byte *)(param_1 + 0x12) = ((byte)(uVar7 >> 0x10) & 0x1f) + 0x20;
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
  }
  bVar4 = *(char *)(param_1 + 0x12) - 1;
  *(byte *)(param_1 + 0x12) = bVar4;
  if ((bVar4 & 1) == 0) {
    bVar4 = *(byte *)(param_1 + 10) | 1;
  }
  else {
    bVar4 = *(byte *)(param_1 + 10) & 0xfe;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(int *)(param_1 + 0x54) = *(int *)(param_1 + 0x54) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 0x40;
  FUN_0801cff0(param_1);
  if ((*(char *)(param_1 + 0x12) == '\0') ||
     (sVar5 = FUN_08007c7c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58)),
     sVar5 != 0)) {
    piVar8 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d3b3c);
    *(undefined4 *)(param_1 + 0xc) = 4;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar8 + 0x10);
  }
  return in_lr;
}


