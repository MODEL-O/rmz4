// undefined FUN_080af910(void)
// entry 0x80af910


undefined4 FUN_080af910(int param_1)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar1 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar1 | 3;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(byte *)(param_1 + 10) = bVar1 | 7;
    FUN_08005760(param_1 + 0x74,DAT_080af974,param_1 + 0x54,4);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_080af978;
    iVar2 = FUN_080af8a8(param_1 + 0x54,1,
                         *(undefined1 *)((uint)*(byte *)(param_1 + 0x11) + DAT_080af97c));
    *(int *)(param_1 + 0x2c) = iVar2;
    *(byte *)(iVar2 + 0xb) = *(byte *)(iVar2 + 0xb) | 0x10;
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x1d) = *(undefined1 *)(param_1 + 0x1c);
  }
  else {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
  }
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080af9e0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb5) = 1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0xb4;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  if (*(int *)(param_1 + 0x58) < *(int *)(*DAT_080af9e4 + 0x58)) {
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xb8) = 1;
  }
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0xb7) = 6;
  }
  else {
    *(undefined1 *)(param_1 + 0xc0) = 3;
    *(undefined1 *)(param_1 + 0xc1) = 1;
  }
  if ((*(byte *)(DAT_080afa24 + DAT_080afa28) & 0xf) == 2) {
    uVar4 = 0x240;
  }
  else {
    uVar4 = 0x180;
  }
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  FUN_080b022c(param_1);
  FUN_080afa50(param_1);
  return in_lr;
}


