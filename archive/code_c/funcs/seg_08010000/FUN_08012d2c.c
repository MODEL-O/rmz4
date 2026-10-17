// undefined FUN_08012d2c(void)
// entry 0x8012d2c


undefined4 FUN_08012d2c(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xe) == '\0') {
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  iVar1 = *(int *)(param_1 + 0x34);
  if (((DAT_08012d60 < iVar1) && (DAT_08012d68 < (uint)(iVar1 + DAT_08012d64))) &&
     ((uint)(iVar1 + DAT_08012d6c) <= DAT_08012d68)) {
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffe0;
  }
  else {
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x100;
  *(undefined4 *)(param_1 + 0x48) = 0x100;
  return in_lr;
}


