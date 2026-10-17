// undefined FUN_0810847c(void)
// entry 0x810847c


undefined4 FUN_0810847c(int param_1)

{
  undefined2 uVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if (((byte)(*(char *)(param_1 + 0x10) - 7U) < 2) &&
     (*(char *)(*DAT_081084dc + 0xbc + (uint)(*(char *)(param_1 + 0x10) == '\b')) != -1)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081084e0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  else {
    if ((*(byte *)(DAT_08108560 + 4) & 4) != 0) {
      if (*(char *)(param_1 + 0x10) == '\x03') {
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
      if (*(char *)(param_1 + 0x10) == '\x04') {
        *(undefined1 *)(param_1 + 0x10) = 1;
      }
    }
    uVar1 = *(undefined2 *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_08108564);
    FUN_0801cc9c(param_1);
    FUN_0801cf00(param_1,uVar1);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 7;
    FUN_08005760(param_1 + 0x74,DAT_08108568,param_1 + 0x54,0x40);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = DAT_0810856c;
    *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(param_1 + 0xb8) = 0;
    if (*(byte *)(param_1 + 0x11) < 2) {
      *(undefined4 *)(param_1 + 0x60) = DAT_08108598;
    }
    else {
      *(undefined4 *)(param_1 + 0x60) = 0;
    }
    *(undefined1 *)(param_1 + 0x12) = 0xf0;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810859c);
    *(undefined4 *)(param_1 + 0xc) = 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
    FUN_081085a0(param_1);
  }
  return in_lr;
}


