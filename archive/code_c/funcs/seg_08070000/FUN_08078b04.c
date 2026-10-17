// undefined FUN_08078b04(void)
// entry 0x8078b04


undefined4 FUN_08078b04(int param_1)

{
  uint uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08002624(0x84);
    FUN_0800249c(0x85,0x2c0);
    *(undefined1 *)(*(int *)(param_1 + 200) + 0xb5) = 1;
    *(undefined1 *)(*(int *)(param_1 + 200) + 0xb6) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xcc) + 0xb6) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xcc) + 0xb9) = 1;
    FUN_08078fdc(param_1,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_08078bac) * 4 +
                        DAT_08078ba8)));
  FUN_08078f28(param_1);
  uVar1 = FUN_080025d8(0x85);
  if ((uVar1 & 0xff) - 3 < 2) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


