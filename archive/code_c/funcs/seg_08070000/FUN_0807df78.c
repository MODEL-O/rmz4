// undefined FUN_0807df78(void)
// entry 0x807df78


undefined4 FUN_0807df78(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    iVar1 = *(int *)(param_1 + 0xd8);
    if (iVar1 != 0) {
      *(undefined1 *)(iVar1 + 0xb4) = 1;
      *(int *)(param_1 + 0xd8) = 0;
    }
    FUN_0807e8c8(param_1,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807dffc) * 4 +
                        DAT_0807dff8)));
  if (*(short *)(param_1 + 0xcc) == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


