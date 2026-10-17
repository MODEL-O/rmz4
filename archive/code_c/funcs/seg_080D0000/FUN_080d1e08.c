// undefined FUN_080d1e08(void)
// entry 0x80d1e08


undefined4 FUN_080d1e08(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cdbc();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0xb);
  *(undefined2 *)(param_1 + 0x50) = 0x200;
  *(undefined2 *)(param_1 + 0x52) = 0x200;
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d1e50);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  FUN_080d1dd0(param_1);
  return in_lr;
}


