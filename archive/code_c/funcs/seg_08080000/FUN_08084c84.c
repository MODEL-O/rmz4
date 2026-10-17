// undefined FUN_08084c84(void)
// entry 0x8084c84


undefined4 FUN_08084c84(int param_1)

{
  int iVar1;
  undefined4 in_lr;
  
  if ((*(int *)(param_1 + 0xb4) == 0) || (iVar1 = FUN_0802b3e4(), iVar1 != 0)) {
    *(int *)(param_1 + 0xb4) = 0;
    *(undefined1 *)(param_1 + 0xd) = 2;
    *(undefined1 *)(param_1 + 0xe) = 0;
  }
  return in_lr;
}


