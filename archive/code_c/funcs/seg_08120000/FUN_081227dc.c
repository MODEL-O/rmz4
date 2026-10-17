// undefined FUN_081227dc(void)
// entry 0x81227dc


undefined8 FUN_081227dc(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(short *)(param_1 + 10) < 4) && ((*(ushort *)(DAT_08122850 + 6) & 0x80) != 0)) {
    FUN_08002b10(1);
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + 1;
  }
  if ((0 < *(short *)(param_1 + 10)) && ((*(ushort *)(DAT_08122850 + 6) & 0x40) != 0)) {
    FUN_08002b10(1);
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
  }
  FUN_0810d85c((uint)*DAT_08122854 + DAT_08122858,3,*(short *)(param_1 + 10) * 2 + 4);
  if ((*(ushort *)(DAT_08122850 + 4) & 2) != 0) {
    FUN_08002b10(3);
    iVar1 = -2;
    goto LAB_081228c2;
  }
  if ((*(ushort *)(DAT_08122850 + 4) & 1) != 0) {
    if (*(char *)(param_1 + DAT_08122888 + 1) != '\x01') {
LAB_0812288c:
      if (*(char *)(param_1 + DAT_081228b8 + 1) == '\x02') {
        if (*(char *)(param_1 + DAT_081228bc + (int)*(short *)(param_1 + 10)) == '\0')
        goto LAB_0812287e;
      }
      FUN_08002b10(2);
      iVar1 = (int)((*(byte *)(param_1 + 10) + 1) * 0x1000000) >> 0x18;
      goto LAB_081228c2;
    }
    if (*(char *)(param_1 + DAT_08122888 + 0xd + (int)*(short *)(param_1 + 10)) == '\x01')
    goto LAB_0812288c;
LAB_0812287e:
    FUN_08002b10(4);
  }
  iVar1 = 0;
LAB_081228c2:
  return CONCAT44(in_lr,iVar1);
}


