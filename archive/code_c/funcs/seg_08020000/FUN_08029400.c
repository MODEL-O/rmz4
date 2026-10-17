// undefined FUN_08029400(void)
// entry 0x8029400


longlong FUN_08029400(int param_1)

{
  byte bVar1;
  uint in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0xc) + 1) == '\0') {
    if (*(short *)((uint)*(byte *)(*DAT_08029428 + 0x15) * 2 + DAT_08029424) != 0) {
      FUN_0810e518();
    }
  }
  else {
    bVar1 = *(byte *)(DAT_0802944c + 6);
    if (((bVar1 & 1) == 0) || ((bVar1 & 0x20) == 0)) {
      FUN_0810e518(0x33);
    }
    else if ((bVar1 & 0x40) == 0) {
      FUN_0810e518(0x35);
    }
    else if ((bVar1 & 0x80) == 0) {
      FUN_0810e518(0x36);
    }
    else {
      bVar1 = *(byte *)(DAT_0802944c + 7);
      if ((bVar1 & 1) == 0) {
        FUN_0810e518(0x37);
      }
      else if ((((bVar1 & 2) == 0) || ((bVar1 & 4) == 0)) || ((bVar1 & 8) == 0)) {
        FUN_0810e518(0x38);
      }
      else {
        FUN_0810e518(0x3b);
      }
    }
  }
  return (ulonglong)in_lr << 0x20;
}


