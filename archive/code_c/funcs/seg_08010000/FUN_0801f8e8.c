// undefined FUN_0801f8e8(void)
// entry 0x801f8e8


undefined4 FUN_0801f8e8(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_080033bc(uVar1);
    FUN_08003420(uVar1);
  }
  return in_lr;
}


