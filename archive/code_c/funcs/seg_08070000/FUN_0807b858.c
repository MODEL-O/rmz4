// undefined FUN_0807b858(void)
// entry 0x807b858


undefined4 FUN_0807b858(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0807e8c8(param_1,1);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807b8c8) * 4 +
                        DAT_0807b8c4)));
  bVar1 = *(byte *)(DAT_0807b8cc + 0x12);
  if ((bVar1 & 1) == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(byte *)(param_1 + 0xf) = bVar1 & 1;
  }
  return in_lr;
}


