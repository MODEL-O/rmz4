// undefined FUN_0807e598(void)
// entry 0x807e598


undefined4 FUN_0807e598(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0807e8c8(param_1,3);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807e608) * 4 +
                        DAT_0807e604)));
  if (*(char *)(param_1 + 0x73) == '\x03') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


