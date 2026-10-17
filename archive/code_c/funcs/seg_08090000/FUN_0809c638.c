// undefined FUN_0809c638(void)
// entry 0x809c638


undefined4 FUN_0809c638(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801ceec(param_1);
  FUN_0801cf00(param_1,0xc600);
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(param_1 + 10);
  bVar4 = bVar1 >> 4 & 1;
  if ((bVar1 >> 4 & 1) == 0) {
    bVar1 = bVar1 & 0xef;
  }
  else {
    bVar1 = bVar1 | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  if ((*(byte *)(iVar6 + 10) & 0x10) == 0) {
    iVar2 = *(int *)(iVar6 + 0x54);
    iVar5 = DAT_0809c6ec;
  }
  else {
    iVar2 = *(int *)(iVar6 + 0x54);
    iVar5 = 0x1700;
  }
  *(int *)(param_1 + 0x54) = iVar2 + iVar5;
  *(int *)(param_1 + 0x58) = *(int *)(iVar6 + 0x58) + DAT_0809c6f0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0xffffff80;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  uVar3 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0xbc) = uVar3;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0x10;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return in_lr;
}


