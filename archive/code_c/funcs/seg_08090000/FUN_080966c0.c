// undefined FUN_080966c0(void)
// entry 0x80966c0


undefined4 FUN_080966c0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_0801cd28();
    FUN_0801cf00(param_1,0x4400);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080966f8,param_1 + 0x54,10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  else {
    FUN_0801cc9c(param_1);
    FUN_0801cf00(param_1,DAT_08096778);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_0809677c,param_1 + 0x54,10);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_08096780;
  }
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(char *)(param_1 + 0x25) = *(char *)(param_1 + 0x11) + '\x14';
  if (*(int *)(*DAT_08096784 + 0x54) < *(int *)(param_1 + 0x54)) {
    *(undefined1 *)(param_1 + 0xb4) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xb4) = 0x80;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  uVar1 = *DAT_080967f0 * DAT_080967f4 + DAT_080967f8;
  *DAT_080967f0 = uVar1 & 0x7fffffff;
  *(uint *)(param_1 + 0x68) = ((uVar1 & 0x7fffffff) >> 0x10 & 1) * 2 + -1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  if ((uint)*(byte *)(param_1 + 0x11) < (*(byte *)(param_1 + 0x10) + 1) * 4) {
    FUN_0809665c(param_1,(uint)*(byte *)(param_1 + 0x10),*(byte *)(param_1 + 0x11) + 1 & 0xff);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080967fc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_08096800(param_1);
  return in_lr;
}


