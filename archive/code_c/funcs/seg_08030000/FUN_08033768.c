// undefined FUN_08033768(void)
// entry 0x8033768


undefined4 FUN_08033768(int param_1)

{
  char cVar1;
  undefined4 in_lr;
  
  *(undefined1 *)(param_1 + 0x146) = 0;
  cVar1 = FUN_0803a428(param_1,*(char *)(param_1 + 0xc0) != '\x01');
  if (*(char *)(param_1 + DAT_080337bc) == '\x03') {
    cVar1 = '\x02';
  }
  if (cVar1 == '\x02') {
    *(undefined1 *)(param_1 + DAT_080337c0) = 4;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08033b8c(param_1);
  }
  else if (((*(uint *)(param_1 + 600) & 0x40) == 0) || ((*(ushort *)(param_1 + 200) & 0x40) == 0)) {
    if (((*(uint *)(param_1 + 600) & 0x80) == 0) || ((*(ushort *)(param_1 + 200) & 0x80) == 0)) {
      *(undefined1 *)(param_1 + DAT_08033854) = 1;
      *(undefined1 *)(param_1 + 0x102) = 0;
      FUN_08033858(param_1);
    }
    else {
      *(undefined1 *)(param_1 + DAT_08033830) = 6;
      *(undefined1 *)(param_1 + 0x102) = 0;
      FUN_08033ca0(param_1);
    }
  }
  else {
    *(undefined1 *)(param_1 + DAT_080337fc) = 7;
    *(undefined1 *)(param_1 + 0x102) = 0;
    FUN_08033d14(param_1);
  }
  return in_lr;
}


