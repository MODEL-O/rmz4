// undefined FUN_080cc478(void)
// entry 0x80cc478


undefined4 FUN_080cc478(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  FUN_0801cd28();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef | 2;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  iVar2 = *(int *)(param_1 + 100);
  if (((iVar2 == 0x3000) || (iVar2 == 0x9000)) || (iVar2 == 0xf000)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,(uint)*(byte *)(param_1 + 0x11) * 0x60 + DAT_080cc4ec,param_1 + 0x54
                 ,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0;
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080cc538,param_1 + 0x54,8);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    *(undefined1 *)(param_1 + 0x12) = 1;
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cc53c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080cc0a4(param_1);
  return in_lr;
}


