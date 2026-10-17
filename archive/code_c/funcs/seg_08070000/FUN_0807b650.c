// undefined FUN_0807b650(void)
// entry 0x807b650


undefined4 FUN_0807b650(int param_1)

{
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
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807b6c0) * 4 +
                        DAT_0807b6bc)));
  if ((*(ushort *)(DAT_0807b6c4 + 8) & 8) == 0) {
    FUN_0807e9b0(param_1);
  }
  return in_lr;
}


