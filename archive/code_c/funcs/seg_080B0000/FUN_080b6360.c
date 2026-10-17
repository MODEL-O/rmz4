// undefined FUN_080b6360(void)
// entry 0x80b6360


undefined4 FUN_080b6360(int param_1)

{
  sbyte sVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x28);
  sVar1 = *(sbyte *)(param_1 + 0xb5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002b10(0xd2);
    FUN_0801cf00(param_1,DAT_080b63ac);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (((int)(uint)*(byte *)(iVar2 + 0xcf) >> sVar1 & 1U) != 0) {
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


