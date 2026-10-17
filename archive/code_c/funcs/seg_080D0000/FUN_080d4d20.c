// undefined FUN_080d4d20(void)
// entry 0x80d4d20


undefined4 FUN_080d4d20(int param_1)

{
  short sVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  byte *pbVar7;
  uint *puVar8;
  undefined2 *puVar9;
  undefined4 in_lr;
  
  puVar9 = *(undefined2 **)(param_1 + 0x7c);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,*puVar9);
  FUN_0801cff0(param_1);
  if (*(byte *)(param_1 + 0x78) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  bVar3 = *(byte *)(param_1 + 0x78) & 1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  pbVar7 = (byte *)(param_1 + 0x4a);
  *pbVar7 = *pbVar7 & 0xef | bVar3 << 4;
  if (*(byte *)(param_1 + 0x7a) == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar3;
  bVar3 = *(byte *)(param_1 + 0x7a) & 1;
  *(byte *)(param_1 + 0x4d) = bVar3;
  *pbVar7 = *pbVar7 & 0xdf | bVar3 << 5;
  if (*(char *)(param_1 + 0x78) == '\0') {
    iVar4 = *(int *)(param_1 + 0x54) + (int)(short)puVar9[2];
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) - (int)(short)puVar9[2];
  }
  *(int *)(param_1 + 0x54) = iVar4;
  puVar8 = DAT_080d4e9c;
  puVar2 = DAT_080d4e04;
  if (*(char *)(param_1 + 0x79) == '\0') {
    sVar1 = puVar9[4];
    uVar5 = *DAT_080d4e9c * DAT_080d4ea0 + DAT_080d4ea4;
    *DAT_080d4e9c = uVar5 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = (int)sVar1 + ((uVar5 & 0x7fffffff) >> 0x10 & (int)(short)puVar9[6]);
    iVar4 = (int)(short)puVar9[8];
  }
  else {
    sVar1 = puVar9[4];
    uVar5 = *DAT_080d4e04 * DAT_080d4e08 + DAT_080d4e0c;
    *DAT_080d4e04 = uVar5 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = -((uVar5 & 0x7fffffff) >> 0x10 & (int)(short)puVar9[6]) - (int)sVar1
    ;
    iVar4 = -(int)(short)puVar9[8];
    puVar8 = puVar2;
  }
  *(int *)(param_1 + 100) = iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)(short)puVar9[3];
  sVar1 = puVar9[5];
  uVar5 = *puVar8 * DAT_080d4ea0 + DAT_080d4ea4;
  *puVar8 = uVar5 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (int)sVar1 + ((uVar5 & 0x7fffffff) >> 0x10 & (int)(short)puVar9[7]);
  *(int *)(param_1 + 0x68) = (int)(short)puVar9[9];
  *(undefined2 *)(param_1 + 0x74) = puVar9[10];
  *(undefined2 *)(param_1 + 0x76) = puVar9[0xb];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(puVar9 + 1);
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d4ea8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  FUN_080d4eac(param_1);
  return in_lr;
}


