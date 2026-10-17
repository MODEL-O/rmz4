// undefined FUN_08128c40(void)
// entry 0x8128c40


undefined4 FUN_08128c40(undefined4 param_1,undefined4 param_2,uint param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  uint *puVar3;
  undefined4 in_lr;
  
  uVar1 = *DAT_08128ca0;
  *DAT_08128ca0 = 0;
  *DAT_08128ca4 = *DAT_08128ca4 & (ushort)DAT_08128ca8 | *(ushort *)(*DAT_08128cac + 6);
  *DAT_08128cb0 = param_1;
  *DAT_08128cb4 = param_2;
  puVar3 = DAT_08128cb8;
  *DAT_08128cb8 = param_3 & 0xffff | 0x80000000;
  uVar2 = *(ushort *)((int)puVar3 + 2);
  while ((uVar2 & 0x8000) != 0) {
    uVar2 = *DAT_08128cbc;
  }
  *DAT_08128ca0 = uVar1;
  return in_lr;
}


