// undefined FUN_080033d4(void)
// entry 0x80033d4


void FUN_080033d4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x200);
  *param_2 = *puVar1;
  *puVar1 = param_2;
  return;
}


