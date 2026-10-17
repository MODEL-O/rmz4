// undefined FUN_080d692c(void)
// entry 0x80d692c


undefined4 FUN_080d692c(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,DAT_080d6968);
  FUN_0801cff0(param_1);
  bVar1 = *(byte *)(iVar5 + 10) >> 4;
  bVar4 = bVar1 & 1;
  if ((bVar1 & 1) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
  *(int *)(param_1 + 0x58) = *(int *)(iVar5 + 0x58) + DAT_080d69d4;
  iVar2 = *(int *)(iVar5 + 0x5c) * 100;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xff;
  }
  *(int *)(param_1 + 0x5c) = iVar2 >> 8;
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar5 + 0x60);
  *(undefined1 *)(param_1 + 0x12) = 0x16;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d69d8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_080d68fc(param_1);
  return in_lr;
}


