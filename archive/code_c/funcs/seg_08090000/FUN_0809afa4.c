// undefined FUN_0809afa4(void)
// entry 0x809afa4


undefined4 FUN_0809afa4(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  undefined4 in_lr;
  
  bVar3 = *(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809afdc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
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
  *(undefined1 *)(param_1 + 0x25) = 8;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,*DAT_0809b03c,param_1 + 0x54,0xc);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_0809b040(param_1);
  return in_lr;
}


