// undefined FUN_080effa4(void)
// entry 0x80effa4


undefined4 FUN_080effa4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
LAB_080f0014:
    if ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 1) == 0) goto LAB_080f0050;
    FUN_0801cf00(param_1,0xc200);
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) goto LAB_080f0050;
      *(undefined2 *)(DAT_080f002c + 0x184) = 0x200;
      *(undefined2 *)(DAT_080f0030 + 0x184) = 4;
      FUN_0801cf00(param_1,DAT_080f0034);
      *(byte *)(param_1 + 0x49) = *(byte *)(param_1 + 0x49) & 0xf3;
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
      *(undefined1 *)(param_1 + 0x4c) = 0;
      *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
      uVar2 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = uVar2;
      *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
      goto LAB_080f0014;
    }
    if ((bVar1 != 2) || ((*(byte *)(*(int *)(param_1 + 0x18) + 9) & 2) == 0)) goto LAB_080f0050;
    FUN_081126ac(DAT_080f005c,DAT_080f0060);
  }
  *(char *)(param_1 + 0x11) = *(char *)(param_1 + 0x11) + '\x01';
LAB_080f0050:
  FUN_0801cff0(param_1);
  return in_lr;
}


