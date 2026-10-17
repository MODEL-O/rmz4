// undefined FUN_0804b1c8(void)
// entry 0x804b1c8


undefined4 FUN_0804b1c8(int param_1)

{
  byte bVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 in_lr;
  
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804b230);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb;
  *(undefined2 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x22) = 0;
  uVar3 = *DAT_0804b234 * DAT_0804b238 + DAT_0804b23c;
  *DAT_0804b234 = uVar3 & 0x7fffffff;
  if (((uVar3 & 0x7fffffff) >> 0x10 & 1) == 0) {
    FUN_0801cf00(param_1,0x1d);
  }
  else {
    FUN_0801cf00(param_1,0x1c);
  }
  FUN_0801cff0(param_1);
  uVar3 = *DAT_0804b274 * DAT_0804b278 + DAT_0804b27c;
  *DAT_0804b274 = uVar3 & 0x7fffffff;
  uVar3 = (uVar3 & 0x7fffffff) >> 0x10 & 1;
  if (uVar3 == 0) {
    bVar1 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar1 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar1;
  *(char *)(param_1 + 0x4c) = (char)uVar3;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_0804b2d0,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0804b2d4;
  uVar4 = DAT_0804b2fc;
  if (*(char *)(param_1 + 0x11) != '\0') {
    uVar4 = 0x2c0;
  }
  *(undefined4 *)(param_1 + 0x5c) = uVar4;
  *(undefined4 *)(param_1 + 0x60) = DAT_0804b300;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  FUN_0804b304(param_1);
  return in_lr;
}


