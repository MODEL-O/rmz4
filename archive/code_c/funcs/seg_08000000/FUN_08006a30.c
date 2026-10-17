// undefined FUN_08006a30(void)
// entry 0x8006a30


undefined4 FUN_08006a30(uint param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_08006a64;
  pcVar2 = (char *)(DAT_08006a64 + (param_1 & 0xffff) + -0xe0);
  if (*pcVar2 == *(char *)(((param_1 & 0xffff) + 0x18 & 0xff) * 2 + DAT_08006a68)) {
    *pcVar2 = '\0';
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  return in_lr;
}


