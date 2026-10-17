// undefined FUN_08127d8c(void)
// entry 0x8127d8c


undefined4 FUN_08127d8c(void)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_8;
  undefined4 uStack_4;
  
  piVar1 = (int *)*DAT_08127dd8;
  uStack_4 = in_lr;
  if ((uint)(*piVar1 + DAT_08127ddc) < 2) {
    *piVar1 = *piVar1 + 10;
    if ((*DAT_08127de0 & 0x2000000) != 0) {
      *DAT_08127de0 = DAT_08127de4;
    }
    *DAT_08127de8 = 0x400;
    local_8 = 0;
    FUN_08128be4(&local_8,piVar1 + 0xd4,DAT_08127dec);
  }
  return uStack_4;
}


