// undefined FUN_0809ebd8(void)
// entry 0x809ebd8


undefined4 FUN_0809ebd8(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  undefined4 in_lr;
  
  bVar3 = *(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809ec1c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
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
  *(undefined1 *)(param_1 + 0x25) = 7;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0809ec78,param_1 + 0x54,3);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0809ec7c;
  FUN_0809ec80(param_1);
  return in_lr;
}


