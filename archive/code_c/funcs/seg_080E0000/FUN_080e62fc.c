// undefined FUN_080e62fc(void)
// entry 0x80e62fc


undefined4 FUN_080e62fc(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e6354);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_080e6358 + 0x54)) {
    *(byte *)(param_1 + 10) = bVar1 | 0x13;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
  }
  else {
    *(byte *)(param_1 + 10) = bVar1 & 0xef | 3;
    *(undefined1 *)(param_1 + 0x4c) = 0;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  }
  FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080e6394));
  FUN_080e6398(param_1);
  return in_lr;
}


