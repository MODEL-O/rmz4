// undefined FUN_080a0d40(void)
// entry 0x80a0d40


undefined4 FUN_080a0d40(int param_1)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 in_lr;
  
  bVar4 = *(byte *)(param_1 + 0x11);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a0db8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  uVar6 = *(undefined4 *)(param_1 + 0x54);
  iVar5 = *(int *)(param_1 + 0x58) + 0x800;
  sVar2 = FUN_08007c7c(uVar6,iVar5);
  if (sVar2 != 0) {
    uVar6 = FUN_08008534(uVar6,iVar5);
    *(undefined4 *)(param_1 + 0x58) = uVar6;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0x30;
  FUN_0801cc9c(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  if (bVar4 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar4 = bVar4 & 1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080a0e10,param_1 + 0x54,4);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080a0e14(param_1);
  return in_lr;
}


