// undefined FUN_080e20bc(void)
// entry 0x80e20bc


undefined4 FUN_080e20bc(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  undefined4 local_14 [2];
  
  local_14[1] = DAT_080e212c[1];
  local_14[0] = *DAT_080e212c;
  bVar1 = *(byte *)(param_1 + 0x10);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080e2130);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,*(undefined2 *)(local_14 + bVar1));
  FUN_080e2134(param_1);
  return in_lr;
}


