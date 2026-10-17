// undefined FUN_080d3bdc(void)
// entry 0x80d3bdc


undefined4 FUN_080d3bdc(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28);
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  FUN_0801cf00(param_1,0x13);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 1;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  if (((*(uint *)(iVar3 + 0x8c) & 0x200) == 0) && (*(short *)(iVar3 + 0xa4) != 0)) {
    FUN_08002b10(0xf);
  }
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
  if ((*(ushort *)(DAT_080d3c5c + 0x1d0) & 0x7f) == 2) {
    uVar1 = FUN_08007b84(iVar3 + 0x54);
  }
  else {
    uVar1 = *(undefined4 *)(DAT_080d3c5c + DAT_080d3c88);
  }
  *(undefined4 *)(param_1 + 0x58) = uVar1;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d3c8c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080d3c90(param_1);
  return in_lr;
}


