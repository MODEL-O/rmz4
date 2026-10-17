// undefined FUN_080e86bc(void)
// entry 0x80e86bc


undefined4 FUN_080e86bc(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  byte *pbVar6;
  int iVar7;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar5 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar5 | 3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e8700);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  bVar1 = *(byte *)(param_1 + 0x10);
  if (bVar1 < 5) {
    *(byte *)(param_1 + 0x22) = bVar1;
    FUN_0801cf00(param_1,DAT_080e8704);
  }
  else if (bVar1 == 5) {
    bVar1 = *(byte *)(param_1 + 0x11) & 1;
    if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
      bVar5 = bVar5 & 0xef | 3;
    }
    else {
      bVar5 = bVar5 | 0x13;
    }
    *(byte *)(param_1 + 10) = bVar5;
    *(byte *)(param_1 + 0x4c) = bVar1;
    pbVar6 = (byte *)(param_1 + 0x4a);
    *pbVar6 = *pbVar6 & 0xef | bVar1 << 4;
    bVar5 = *(byte *)(param_1 + 0x11) >> 1;
    if (bVar5 == 0) {
      bVar1 = *(byte *)(param_1 + 10) & 0xdf;
    }
    else {
      bVar1 = *(byte *)(param_1 + 10) | 0x20;
    }
    *(byte *)(param_1 + 10) = bVar1;
    bVar5 = bVar5 & 1;
    *(byte *)(param_1 + 0x4d) = bVar5;
    *pbVar6 = *pbVar6 & 0xdf | bVar5 << 5;
    FUN_0801cf00(param_1,DAT_080e87a4);
    iVar7 = *(int *)(param_1 + 0x58) + DAT_080e87a8;
    *(int *)(param_1 + 0x58) = iVar7;
    iVar4 = *(int *)(param_1 + 0x54) + 0x5a00;
    *(int *)(param_1 + 0x54) = iVar4;
    iVar3 = DAT_080e87ac;
    *(int *)(param_1 + 0x54) =
         iVar4 + *(int *)((uint)*(byte *)(param_1 + 0x11) * 8 + DAT_080e87ac) * 0x100;
    *(int *)(param_1 + 0x58) =
         iVar7 + *(int *)((uint)*(byte *)(param_1 + 0x11) * 8 + iVar3 + 4) * 0x100;
  }
  else {
    FUN_0801cf00(param_1,DAT_080e87c4);
    if (*(char *)(param_1 + 0x11) == '\0') {
      iVar4 = *(int *)(param_1 + 0x54);
      iVar3 = DAT_080e87c8;
    }
    else {
      iVar4 = *(int *)(param_1 + 0x54);
      iVar3 = 0x3000;
    }
    *(int *)(param_1 + 0x54) = iVar4 + iVar3;
    iVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    *(int *)(param_1 + 0x58) = iVar3 + 0x300;
  }
  FUN_080e87f4(param_1);
  return in_lr;
}


