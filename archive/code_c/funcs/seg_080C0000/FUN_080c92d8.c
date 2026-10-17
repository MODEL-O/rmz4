// undefined FUN_080c92d8(void)
// entry 0x80c92d8


undefined4 FUN_080c92d8(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 in_lr;
  
  if ((*(byte *)(param_1 + 0xd) < 3) && (1 < *(byte *)(*(int *)(param_1 + 0x28) + 0xc))) {
    piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c95a4);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 8);
    FUN_080c88ec(param_1);
  }
  else {
    FUN_0801cff0(param_1);
    uVar1 = *(undefined1 *)(param_1 + 0x11);
    FUN_08129120(uVar1,6);
    FUN_08129198(uVar1,6);
    if (*(byte *)(param_1 + 0xd) < 5) {
                    /* WARNING: Could not recover jumptable at 0x080c9338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(PTR_PTR_080c9344 + (uint)*(byte *)(param_1 + 0xd) * 4))();
      return uVar2;
    }
  }
  return in_lr;
}


