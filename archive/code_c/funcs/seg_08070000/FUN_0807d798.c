// undefined FUN_0807d798(void)
// entry 0x807d798


undefined4 FUN_0807d798(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0807e8c8(param_1,1);
    *(undefined4 *)(param_1 + 0x60) = 0x100;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb8) + 0x6800;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807d824) * 4 +
                        DAT_0807d820)));
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  if (*(int *)(param_1 + 0x68) <= iVar1) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


