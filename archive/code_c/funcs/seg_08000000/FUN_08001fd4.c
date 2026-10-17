// undefined FUN_08001fd4(void)
// entry 0x8001fd4


undefined4 FUN_08001fd4(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 in_lr;
  undefined1 local_c [4];
  
  iVar1 = DAT_08002014;
  *(undefined4 *)(DAT_08002014 + 200) = param_1;
  *(undefined4 *)(iVar1 + 0xcc) = param_2;
  *(uint *)(iVar1 + 0xc4) = param_3;
  *(uint *)(iVar1 + 0xd0) = param_4 & 0xffff | param_4 << 0x10;
  iVar1 = DAT_08002018;
  *(undefined1 **)DAT_08002018 = local_c;
  *(undefined4 *)(iVar1 + 4) = param_1;
  *(uint *)(iVar1 + 8) = param_3 >> 2 | 0x85000000;
  return in_lr;
}


