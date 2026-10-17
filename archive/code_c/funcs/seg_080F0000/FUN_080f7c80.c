// undefined FUN_080f7c80(void)
// entry 0x80f7c80


undefined4 FUN_080f7c80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  iVar1 = DAT_080f7cf4;
  if (*(byte *)(param_1 + 0xe) < 5) {
                    /* WARNING: Could not recover jumptable at 0x080f7c92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(PTR_PTR_080f7c94 + (uint)*(byte *)(param_1 + 0xe) * 4))();
    return uVar2;
  }
  *(int *)(param_1 + 0x54) = *(int *)(DAT_080f7cf4 + 0x38) + *(int *)(param_1 + 0x5c) + DAT_080f7cf8
  ;
  *(int *)(param_1 + 0x58) = *(int *)(iVar1 + 0x3c) + *(int *)(param_1 + 0x60) + DAT_080f7cfc;
  FUN_0801cff0(param_1);
  return in_lr;
}


