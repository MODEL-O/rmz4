// undefined FUN_080f560c(void)
// entry 0x80f560c


undefined4 FUN_080f560c(int param_1)

{
  undefined1 uVar1;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x10) * 2 + DAT_080f5658));
  *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | 8;
  *(undefined4 *)(param_1 + 0x30) = DAT_080f565c;
  *(undefined2 *)(param_1 + 0x26) = 0xf;
  *(undefined4 *)(param_1 + 0xb4) = DAT_080f5660;
  uVar1 = FUN_080f57a4(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0xb8) = uVar1;
  return in_lr;
}


