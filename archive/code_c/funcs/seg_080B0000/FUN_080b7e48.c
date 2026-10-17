// undefined FUN_080b7e48(void)
// entry 0x80b7e48


undefined4 FUN_080b7e48(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xe) == '\0') {
    FUN_0801cc9c(param_1);
    FUN_0801ceec(param_1);
    FUN_0801cf00(param_1,0xb200);
    *(undefined1 *)(param_1 + 0x25) = 0x17;
  }
  FUN_0801cff0(param_1);
  *(int *)(param_1 + 0x54) = *(int *)(iVar1 + 0x54) + DAT_080b7ea4;
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x58) + 0x2800;
  if (*(char *)(iVar1 + 0xd6) != '\0') {
    *(char *)(param_1 + 0xd) = *(char *)(param_1 + 0xd) + '\x01';
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


