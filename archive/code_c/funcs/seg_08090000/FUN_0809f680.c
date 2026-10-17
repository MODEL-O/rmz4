// undefined FUN_0809f680(void)
// entry 0x809f680


undefined4 FUN_0809f680(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if ((((*(uint *)(param_1 + 0x8c) & 1) == 0) || ((*(byte *)(param_1 + 0x97) & 0xf0) != 0x20)) &&
     (*(char *)(*(int *)(param_1 + 0x28) + 0xd) != '\"')) {
    FUN_0801cff0(param_1);
    if (*(byte *)(param_1 + 0xd) < 9) {
                    /* WARNING: Could not recover jumptable at 0x0809f6e2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0809f6e4))();
      return uVar2;
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809f6c8);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0809f54c(param_1);
  }
  return in_lr;
}


