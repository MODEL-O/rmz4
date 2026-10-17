// undefined FUN_081233ac(void)
// entry 0x81233ac


undefined4 FUN_081233ac(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  undefined4 local_18 [2];
  
  *(int *)(param_1 + DAT_08123460) = *(int *)(param_1 + DAT_08123460) + 1;
  iVar1 = param_1 + 0x9a0;
  FUN_08003470(iVar1);
  *DAT_08123464 = 0;
  local_18[0] = 0;
  FUN_08128be0(local_18,DAT_08123468,DAT_0812346c);
  FUN_0801ca0c(*DAT_08123470,iVar1);
  FUN_0801ca0c(*DAT_08123474,iVar1);
  FUN_0801ca0c(*DAT_08123478,iVar1);
  FUN_0803a7dc(iVar1);
  FUN_0801c924(*DAT_0812347c,iVar1);
  FUN_0801c924(*DAT_08123480,iVar1);
  FUN_0801ca0c(*DAT_08123484,iVar1);
  FUN_0810e4cc();
  FUN_08006d2c(iVar1);
  FUN_08003420(iVar1);
  if (*(char *)(param_1 + 3) == '\0') {
    if ((*(short *)(DAT_08123488 + 2) == 0) || (*(short *)(DAT_08123488 + 2) == 4)) {
      if (*(short *)(param_1 + 6) == 1) {
        if ((*(ushort *)(DAT_0812348c + 6) & 0xc0) != 0) {
          FUN_08002b10(1);
          *(undefined2 *)(param_1 + 6) = 0;
        }
      }
      else if ((*(ushort *)(DAT_081234d4 + 6) & 0xc0) != 0) {
        FUN_08002b10(1);
        *(undefined2 *)(param_1 + 6) = 1;
      }
      FUN_0810d85c((uint)*DAT_081234d8 + DAT_081234dc,8,*(short *)(param_1 + 6) * 2 + 3);
      if ((*(ushort *)(DAT_081234d4 + 6) & 1) == 0) {
        if ((*(ushort *)(DAT_081234d4 + 6) & 2) == 0) {
          return in_lr;
        }
        FUN_08002b10(3);
        *(undefined2 *)(param_1 + 6) = 1;
      }
      else {
        FUN_08002b10(2);
      }
      *(undefined1 *)(param_1 + 3) = 1;
      *DAT_08123500 = *DAT_08123500 | 2;
    }
  }
  else if (*(short *)(DAT_08123528 + 2) == 0) {
    if (*(short *)(param_1 + 6) == 0) {
      *(undefined1 *)(param_1 + DAT_0812352c + 0x18) = 2;
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return in_lr;
}


