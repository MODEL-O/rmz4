// undefined FUN_081003c8(void)
// entry 0x81003c8


undefined4 FUN_081003c8(int param_1)

{
  int *piVar1;
  byte *pbVar2;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 3;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08100454);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(char *)(param_1 + 0xb5) = *(char *)(DAT_08100458 + DAT_0810045c);
  pbVar2 = (byte *)(param_1 + 0xb4);
  *pbVar2 = 0;
  if (*(char *)(param_1 + 0xb5) == '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,(uint)*pbVar2 * 0x108 + DAT_08100460,param_1 + 0x54,0xff);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  else {
    FUN_08100654(param_1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,(uint)*pbVar2 * 0x108 + DAT_081004a0,param_1 + 0x54,0xff);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  FUN_081004a4(param_1);
  return in_lr;
}


