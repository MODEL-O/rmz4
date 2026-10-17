// undefined FUN_080944d0(void)
// entry 0x80944d0


undefined4 FUN_080944d0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 in_lr;
  int local_1c;
  int local_18;
  
  FUN_08002b10(0x2a);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
  uVar1 = DAT_0809456c * *DAT_08094568 + DAT_08094570;
  local_1c = *(int *)(param_1 + 0x54) + (((uVar1 & 0x7fffffff) >> 0x10 & 7) - 3) * 0x100;
  uVar1 = DAT_0809456c * (uVar1 & 0x7fffffff) + DAT_08094570;
  *DAT_08094568 = uVar1 & 0x7fffffff;
  local_18 = *(int *)(param_1 + 0x58) + ((uVar1 & 0x7fffffff) >> 0x10 & 7) * 0x100 + DAT_08094574;
  FUN_080d0c88(1,&local_1c);
  FUN_08094e38(param_1);
  FUN_08094f00(param_1);
  if (*(ushort *)(DAT_08094578 + 0xc) <= DAT_0809457c) {
    *(ushort *)(DAT_08094578 + 0xc) = *(ushort *)(DAT_08094578 + 0xc) + 1;
  }
  FUN_0802abe0(param_1,param_1 + 0x54);
  piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08094580);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0x10);
  return in_lr;
}


