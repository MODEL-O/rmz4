// undefined FUN_080cffbc(void)
// entry 0x80cffbc


undefined4 FUN_080cffbc(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  FUN_08002b10(0x196);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d0010);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 100) = 0x20;
  *(byte *)(param_1 + 0xb4) = bVar1 * '\x02' + -1;
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
  FUN_0801cf00(param_1,0xe800);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080d0070,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080d0074(param_1);
  return in_lr;
}


