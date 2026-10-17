// undefined FUN_080e3e40(void)
// entry 0x80e3e40


undefined4 FUN_080e3e40(int param_1)

{
  short sVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  byte bVar7;
  uint *puVar8;
  undefined2 *puVar9;
  undefined4 in_lr;
  
  puVar9 = *(undefined2 **)(param_1 + 0x7c);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,*puVar9);
  FUN_0801cff0(param_1);
  if (*(char *)(puVar9 + 0xd) != '\0') {
    *(byte *)(param_1 + 0x49) =
         *(byte *)(param_1 + 0x49) & 0xf3 | (*(byte *)(puVar9 + 0xd) & 3) << 2;
  }
  if (*(char *)((int)puVar9 + 0x1b) != '\0') {
    *(char *)(param_1 + 0x25) = *(char *)((int)puVar9 + 0x1b);
  }
  bVar7 = *(byte *)(param_1 + 0x78);
  if (bVar7 == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  bVar7 = bVar7 & 1;
  *(byte *)(param_1 + 0x4c) = bVar7;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar7 << 4;
  if (*(byte *)(param_1 + 0x78) == 0) {
    iVar4 = *(int *)(param_1 + 0x54) + (int)(short)puVar9[2];
  }
  else {
    iVar4 = *(int *)(param_1 + 0x54) - (int)(short)puVar9[2];
  }
  *(int *)(param_1 + 0x54) = iVar4;
  puVar8 = DAT_080e3fb4;
  puVar2 = DAT_080e3f18;
  if (*(char *)(param_1 + 0x79) == '\0') {
    sVar1 = puVar9[4];
    uVar5 = *DAT_080e3fb4 * DAT_080e3fb8 + DAT_080e3fbc;
    *DAT_080e3fb4 = uVar5 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = (int)sVar1 + ((uVar5 & 0x7fffffff) >> 0x10 & (int)(short)puVar9[6]);
    iVar4 = (int)(short)puVar9[8];
  }
  else {
    sVar1 = puVar9[4];
    uVar5 = *DAT_080e3f18 * DAT_080e3f1c + DAT_080e3f20;
    *DAT_080e3f18 = uVar5 & 0x7fffffff;
    *(uint *)(param_1 + 0x5c) = -((uVar5 & 0x7fffffff) >> 0x10 & (int)(short)puVar9[6]) - (int)sVar1
    ;
    iVar4 = -(int)(short)puVar9[8];
    puVar8 = puVar2;
  }
  *(int *)(param_1 + 100) = iVar4;
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + (int)(short)puVar9[3];
  sVar1 = puVar9[5];
  uVar5 = *puVar8 * DAT_080e3fb8 + DAT_080e3fbc;
  *puVar8 = uVar5 & 0x7fffffff;
  *(uint *)(param_1 + 0x60) = (int)sVar1 + ((uVar5 & 0x7fffffff) >> 0x10 & (int)(short)puVar9[7]);
  *(int *)(param_1 + 0x68) = (int)(short)puVar9[9];
  *(undefined2 *)(param_1 + 0x74) = puVar9[10];
  *(undefined2 *)(param_1 + 0x76) = puVar9[0xb];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(puVar9 + 1);
  *(undefined1 *)(param_1 + 0x13) = *(undefined1 *)(puVar9 + 1);
  piVar6 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e3fc0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar6 + 4);
  FUN_080e3fc4(param_1);
  return in_lr;
}


