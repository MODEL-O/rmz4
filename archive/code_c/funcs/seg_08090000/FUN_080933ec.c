// undefined FUN_080933ec(void)
// entry 0x80933ec


undefined4 FUN_080933ec(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  iVar1 = FUN_080947b4(param_1,*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 8;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


