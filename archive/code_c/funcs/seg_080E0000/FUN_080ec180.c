// undefined FUN_080ec180(void)
// entry 0x80ec180


undefined4 FUN_080ec180(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte bVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 10);
  bVar3 = bVar1 | 2;
  *(byte *)(param_1 + 10) = bVar3;
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 | 6;
    FUN_08005760(param_1 + 0x74,DAT_080ec1c0,param_1 + 0x54,0);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_080ec1c4;
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xef;
    *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_1 + 0x1c);
  }
  else {
    FUN_080ebf6c(param_1,bVar3,0);
  }
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ec1ec);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_080ec1f0(param_1);
  return in_lr;
}


