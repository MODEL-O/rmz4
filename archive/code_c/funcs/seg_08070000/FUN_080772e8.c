// undefined FUN_080772e8(void)
// entry 0x80772e8


undefined4 FUN_080772e8(int param_1)

{
  ushort uVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08078fdc(param_1,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_0807735c) * 4 +
                        DAT_08077358)));
  FUN_08078f28(param_1);
  uVar1 = *(ushort *)(DAT_08077360 + 8);
  if ((uVar1 & 8) == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(byte *)(param_1 + 0xf) = (byte)uVar1 & 8;
  }
  return in_lr;
}


