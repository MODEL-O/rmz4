// undefined FUN_080adbcc(void)
// entry 0x80adbcc


undefined4 FUN_080adbcc(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 in_lr;
  
  if (*(byte *)(param_1 + 0xb8) - 1 == (uint)*(byte *)(param_1 + 0x10)) {
    uVar2 = FUN_080adb98(param_1);
    iVar1 = DAT_080adc70;
    iVar3 = *(short *)((uVar2 + 0x40 & 0xff) * 2 + DAT_080adc70) * -0x700;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x5c) = iVar3 >> 8;
    iVar3 = *(short *)((uVar2 & 0xff) * 2 + iVar1) * -0x700;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 0x60) = iVar3 >> 8;
    FUN_08005784(param_1 + 0x74,DAT_080adc74);
  }
  else {
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0xb4;
    FUN_0801cf00(param_1,DAT_080adc0c);
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_08002b10(DAT_080adc10);
  }
  *(undefined1 *)(param_1 + 0xb9) = 1;
  return in_lr;
}


