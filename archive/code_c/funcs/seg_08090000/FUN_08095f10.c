// undefined FUN_08095f10(void)
// entry 0x8095f10


undefined4 FUN_08095f10(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_1c [3];
  
  local_1c[0] = *DAT_08095fb4;
  local_1c[1] = DAT_08095fb4[1];
  local_1c[2] = DAT_08095fb4[2];
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08095fb8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  *(undefined4 *)(param_1 + 0xb8) = local_1c[*(byte *)(param_1 + 0x11)];
  FUN_0801cc9c(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,DAT_08095fbc);
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08095fc0,param_1 + 0x54,0x12);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_08095fc4(param_1);
  return in_lr;
}


