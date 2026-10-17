// undefined FUN_0804ae30(void)
// entry 0x804ae30


undefined4 FUN_0804ae30(int param_1)

{
  undefined4 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  byte bVar7;
  byte *pbVar8;
  undefined4 in_lr;
  
  uVar6 = *(undefined4 *)(param_1 + 0xb8);
  iVar4 = *(int *)(param_1 + 0xb4);
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804ae98);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  FUN_0801cdbc(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801d3d0(param_1,0xf);
  FUN_0801cf00(param_1,32000);
  bVar2 = *(byte *)(iVar4 + 10) >> 4;
  bVar7 = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar7;
  pbVar8 = (byte *)(param_1 + 0x4a);
  *pbVar8 = *pbVar8 & 0xef | bVar7 << 4;
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar2 = *(byte *)(param_1 + 0x10) & 1;
  *(byte *)(param_1 + 0x4d) = bVar2;
  *pbVar8 = *pbVar8 & 0xdf | bVar2 << 5;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    uVar1 = DAT_0804af54;
    FUN_08005760(param_1 + 0x74,DAT_0804af54,param_1 + 0x54,1);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    cVar3 = FUN_0803a4e8(uVar6);
    FUN_08005794(param_1 + 0x74,uVar1,cVar3 + '\b',0xffffffff,0xffffffff,0xffffffff);
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + DAT_0804af90;
      *(undefined4 *)(param_1 + 0x5c) = DAT_0804af94;
      uVar6 = 0x55;
    }
    else {
      *(int *)(param_1 + 0x54) = *(int *)(iVar4 + 0x54) + 0x2200;
      *(undefined4 *)(param_1 + 0x5c) = 0x400;
      uVar6 = 0xffffffab;
    }
    *(undefined4 *)(param_1 + 100) = uVar6;
    *(int *)(param_1 + 0x58) = *(int *)(iVar4 + 0x58) + DAT_0804af98;
    *(undefined1 *)(param_1 + 0x12) = 0x12;
    *(undefined4 *)(param_1 + 0x98) = DAT_0804af9c;
  }
  FUN_0804afa0(param_1);
  return in_lr;
}


