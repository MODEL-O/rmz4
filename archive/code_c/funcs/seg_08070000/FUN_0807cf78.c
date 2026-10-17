// undefined FUN_0807cf78(void)
// entry 0x807cf78


undefined4 FUN_0807cf78(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = *(int *)(param_1 + 0xd0);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0xbc) = 1;
      *(int *)(param_1 + 0xd0) = 0;
    }
    FUN_0807e8c8(param_1,0);
    *(undefined4 *)(param_1 + 0x68) = 0x50;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807d018) * 4 +
                        DAT_0807d014)));
  if ((*(int *)(param_1 + 0x68) != 0) &&
     (iVar1 = *(int *)(param_1 + 0x68) + -1, *(int *)(param_1 + 0x68) = iVar1, iVar1 == 0)) {
    *(byte *)(param_1 + 0xbf) = *(byte *)(param_1 + 0xbf) | 1;
  }
  if (*(short *)(param_1 + 0xcc) == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


