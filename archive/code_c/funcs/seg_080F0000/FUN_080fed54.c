// undefined FUN_080fed54(void)
// entry 0x80fed54


undefined4 FUN_080fed54(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  if (((*(uint *)(param_1 + 0x14) & 4) != 0) && (*(char *)(iVar1 + 8) == '\0')) {
    *(undefined4 *)(iVar1 + 0x1bc) = DAT_080fed7c;
  }
  return in_lr;
}


