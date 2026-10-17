// undefined FUN_081089c0(void)
// entry 0x81089c0


undefined4 FUN_081089c0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  uVar1 = *(byte *)(DAT_08108a0c + 4) & 0x40;
  if ((*(byte *)(DAT_08108a0c + 4) & 0x40) == 0) {
    FUN_0801cc9c(param_1);
    FUN_0801cf00(param_1,DAT_08108a64);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    FUN_08005760(param_1 + 0x74,DAT_08108a68,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_08108a6c;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
    *(uint *)(param_1 + 0xb8) = uVar1;
    if (*(byte *)(param_1 + 0x11) < 2) {
      *(undefined4 *)(param_1 + 0x60) = DAT_08108aa4;
    }
    else {
      *(uint *)(param_1 + 0x60) = uVar1;
    }
    *(undefined2 *)(param_1 + 0x12) = 0x168;
    *(undefined1 *)(param_1 + 0xbc) = 0x40;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08108aa8);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
    FUN_08108aac(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08108a10);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


