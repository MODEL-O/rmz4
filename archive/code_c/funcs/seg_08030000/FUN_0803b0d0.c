// undefined FUN_0803b0d0(void)
// entry 0x803b0d0


undefined8 FUN_0803b0d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0x58);
  }
  else {
    *param_2 = *(undefined4 *)(param_1 + 0x54);
    iVar1 = *(int *)(param_1 + 0x58) + DAT_0803b0f4;
  }
  param_2[1] = iVar1;
  return CONCAT44(in_lr,1);
}


