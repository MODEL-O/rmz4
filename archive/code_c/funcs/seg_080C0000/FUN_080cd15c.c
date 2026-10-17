// undefined FUN_080cd15c(void)
// entry 0x80cd15c


undefined4 FUN_080cd15c(int param_1)

{
  byte bVar1;
  int *piVar2;
  undefined4 in_lr;
  byte abStack_20 [4];
  undefined4 local_1c [2];
  
  local_1c[1] = DAT_080cd218[1];
  local_1c[0] = *DAT_080cd218;
  FUN_08129258(abStack_20,DAT_080cd21c,2);
  bVar1 = *(byte *)(param_1 + 0x11);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080cd220);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 4);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cc9c(param_1);
  *(undefined1 *)(param_1 + 0x25) = 0x19;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  FUN_0801cf00(param_1,*(undefined2 *)(local_1c + bVar1));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,(uint)abStack_20[bVar1] * 0x18 + DAT_080cd224,param_1 + 0x54,0x40);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080cd228(param_1);
  return in_lr;
}


