// undefined FUN_0809d3ac(void)
// entry 0x809d3ac


undefined4 FUN_0809d3ac(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 in_lr;
  
  if (CONCAT11(*(undefined1 *)(*(int *)(param_1 + 0x28) + 0x1e),
               *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x70)) == DAT_0809d3fc) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0809d400);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  else {
    if (*(byte *)(param_1 + 0xd) < 8) {
                    /* WARNING: Could not recover jumptable at 0x0809d414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(PTR_PTR_0809d418 + (uint)*(byte *)(param_1 + 0xd) * 4))();
      return uVar2;
    }
    FUN_0801cff0(param_1);
  }
  return in_lr;
}


