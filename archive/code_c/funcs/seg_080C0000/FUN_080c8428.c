// undefined FUN_080c8428(void)
// entry 0x80c8428


undefined4 FUN_080c8428(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  iVar5 = *(int *)(param_1 + 0x28);
  bVar3 = *(byte *)(param_1 + 0x11);
  FUN_08002b10(0x162);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c8470);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  iVar4 = DAT_080c8494;
  if ((*(byte *)(iVar5 + 10) & 0x10) != 0) {
    iVar4 = 0x800;
  }
  *(int *)(param_1 + 0x54) = *(int *)(iVar5 + 0x54) + iVar4;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
  FUN_0801cc9c(param_1);
  if (bVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar3 = bVar3 & 1;
  *(byte *)(param_1 + 0x4c) = bVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar3 << 4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080c84e8,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080c84ec(param_1);
  return in_lr;
}


