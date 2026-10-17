// undefined FUN_0807c8d8(void)
// entry 0x807c8d8


undefined4 FUN_0807c8d8(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xd5);
  if (*(char *)(param_1 + 0xf) == '\0') {
    *(byte *)(param_1 + 0xd4) = (byte)(1 << (uint)bVar1) | *(byte *)(param_1 + 0xd4);
    FUN_0807e8c8(param_1,0x15);
    *(int *)(param_1 + 0x54) =
         *(int *)(param_1 + 0xb4) + *(int *)((uint)bVar1 * 4 + DAT_0807c9ac) + 0x7800;
    *(undefined1 *)(param_1 + 0x12) = 0x18;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807c9b4) * 4 +
                        DAT_0807c9b0)));
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
  }
  uVar2 = FUN_08128fb8((uint)*(byte *)(param_1 + 0x12) << 6,0x18);
  *(ushort *)(DAT_0807c9bc + 2) =
       *(short *)((uVar2 & 0xff) * 2 + DAT_0807c9b8) >> 4 & 0x1fU | 0x1000;
  if ((*(char *)(param_1 + 0x73) == '\x03') && (*(char *)(param_1 + 0x12) == '\0')) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


