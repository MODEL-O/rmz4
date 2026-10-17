// undefined FUN_080da6c4(void)
// entry 0x80da6c4


undefined4 FUN_080da6c4(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080da708);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe | 2;
  *(int *)(param_1 + 0x58) = *(int *)(*(int *)(param_1 + 0x28) + 0xbc) + DAT_080da70c;
  *(byte *)(param_1 + 0x12) = bVar1;
  FUN_0801cc9c(param_1);
  if (bVar1 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(byte *)(param_1 + 0x4c) = bVar1 & 1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (bVar1 & 1) << 4;
  FUN_080da7cc(param_1);
  return in_lr;
}


