// undefined FUN_0803a4a8(void)
// entry 0x803a4a8


undefined8 FUN_0803a4a8(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 199) == '\x02') {
    iVar1 = 0;
    if (*(byte *)(param_1 + 0xf3) < 3) goto LAB_0803a4d0;
  }
  else {
    iVar1 = 0;
    if (*(char *)(param_1 + 0xf3) != '\x03') goto LAB_0803a4d0;
  }
  iVar1 = 1;
LAB_0803a4d0:
  if (*(char *)(param_1 + 199) == '\x03') {
    iVar1 = iVar1 + 3;
  }
  return CONCAT44(in_lr,iVar1);
}


