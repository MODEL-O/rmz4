// undefined FUN_08078fa0(void)
// entry 0x8078fa0


undefined4 FUN_08078fa0(int param_1)

{
  ushort uVar1;
  ushort *puVar2;
  undefined4 in_lr;
  
  puVar2 = (ushort *)(param_1 + 0xd4);
  uVar1 = *puVar2;
  *puVar2 = uVar1 + 1;
  if ((0x68 < (ushort)(uVar1 + 1)) || (*(char *)(param_1 + 0xd6) != '\x03')) {
    FUN_08002b10(400);
    *(undefined1 *)(param_1 + 0xd6) = 3;
    *puVar2 = 0;
  }
  return in_lr;
}


