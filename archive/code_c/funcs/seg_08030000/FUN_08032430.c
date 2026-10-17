// undefined FUN_08032430(void)
// entry 0x8032430


undefined4 FUN_08032430(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0xf) = 1;
  FUN_08002b10(10);
  if ((*(byte *)(param_1 + 10) >> 4 & 1) == (*(byte *)(param_1 + 0x142) & 1)) {
    FUN_0801cf00(param_1,0x4a00);
  }
  else {
    FUN_0801cf00(param_1,0x4b00);
  }
  if (*(char *)(param_1 + 0xc5) == '\n') {
    bVar1 = *(byte *)(param_1 + 0x142);
    uVar2 = bVar1 & 0x40;
    if ((bVar1 & 0x40) == 0) {
      *(uint *)(param_1 + 0x5c) = uVar2;
    }
    else {
      *(byte *)(param_1 + 0x142) = bVar1 & 0xbf;
      *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x128) >> 2;
      uVar2 = *(int *)(param_1 + 300) >> 2;
    }
    *(uint *)(param_1 + 0x60) = uVar2;
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x142);
    if ((bVar1 & 0x40) != 0) {
      *(byte *)(param_1 + 0x142) = bVar1 & 0xbf;
      *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(param_1 + 0x128);
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_1 + 300);
      *(undefined4 *)(param_1 + 0x11c) = *(undefined4 *)(param_1 + 0x128);
      *(undefined1 *)(param_1 + 0xf) = 2;
      FUN_080325a0(param_1);
      return in_lr;
    }
    uVar3 = DAT_080324e0;
    if ((bVar1 & 1) == 0) {
      uVar3 = 0x100;
    }
    *(undefined4 *)(param_1 + 0x5c) = uVar3;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined2 *)(param_1 + 0x138) = 0;
  if (*(char *)(param_1 + DAT_08032514) == '\0') {
    *(undefined1 *)(param_1 + 0xf) = 2;
    FUN_080325a0(param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0xf) = 1;
    FUN_08032528(param_1);
  }
  return in_lr;
}


