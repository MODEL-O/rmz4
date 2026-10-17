// undefined FUN_08123c84(void)
// entry 0x8123c84


undefined8 FUN_08123c84(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  param_1 = param_1 + DAT_08123ca8;
  if ((*(int *)(param_1 + 0x14) == 0) ||
     (iVar1 = *(int *)(param_1 + 0x14) + -1, *(int *)(param_1 + 0x14) = iVar1, iVar1 == 0)) {
    *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + '\x01';
    *(undefined1 *)(param_1 + 0x19) = 0;
  }
  return CONCAT44(in_lr,1);
}


