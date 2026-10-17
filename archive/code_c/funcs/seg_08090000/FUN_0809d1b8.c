// undefined FUN_0809d1b8(void)
// entry 0x809d1b8


undefined4 FUN_0809d1b8(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x28) + 0x1e),
               *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x70)) == DAT_0809d208) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809d20c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  else {
    FUN_0801cff0(param_1);
    if (*(byte *)(param_1 + 0xd) < 10) {
                    /* WARNING: Could not recover jumptable at 0x0809d226. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0809d228))();
      return uVar2;
    }
  }
  return in_lr;
}


