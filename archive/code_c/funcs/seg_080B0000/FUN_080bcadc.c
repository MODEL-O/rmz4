// undefined FUN_080bcadc(void)
// entry 0x80bcadc


undefined4 FUN_080bcadc(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080bcb3c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = bVar1 | 7;
  FUN_08005760(param_1 + 0x74,DAT_080bcb40,param_1 + 0x54,0x14);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080bcb44;
  FUN_0801cf00(param_1,0xeb00);
  if (*(byte *)(param_1 + 0x10) == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  bVar1 = *(byte *)(param_1 + 0x10) & 1;
  *(byte *)(param_1 + 0x4c) = bVar1;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar1 << 4;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  uVar3 = DAT_080bcba4;
  if ((*(byte *)(param_1 + 10) & 0x10) != 0) {
    uVar3 = 0x200;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  FUN_08002b10(0x6b);
  FUN_080bcba8(param_1);
  return in_lr;
}


