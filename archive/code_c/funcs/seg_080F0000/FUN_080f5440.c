// undefined FUN_080f5440(void)
// entry 0x80f5440


undefined4 FUN_080f5440(int param_1)

{
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080f54c4));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080f54c8,param_1 + 0x54,1);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_080f54cc;
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080f54d0;
  *(undefined2 *)(param_1 + 0x26) = 0xf;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xc0) = *(undefined1 *)((uint)*(byte *)(param_1 + 0x11) + DAT_080f54d4);
  *(undefined2 *)(param_1 + 0xc2) = 0;
  return in_lr;
}


