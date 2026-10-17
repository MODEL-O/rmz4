// undefined FUN_0800a314(void)
// entry 0x800a314


undefined4 FUN_0800a314(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 == 1) {
LAB_0800a34e:
    if (*(char *)(DAT_0800a3a8 + DAT_0800a3ac) == '\x01') {
      return in_lr;
    }
    FUN_080074c0(0x10,1,0x35);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return in_lr;
      }
      if (*(char *)(DAT_0800a3a8 + DAT_0800a3ac) == '\0') {
        return in_lr;
      }
      FUN_080074c0(0x10,1,0x34);
      *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      goto LAB_0800a34e;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        return in_lr;
      }
      goto LAB_0800a386;
    }
  }
  if (*(char *)(DAT_0800a3a8 + DAT_0800a3ac) == '\x02') {
    return in_lr;
  }
  FUN_080074c0(0x10,1,0x36);
  *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
LAB_0800a386:
  if (*(char *)(DAT_0800a3a8 + DAT_0800a3ac) != '\x03') {
    FUN_080074c0(0x10,1,0x30);
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


