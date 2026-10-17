// undefined FUN_0803438c(void)
// entry 0x803438c


undefined4 FUN_0803438c(int param_1)

{
  undefined2 uVar1;
  undefined4 in_lr;
  
  if ((*(char *)(param_1 + 0xc0) == '\x04') || (*(char *)(param_1 + 0xc1) == '\x04')) {
    *(byte *)(param_1 + DAT_080343e4) = *(byte *)(param_1 + DAT_080343e4) | 4;
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + DAT_080343ec) * 4 + DAT_080343e8)
                );
  }
  else {
    *(undefined1 *)(param_1 + 0x100) = 0;
    uVar1 = FUN_0802b7d8(param_1);
    FUN_0801cf00(param_1,uVar1);
  }
  return in_lr;
}


