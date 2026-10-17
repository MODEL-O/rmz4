// undefined FUN_0807b794(void)
// entry 0x807b794


undefined4 FUN_0807b794(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    if (*(char *)(param_1 + 0x11) == '\x01') {
      FUN_08002b10(DAT_0807b83c);
    }
    iVar1 = DAT_0807b840;
    *(int *)(param_1 + 0xb4) = *(int *)(DAT_0807b840 + 0x38) + DAT_0807b844;
    *(int *)(param_1 + 0xb8) = *(int *)(iVar1 + 0x3c) + DAT_0807b848;
    FUN_0807e8c8(param_1,1);
    *(undefined4 *)(param_1 + 0x60) = DAT_0807b84c;
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0xb8) + 0x3800;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807b854) * 4 +
                        DAT_0807b850)));
  iVar1 = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
  *(int *)(param_1 + 0x58) = iVar1;
  if (iVar1 <= *(int *)(param_1 + 0x68)) {
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x68);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


