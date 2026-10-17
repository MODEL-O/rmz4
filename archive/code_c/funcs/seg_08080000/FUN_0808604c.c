// undefined FUN_0808604c(void)
// entry 0x808604c


undefined4 FUN_0808604c(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined1 auStack_14 [4];
  
  FUN_08129258(auStack_14,DAT_08086118,2);
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808611c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(undefined1 *)(param_1 + 0xd) = auStack_14[*(byte *)(param_1 + 0x10)];
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined1 *)(param_1 + 0xb4) = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x58);
  *(undefined2 *)(param_1 + 0xb8) = 0xe10;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  if (*(byte *)(param_1 + 0x10) == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,DAT_08086120);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08086124,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_08086128;
  FUN_0808612c(param_1);
  return in_lr;
}


